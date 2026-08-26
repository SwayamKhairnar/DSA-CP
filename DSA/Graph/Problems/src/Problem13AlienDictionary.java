import java.util.ArrayList;
import java.util.Scanner;

public class Problem13AlienDictionary {
    public static void main(String[]args){
        int words;
        System.out.println("Enter no of words: ");
        Scanner sc =new Scanner(System.in);
        words=sc.nextInt();
        ArrayList<String>dictionary=new ArrayList<>();
        for (int i = 0; i < words; i++) {
            System.out.println("Enter word "+ i+1);
            String word=sc.nextLine();
            dictionary.add(word);
        }
        if(dag(dictionary))System.out.println("True");
        else{
            System.out.println("False");
        }
    }

    
}
