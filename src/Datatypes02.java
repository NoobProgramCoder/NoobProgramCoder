import java.util.Scanner;
public class Datatypes02 {
    
    public static void main(String[] args){
        /*
        =Datatypes haru
        1. Primitive Datas - int,byte(-128 to 127 values),double,float,char,boolean,long,short
        2. non-primitive Datas - string , array , user defined class


        */
        
        
        System.out.println("Write the character:");
        Scanner sc = new Scanner(System.in); 
        int a = sc.next().charAt(0);
        System.out.println("The character you have typed is "+a+"...");
        
    }
    
    
}
