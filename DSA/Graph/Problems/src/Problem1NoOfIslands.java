import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Queue;
import java.util.Scanner;

class noOfIslands {
    public int count(ArrayList<ArrayList<Integer>> grid) {
        int count=0;
        int[][]visited=new int[grid.size()][grid.get(0).size()];
        int ans=0;
        for (int i = 0; i < grid.size() ; i++) {
            for (int j = 0; j <grid.get(0).size() ; j++) {
               if(grid.get(i).get(j)==1 && visited[i][j]==0){
                   bfsHelper(i,j,grid,visited);
                   ans++;
               }
            }
        }
        return ans;
    }
    public void bfsHelper(int i,int j,ArrayList<ArrayList<Integer>>grid,int[][]visited){
           int[]dx={0,1,0,-1};
           int[]dy={-1,0,1,0};
           visited[i][j]=1;
        Queue<int[]>queue=new ArrayDeque<>();
        int n=grid.size();
        int m=grid.get(0).size();
        queue.add(new int[]{i,j});
        while (!queue.isEmpty()){
            int r=queue.peek()[0];
            int c=queue.peek()[1];
            queue.poll();
            for (int k = 0; k <4 ; k++) {
                int x=r+dx[k];
                int y=c+dy[k];
                if(x>=0 && x<n && y>=0 && y<m
                && grid.get(x).get(y)==1 && visited[x][y]==0){
                    queue.add(new int[]{x,y});
                    visited[x][y]=1;
                }
            }
        }
    }
}

class islandCount{
    public static void main(String[] args){
        ArrayList<ArrayList<Integer>>grid = new ArrayList<>();
        int row,col;
        System.out.println("Enter values of row and col : ");
        Scanner sc=new Scanner(System.in);
        row= sc.nextInt();
        col= sc.nextInt();
        for (int i = 0; i <row ; i++) {
            grid.add(new ArrayList<>());
        }
        for (int i = 0; i <row ; i++) {
            for (int j = 0; j <col ; j++) {
                int ele;
                ele=sc.nextInt();
                grid.get(i).add(ele);
            }
        }
        System.out.println(grid);
        noOfIslands cp=new noOfIslands();
        System.out.println(cp.count(grid));

    }
}