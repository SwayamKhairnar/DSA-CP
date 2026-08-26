import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Problem11CycleInDirectedBfs {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args){
        int vertices;
        int edges;
        vertices=sc.nextInt();
        edges=sc.nextInt();
        ArrayList<ArrayList<Integer>>adjLs=new ArrayList<>();
        for (int i = 0; i <vertices ; i++) {
            adjLs.add(new ArrayList<>());
        }
        for (int i = 0; i <vertices ; i++) {
            System.out.println("Vertex no "+(i+1));
            int u,v;
            u= sc.nextInt();
            v=sc.nextInt();
            adjLs.get(u).add(v);
        }
        int []visited=new int[vertices];
        int []pathVisited=new int[vertices];
        Arrays.fill(visited,0);
        Arrays.fill(pathVisited,0);
        boolean found=false;
        for (int i = 0; i <vertices ; i++) {
            if (visited[i]==0){
                if(undirectedDetectCycleBFS(i,adjLs,visited,pathVisited)){
                    found=true;
                }
            }
        }
        if (found) System.out.println("Cyclic!" );
        else{
            System.out.println("Acyclic! ");
        }
    }

    private static boolean undirectedDetectCycleBFS(int node, ArrayList<ArrayList<Integer>> adjLs, int[] visited, int[] pathVisited) {
        visited[node]=1;
        pathVisited[node]=1;
        for (int adjNodes:adjLs.get(node)){
            if(visited[adjNodes]==0){
                if (undirectedDetectCycleBFS(adjNodes,adjLs,visited,pathVisited)){
                    return true;
                }
            }
            else{
                if (pathVisited[adjNodes]==1){
                    return true;
                }
            }
        }
        pathVisited[node]=0;
        return false;
    }
}
