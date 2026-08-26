package src;

import java.util.ArrayList;

public class countProvinces {

    public int countProvince(ArrayList<ArrayList<Integer>> adjLs){

        int[] visited = new int[adjLs.size()];

        int count = 0;

        for(int i = 1; i < adjLs.size(); i++){

            if(visited[i] == 0){

                dfs(i, adjLs, visited);

                count++;
            }
        }

        return count;
    }

    private void dfs(int node,
                     ArrayList<ArrayList<Integer>> adjLs,
                     int[] visited){

        visited[node] = 1;

        for(int i = 0; i < adjLs.get(node).size(); i++){

            int adjNode = adjLs.get(node).get(i);

            if(visited[adjNode] == 0){

                dfs(adjNode, adjLs, visited);
            }
        }
    }
}