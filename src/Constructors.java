/* nOT FULLY DONE CONSTRUCTORS*/
public class Constructors {
    public static void main(String[] args){
        PCS PC1 = new PCS();
        PCS PC2 = new PCS();
        
        PC1.Cname="Dell";
        PC1.PCname = "Red Gaming";
        PC1.modelno = 5478952; 
        PC1.introducenames();
    }
    
}
class PCS{
    String Cname;
    String PCname;
    int modelno;
    
    void introducenames()
    {
        
        System.out.println("The company name is "+this.Cname);
    }
}
