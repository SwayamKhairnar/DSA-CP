import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Queue;
import java.util.Scanner;

class floodFill{
    public void fill(ArrayList<ArrayList<Integer>>grid){
        System.out.println("Enter the src node coordinates: ");
        int row,col;
        Scanner sc=new Scanner(System.in);
        row= sc.nextInt();
        col=sc.nextInt();
        int n=grid.size();
        int m=grid.get(0).size();
        System.out.println("Enter which color to use in floodfill: ");
        int color= sc.nextInt();
        int originalColor=grid.get(row).get(col);
        if(originalColor==color)return;
        Queue<int[]>queue=new ArrayDeque<>();
        queue.add(new int[]{row,col});
        int[][]visited=new int[grid.size()][grid.get(0).size()];
        visited[row][col]=1;
        grid.get(row).set(col,color);
        while (!queue.isEmpty()){
            int r=queue.peek()[0];
            int c=queue.peek()[1];
            queue.poll();

            for (int i = -1; i <=1 ; i++) {
                for (int j = -1; j <=1 ; j++) {
                    int x=r+i;
                    int y=c+j;
                    if(x>=0 && x<n && y>=0 && y<m
                    && visited[x][y]==0 && grid.get(x).get(y)==originalColor){
                        queue.add(new int[]{x,y});
                        grid.get(x).set(y,color);
                        visited[x][y]=1;
                    }
                }
            }
        }
        System.out.println(grid);
    }
}

public class Problem2FloodFillAlgo {
    public static void main(String[] args){
        int row,col;
        System.out.println("Enter no of Rows and Columns: ");
        Scanner sc=new Scanner(System.in);
        row=sc.nextInt();
        col=sc.nextInt();
        ArrayList<ArrayList<Integer>>grid=new ArrayList<>();
        for (int i = 0; i <row ; i++) {
            grid.add(new ArrayList<>());
        }
        for (int i = 0; i <row ; i++) {
            System.out.println("Enter row: "+(i+1));
            for (int j = 0; j <col ; j++) {
                int ele =sc.nextInt();
                grid.get(i).add(ele);
            }
        }
        floodFill f=new floodFill();
        f.fill(grid);
    }
}
