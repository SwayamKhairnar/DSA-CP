import java.util.*;

public class Problem8NoOdDistinctIslands {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args){
        int n,m;
        n=sc.nextInt();
        m=sc.nextInt();
        ArrayList<ArrayList<Integer>>adjLs=new ArrayList<>();
        HashSet<int[]>hashSet=new HashSet<>();
        ArrayList<ArrayList<Integer>>visited=new ArrayList<>();
        for (int i = 0; i <n ; i++) {
            adjLs.add(new ArrayList<>());
            visited.add(new ArrayList<>());
        }
        for (int i = 0; i <n ; i++) {
            for (int j = 0; j <m ; j++) {
                visited.get(i).add(0);
            }
        }
        for (int i = 0; i <n ; i++) {
            for (int j = 0; j <m ; j++) {
                int ele= sc.nextInt();
                adjLs.get(i).add(ele);
            }
        }
        for (int i = 0; i <n ; i++) {
            for (int j = 0; j <m ; j++) {
                if(visited.get(i).get(j)==0){
                    bfs(i,j,adjLs,visited,hashSet);
                }
            }
        }
        System.out.println("No of islands: ");
        System.out.println(hashSet.size());
    }

    private static void bfs(int i, int j, ArrayList<ArrayList<Integer>> adjLs, ArrayList<ArrayList<Integer>> visited, HashSet<int[]> hashSet) {
        visited.get(i).set(j,1);
        hashSet.add(new int[]{0,0});
        Queue<int []>queue=new ArrayDeque<>();
        queue.add(new int[]{i,j});
        while (!queue.isEmpty()){
            int []temp=queue.peek();
            queue.poll();
            int dx[]={-1,0,1,0};
            int dy[]={0,1,0,-1};
            int x=temp[0];
            int y=temp[1];
            for (int k = 0; k <4 ; k++) {
                int r=x+dx[k];
                int c=y+dy[k];
                if(r>=0 && r<adjLs.size() && c>=0 && c<adjLs.get(0).size() && adjLs.get(r).get(c)==1){
                    hashSet.add(new int[]{r-i,c-j});
                }
            }
        }
    }
}
