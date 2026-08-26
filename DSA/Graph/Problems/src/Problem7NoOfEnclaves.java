//COunt the no of cells disconnected from the Border cells

import java.util.*;

public class Problem7NoOfEnclaves {
    public static void bfs(int row, int col, ArrayList<ArrayList<Integer>>grid, ArrayList<ArrayList<Integer>>visited){
        visited.get(row).set(col,1);

        int []dx={0,1,0,-1};
        int []dy={-1,0,1,0};
        Queue<int []>queue=new ArrayDeque<>();
        queue.add(new int[]{row,col});
        while (!queue.isEmpty()){
            int []temp=queue.peek();
            queue.poll();
            int x=temp[0];
            int y=temp[1];
            for (int i = 0; i <4 ; i++) {
                int r=x+dx[i];
                int c=y+dy[i];
                if (r>=0 && r<grid.size() && c>=0 && c<grid.get(0).size() && grid.get(r).get(c)==1 && visited.get(r).get(c)==0){
                    visited.get(r).set(c,1);
                    queue.add(new int[]{r,c});
                }
            }
        }

    }
    public static void dfs(int row,int col,ArrayList<ArrayList<Integer>>grid ,ArrayList<ArrayList<Integer>>visited){
        Stack<int []>stack=new Stack<>();
        visited.get(row).set(col,1);
        stack.push(new int[]{row,col});
        while (!stack.empty()){
            int []temp=stack.pop();
            int x=temp[0];
            int y=temp[1];
            int []dx={0,1,0,-1};
            int []dy={-1,0,1,0};
            for (int i = 0; i <4 ; i++) {
                int r=x+dx[i];
                int c=y+dy[i];
                if (r>=0 && r<grid.size() && c>=0 && c<grid.get(0).size() && grid.get(r).get(c)==1 && visited.get(r).get(c)==0){
                    visited.get(r).set(c,1);
                    stack.push(new int[]{r,c});
                }
            }
        }
    }
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args){
        int row;
        int col;
        System.out.println("Enter row and col: ");
        row=sc.nextInt();
        col=sc.nextInt();
        ArrayList<ArrayList<Integer>>grid=new ArrayList<>();
        ArrayList<ArrayList<Integer>>visited=new ArrayList<>();
        for (int i = 0; i <row ; i++) {
            grid.add(new ArrayList<>());
            visited.add(new ArrayList<>());
        }
        for (int i = 0; i <row ; i++) {
            System.out.println("Row no: "+i);
            for (int j = 0; j <col ; j++) {
                int ele= sc.nextInt();
                grid.get(i).add(ele);
                visited.get(i).add(0);
            }
        }
        //Border rows
        for (int i = 0; i <col ; i++) {
            if (grid.get(0).get(i)==1&& visited.get(0).get(i)==0){
                dfs(0,i,grid,visited);
            }
            if (grid.get(grid.size()-1).get(i)==1 && visited.get(grid.size()-1).get(i)==0){
                dfs(grid.size()-1,i,grid,visited);
            }
        }

        //Border cols
        for (int i = 0; i <row ; i++) {
            if(grid.get(i).get(0)==1&& visited.get(i).get(0)==0){
                dfs(i,0,grid,visited);
            }
            if (grid.get(i).get(grid.size()-1)==1 && visited.get(i).get(grid.get(0).size()-1)==0){
                dfs(i,grid.get(0).size()-1,grid,visited);
            }
        }

        //count cells
        int ans=0;
        for (int i = 0; i <row ; i++) {
            for (int j = 0; j <col ; j++) {
                if (grid.get(i).get(j)==1 && visited.get(i).get(j)==0){
                    ans++;
                }
            }
        }
        System.out.println(ans);
    }
}
