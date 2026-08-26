package src;

import java.util.ArrayList;

public class DFS {
    public static void main(String[] args){
        Graph g=new Graph();
        ArrayList<ArrayList<Integer>>adjLs=g.createGraph();
        Traversal traversal=new Traversal();
        traversal.dfs(adjLs);
    }
}
