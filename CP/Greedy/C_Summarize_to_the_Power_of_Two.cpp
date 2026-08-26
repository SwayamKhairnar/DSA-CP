def PrintResults(reference_day, customer_count, order_count, ticket_count, customers, customer_details, segment_customers):
    result = []
    read = sys.stdin.buffer.readline

    stats = {cid: {'completed':0,'returned':0,'valid':0,'spend':0,'latest':None,'ticket_w':0}
              for cid in customer_details}

    for _ in range(order_count):
        parts = read().decode().split()
        order_id, cust_id, day_s, amt_s, status = parts[0], parts[1], parts[2], parts[3], parts[4]
        day, amt = int(day_s), int(amt_s)

        if cust_id not in customer_details: continue
        if status not in ('COMPLETED','RETURNED'): continue
        if not (1 <= day <= reference_day): continue
        if not (amt > 0): continue

        s = stats[cust_id]
        s['valid'] += 1
        if status == 'COMPLETED':
            s['completed'] += 1
            s['spend'] += amt
            if s['latest'] is None or day > s['latest']:
                s['latest'] = day
        else:
            s['returned'] += 1

    weight_map = {'LOW':1,'MEDIUM':2,'HIGH':3}
    for _ in range(ticket_count):
        parts = read().decode().split()
        ticket_id, cust_id, priority = parts[0], parts[1], parts[2]
        if cust_id not in customer_details: continue
        if priority not in weight_map: continue
        stats[cust_id]['ticket_w'] += weight_map[priority]

    # segment average completed spend
    seg_avg = {}
    for seg, ids in segment_customers.items():
        total = sum(stats[cid]['spend'] for cid in ids)
        seg_avg[seg] = total // len(ids) if ids else 0

    rows = []
    for cid, name, segment, index in customers:
        s = stats[cid]
        completed, returned, valid, spend = s['completed'], s['returned'], s['valid'], s['spend']

        inactive_days = reference_day + 1 if completed == 0 else reference_day - s['latest']
        return_pct = 0 if valid == 0 else (returned * 100) // valid
        avg = seg_avg.get(segment, 0)

        score = 0
        score += 5 if inactive_days >= 90 else 0
        score += 3 if completed == 0 else 0
        score += 2 if return_pct >= 40 else 0
        score += 2 if spend < avg else 0
        score += s['ticket_w']

        level = 'HIGH' if score >= 8 else 'MEDIUM' if score >= 5 else 'LOW'
        if level in ('HIGH','MEDIUM'):
            rows.append((name, level, score, inactive_days, index))

    order_key = {'HIGH':0,'MEDIUM':1}
    rows.sort(key=lambda r: (order_key[r[1]], -r[2], -r[3], r[4]))

    for name, level, score, inactive_days, index in rows:
        result.append(f"{name}-{level}-{score}-{inactive_days}")

    return result