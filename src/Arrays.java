import java.util.Scanner;
public class Arrays {
    public static void main(String[] args)
    {
        Scanner size= new Scanner(System.in);
        System.out.println("Please enter the arrsy size:");
        int arr = size.nextInt();
        // int[] ar = new int[5];
        int[] ar = new int [arr];
        
        /*
        ar[0] = 20;
        ar[1]=30;
        ar[2]=40;
        ar[3]=60;
        ar[4]=80;
        */
        for (int a=0; a < ar.length; a++)
        {
            System.out.println("Enter Array Value "+a+"(Normal Value is " +(a+1)+  ") :");
            Scanner array = new Scanner(System.in);
            ar[a] = array.nextInt();
            
            
            
            
            
        }
        
        
        
        for(int i = 0; i<ar.length; i++ ){
            System.out.println( ar[i]);
        }
        
        //  System.out.println("" +ar[0] );
    }
    
}
