package src;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BFS {

    public static void main(String[] args) {
        Graph g=new Graph();
        ArrayList<ArrayList<Integer>>adjLs=g.createGraph();
        Traversal traversal=new Traversal();
        traversal.bfs(adjLs);
    }
}