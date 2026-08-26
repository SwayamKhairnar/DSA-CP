import java.util.*;
public class Problem12EventualSafeState {
   
    private static ArrayList<Integer> safeNodes(ArrayList<ArrayList<Integer>>adjls,int nodes){
        ArrayList<Integer>ans=new ArrayList<>();
        int indegree[]=new int[nodes];
        for (int i = 0; i < adjls.size(); i++) {
            for (int j = 0; j <adjls.get(i).size() ; j++) {
                indegree[adjls.get(i).get(j)]++;
            }
        }
        Queue<Integer>queue=new ArrayDeque<>();
        for (int i = 0; i < indegree.length; i++) {
            if (indegree[i]==0) {
                queue.add(i);
            }
        }
        while (!queue.isEmpty()) {
            int node=queue.peek();
            queue.poll();
            ans.add(node);
            for (int i = 0; i < adjls.get(node).size(); i++) {
                indegree[adjls.get(node).get(i)]--;
                if (indegree[adjls.get(node).get(i)]==0) {
                    queue.add(adjls.get(node).get(i));
                }
            }
        }
        return ans; 
    }

    

    private static ArrayList<ArrayList<Integer>> invert(ArrayList<ArrayList<Integer>>adjls,int nodes){
        ArrayList<ArrayList<Integer>>inverted=new ArrayList<>();
        for (int i = 0; i < nodes; i++) {
            inverted.add(new ArrayList<>()) ;
        }
        for (int i=0;i<adjls.size();i++) {
            for (int j = 0; j < adjls.get(i).size(); j++) {
                inverted.get(adjls.get(i).get(j)).add(i);
            }
        }
        return inverted;
    } 
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int nodes;
        System.out.println("Enter no of Nodes: ");
        nodes=sc.nextInt();
        ArrayList<ArrayList<Integer>>adjls=new ArrayList<>();
        for (int i = 0; i < nodes; i++) {
            adjls.add(new ArrayList<>());
        }
        System.out.println("Enter!\n");
        for (int index = 0; index < nodes; index++) {
            System.out.println("Enter no of edges");
            int edges=sc.nextInt();
            while (edges-->0) {
                int ele;
                System.out.println("\nEnter:");
                ele=sc.nextInt();
                adjls.get(index).add(ele);
            }
        }

        ArrayList<ArrayList<Integer>>inverted=invert(adjls, nodes);
        
        

        ArrayList<Integer>ans=new ArrayList<>();
        ans=safeNodes(inverted, nodes);
        System.out.print("Safe nodes : ");
        for (Integer integer : ans) {
            System.out.print(integer +" ");
        }
    }
}
