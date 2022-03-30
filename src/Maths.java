import java.util.Scanner;
public class Maths {
    
    public static void main(String[] args){
        /*
         int a = 25;
         int b = 20;
         int sum = a+b;
        
        */
        Scanner ab = new Scanner(System.in);
        System.out.println("Enter first number:");
        int a = ab.nextInt();
        System.out.println("Enter the second number");
        int b = ab.nextInt();
        int sum = a+b;
        
         System.out.println("The total sum is"+sum);
         /*
         subtract = -
         multiply = *
         division = /
         mod = %
         
       
         
         */
         
         
         final float pi=3.14f;
         Scanner area = new Scanner(System.in);
         System.out.println("Enter the radius:");
         float r = area.nextFloat();
         float ra= pi * r * r;
         System.out.println("Area of the circle for radius "+r+" is "+ra+".");
         
         
         
         
    }
    
}
