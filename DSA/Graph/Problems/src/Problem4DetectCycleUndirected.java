import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class detectCycleBFS{
    boolean cycleFound(ArrayList<ArrayList<Integer>>adjLs){
        int[]visited=new int[adjLs.size()+1];
        Queue<int[]>queue=new LinkedList<>();
        int srcNode;
        System.out.println("Enter the src node: ");
        Scanner sc=new Scanner(System.in);
        srcNode= sc.nextInt();
        visited[srcNode]=1;
        queue.add(new int[]{srcNode,-1});
        while (!queue.isEmpty()){
            int node=queue.peek()[0];
            int parent=queue.peek()[1];
            queue.poll();
            int adjSize=adjLs.get(node).size();
            for (int i = 0; i <adjSize ; i++) {
                int adjNode=adjLs.get(node).get(i);
                if(visited[adjNode]==0){
                    visited[adjNode]=1;
                    queue.add(new int[]{adjNode,node});
                }
                else if(adjNode!=parent){
                    return true;
                }
            }
        }
        return false;
    }
}

class detectCycleDfs{
    void dfs(ArrayList<ArrayList<Integer>>adjLs){
        int[]visited=new int[adjLs.size()+1];
        Queue<int[]>queue=new LinkedList<>();
        int srcNode;
        System.out.println("Enter the src node: ");
        Scanner sc=new Scanner(System.in);
        srcNode= sc.nextInt();
        visited[srcNode]=1;
        if(dfsHelper(srcNode,-1,adjLs,visited)) System.out.println("Cyclic! ");
        else{
            System.out.println("Acyclic");
        }
    }
    boolean dfsHelper(int node,int parent,ArrayList<ArrayList<Integer>>adjLs,int[]visited){
        visited[node]=1;
        int adjSize=adjLs.get(node).size();
        for (int i = 0; i < adjSize; i++) {
            int adjNode=adjLs.get(node).get(i);
            if(visited[adjNode]==0){
                visited[adjNode]=1;
                if(dfsHelper(adjNode,node,adjLs,visited)){
                    return true;
                }
            }
            else if(adjNode!=parent){
                return true;
            }
        }
        return false;
    }
}



public class Problem4DetectCycleUndirected {
   public static void main(String[] args){
       detectCycleDfs detectCycle=new detectCycleDfs();
       ArrayList<ArrayList<Integer>>adjLs=new ArrayList<>();int vertices;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter no of Vertices: ");
       vertices=sc.nextInt();

       for (int i = 0; i <=vertices ; i++) {
            adjLs.add(new ArrayList<>());
       }
       int connections;
       System.out.println("Enter no of Connections: ");
       connections= sc.nextInt();
           for (int j = 0; j <connections ; j++) {
               System.out.println("Connection: "+(j+1));
               int u,v;
               u=sc.nextInt();
               v=sc.nextInt();
               adjLs.get(u).add(v);
               adjLs.get(v).add(u);
           }

       detectCycle.dfs(adjLs);
   }
}
