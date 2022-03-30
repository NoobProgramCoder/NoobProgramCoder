import java.util.Scanner;
public class LinearSearch {
    public static void main(String[] args)
    {
        System.out.println("Enter array size:");
        Scanner array = new Scanner(System.in);
        int size = array.nextInt();
        int[] ar = new int[size];
        for (int i = 0; i < size ; i++){
            System.out.println("Enter array Value in "+i+ " [Normal value is "+(i+1)+"] Index no is:"+i );
            Scanner value = new Scanner(System.in);
            ar[i] = value.nextInt();
            
            
        
        }
        
        System.out.println("Enter the value to search");
        Scanner search = new Scanner(System.in);
        int x = search.nextInt();
        int count = 0;
        for(int j = 0; j<size ; j++){
            if(ar[j] == x){
            System.out.println("The element is found at index" +j);
            count++;
            break;
            
            }
            if (count == 0){
                System.out.println("The element is not found at array.");
            }
                
            }
            
        }
        
        
        
    
    
}
