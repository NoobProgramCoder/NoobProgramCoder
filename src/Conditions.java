import java.util.Scanner;
public class Conditions {
    
    public static void main(String[] args){
        Scanner vote = new Scanner(System.in);
        System.out.println("Please enter your age:");   
        int age = vote.nextInt()  ;
        
        if(age >= 18 ){
                System.out.println("You are eligible to vote...\n Happy Voting..");
                
        }
        else
        {
            System.out.println("Sorry you are not eligible for voting. ");
        }
        Scanner num = new Scanner(System.in);
        System.out.println("Enter First Number:");
        final int fn = num.nextInt();
        System.out.println("Enter Second Number:");
        final int sn = num.nextInt();
        System.out.println("Enter Third Number:");
        final int tn = num.nextInt();
        if(fn>sn && fn>tn ){
            System.out.println("First Number "+fn+" is Greatest.");
            
        }
        else if(sn>fn && sn>tn){
            System.out.println("Second Number "+sn+" is Greatest.");
        }
        else {
            System.out.println("Third number " + tn+ " is Greatest.");
        }
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter day number:");
        int day = sc.nextInt();
        switch(day){
            case 1:
                System.out.println("Sun");
                break;
            case 2:
                System.out.println("Mon");
                 break;
                case 3:
                System.out.println("Tue");
                 break;
            case 4:
                System.out.println("Wed");
                 break;
                case 5:
                System.out.println("Thu");
                 break;
            case 6:
                System.out.println("Fri");
                 break;
                case 7:
                System.out.println("Sat");
                 break;
                 
                default:
                    
                System.out.println("Please Enter valid Number...");
                
        } 
        
    }
    
    
}
