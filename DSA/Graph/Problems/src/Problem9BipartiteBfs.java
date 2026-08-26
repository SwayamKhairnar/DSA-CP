import java.util.*;

public class Problem9BipartiteBfs {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args){
        int vertices;
        int edges;
        vertices=sc.nextInt();
        edges= sc.nextInt();
        ArrayList<ArrayList<Integer>>adjLs=new ArrayList<>();
        for (int i = 0; i <vertices ; i++) {
            adjLs.add(new ArrayList<>());
        }
        for (int i = 0; i <edges ; i++) {
            int u;
            int v;
            u=sc.nextInt();
            v=sc.nextInt();
            adjLs.get(u).add(v);
            adjLs.get(v).add(u);
        }
        int []col=new int[vertices];
        Arrays.fill(col,-1);
        for (int i = 0; i <vertices ; i++) {
            if (col[i]==-1){
                if(!detectBipartite(i, adjLs, col)){
                    System.out.println("Not bipartite! ");
                    return;
                }
            }
        }
        System.out.println("Bipartite! ");
        return;
    }

    private static boolean detectBipartite(int node, ArrayList<ArrayList<Integer>> adjLs, int[] col) {
        col[node]=0;
        Queue<Integer>queue=new ArrayDeque<>();
        queue.add(node);
        while (!queue.isEmpty()){
            int currNode=queue.poll();
            for (Integer adjNode: adjLs.get(currNode)){
                if (col[adjNode]==-1){
                    col[adjNode]= 1-col[currNode];
                    queue.add(adjNode);
                }
                else{
                    if (col[adjNode]==col[currNode]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
}
