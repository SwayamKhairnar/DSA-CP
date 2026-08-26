import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;


public class Problem10BipartiteDfs {
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
                if(!detectBipartite(i,0, adjLs, col)){
                    System.out.println("Not bipartite! ");
                    return;
                }
            }
        }
        System.out.println("Bipartite! ");
        return;
}

    private static boolean detectBipartite(int node, int color, ArrayList<ArrayList<Integer>> adjLs, int[] col) {
        col[node]=color;
        for (int adjNode:adjLs.get(node)){
            if (col[adjNode]==-1){
                if (!detectBipartite(adjNode,1-color,adjLs,col)){
                    return false;
                }
            }
            else {
                if (col[adjNode]==col[node]){
                    return false;
                }
            }
        }
        return true;
    }
    }
