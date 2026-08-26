import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Queue;

class rotten{
    protected int rotted(ArrayList<ArrayList<Integer>>grid){
        Queue<int[]>queue=new ArrayDeque<>();
        int fresh=0;
        for (int i = 0; i <grid.size() ; i++) {
            for (int j = 0; j <grid.get(i).size() ; j++) {
                if (grid.get(i).get(j)==1)fresh++;
                else if(grid.get(i).get(j)==2)queue.add(new int[]{i,j});
            }
        }
        int ans=0;
        while (!queue.isEmpty()){
            int size=queue.size();
            int dx[]={0,1,0,-1};
            int dy[]={-1,0,1,0};
            boolean this_min=false;
            for (int i = 0; i <size ; i++) {
                int r=queue.peek()[0];
                int c=queue.peek()[1];
                queue.poll();
                for (int j = 0; j <4 ; j++) {
                    int x=r+dx[j];
                    int y=c+dy[j];
                    if(x>=0 && x<grid.size() && y>=0 && y<grid.get(0).size()
                    && grid.get(x).get(y)==1){
                        queue.add(new int []{x,y});
                        grid.get(x).set(y,2);
                        fresh--;
                        this_min=true;
                    }
                }
            }

            if(this_min)ans++;

        }
        if (fresh>0)return -1;
        return ans;
    }

}
public class Problem3RottenOranges {
    public static void main(String[] args){
        ArrayList<ArrayList<Integer>>grid=inputArrList.inputGrid();
        rotten rotten=new rotten();
        System.out.println(rotten.rotted(grid));
    }
}
