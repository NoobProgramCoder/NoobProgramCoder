
public class BinarySearch {
    public static void main(String[] args)
    {
        int[] A = {10,20,30,40,50,60,70,80};
        int size = A.length;
        int x = 70 ;
        int start = 0;
        int end = size -1;
        while(start <= end ){
            int mid = (start+end)/2;
            if(A[mid] ==x){
                System.out.println("Element found at index is"+mid);
                break;
            } else if( x <=A[mid] ){
                end = mid-1;
                
            }else {
                start = mid +1;
            }
            
        }
        System.out.println("Element not found");
        
    }
    
}
