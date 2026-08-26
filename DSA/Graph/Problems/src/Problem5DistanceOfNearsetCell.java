import java.util.*;

public class Problem5DistanceOfNearsetCell {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args){
        int n,m;
        System.out.println("Enter rows ans cols: ");
        n=sc.nextInt();
        m= sc.nextInt();
        ArrayList<ArrayList<Integer>>grid=new ArrayList<>();
        ArrayList<ArrayList<Integer>>visited=new ArrayList<>();
        ArrayList<ArrayList<Integer>>ans=new ArrayList<>();
        for (int i = 0; i < n; i++) {

            grid.add(new ArrayList<>());
            visited.add(new ArrayList<>());
            ans.add(new ArrayList<>());

            for (int j = 0; j < m; j++) {
                visited.get(i).add(0);
                ans.get(i).add(0);
            }
        }
        System.out.println("Enter the grid: " );
        Queue<int[]>queue=new ArrayDeque<>();
        for (int i = 0; i <n ; i++) {
            System.out.println("Row: "+i);
            for (int j = 0; j <m ; j++) {
                int ele= sc.nextInt();
                grid.get(i).add(ele);
                if (ele==1){
                    queue.add(new int[]{i,j,0});
                }
            }
        }
        while (!queue.isEmpty()){
            int size=queue.size();
            for (int i = 0; i <size ; i++) {
                int []temp=queue.poll();
                if (temp == null) {
                    throw new AssertionError();
                }
                int x=temp[0];
                int y=temp[1];
                int d=temp[2];

                if (visited.get(x).get(y)==0){
                    visited.get(x).set(y,1);
                    ans.get(x).set(y,d);
                    int[]dx=new int[]{0,1,0,-1};
                    int[]dy=new int[]{-1,0,1,0};
                    for (int j = 0; j <4 ; j++) {
                        int r=x+dx[j];
                        int c=y+dy[j];
                        if (r>=0 && r<n && c>=0 && c<m){
                            queue.add(new int[]{r,c,d+1});
                        }
                    }
                }
            }
        }

        System.out.println("Answer:");

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {
                System.out.print(ans.get(i).get(j) + " ");
            }

            System.out.println();
        }
    }
}
