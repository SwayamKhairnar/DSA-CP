package src;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Traversal{
    Scanner sc=new Scanner(System.in);
    public void bfs(ArrayList<ArrayList<Integer>>adjLs){
        int src;
        System.out.println("Enter the src node to begin The traversal: ");
        src=sc.nextInt();
        Queue<Integer> queue=new LinkedList<Integer>();
        int nodes=adjLs.size();
        int []visited=new int[nodes];
        queue.add(src);
        visited[src]=1;
        System.out.println("Bfs traversal: ");
        while (!queue.isEmpty()){
            int node=queue.peek();
            System.out.println(node);
            queue.poll();
            int size=adjLs.get(node).size();
            for (int i = 0; i <size ; i++) {
                if(visited[adjLs.get(node).get(i)]==0){
                    visited[adjLs.get(node).get(i)]=1;
                    queue.add(adjLs.get(node).get(i));
                }
            }
        }
        System.out.println();
    }

    public void dfs(ArrayList<ArrayList<Integer>> adjLs){
        System.out.print("Enter source node: ");

        int src = sc.nextInt();

        int[] visited = new int[adjLs.size()];

        dfsHelper(src, adjLs, visited);
    }
    public void dfsHelper(int node,ArrayList<ArrayList<Integer>>adjLs,int[]visited){
        visited[node]=1;
        System.out.println(node);
        for (int i = 0; i <adjLs.get(node).size() ; i++) {
            int adjNode=adjLs.get(node).get(i);
            if (visited[adjNode]==0)
                dfsHelper(adjNode,adjLs,visited);
            }
    }
}
