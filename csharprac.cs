using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*
            Console.WriteLine("Enter the first no.");
            string a= Console.ReadLine();
            Console.WriteLine("Enter the second no.");
            string b = Console.ReadLine();

            int x = Convert.ToInt32(a);
            int y = Convert.ToInt32(b);
            int sum = x + y;
            Console.WriteLine(sum);
            */
            //Float dida . hunai parxa (double > float)
            /*
            double p, t, r;
            Console.WriteLine("Enter the principle amount:");
            string x = Console.ReadLine();
            Console.WriteLine("Enter the time duration:");
            string y = Console.ReadLine();
            Console.WriteLine("Enter the Rate:");
            string z = Console.ReadLine();

            p = Convert.ToDouble(x);
            t = Convert.ToDouble(y);
            r = Convert.ToDouble(z);

            double amt = (p * t * r) / 100;
            Console.WriteLine(amt);
            */
            /*
            double pi = 3.14;
            Console.WriteLine("Enter radius");
            double r = Convert.ToDouble(Console.ReadLine());
            double area = (pi * r * r);
            Console.WriteLine(area);
            */
            /*
            int age;
            Console.WriteLine("Enter your age:");
            age = Convert.ToInt32(Console.ReadLine());
            if (age >= 18)
            {
                Console.WriteLine("You can vote.");
            }
            else
            {
                Console.WriteLine("Sorry you cannot vote.");
            }
            */


            // for entering string
            /*
             
            Console.WriteLine("Enter your name:");
            string name = Console.ReadLine();
            Console.WriteLine(name);
            */


            //loopings 

            /*
            for (int i= 2; i < 100; i++) 
                {

                Console.WriteLine(" ASHIM NEPAL");
                    Console.WriteLine(i);
                
            }
            */
            /*
            int i=0;
            while(i<=100)
            {
                Console.WriteLine("This is my name\t\t\t\t also "); Console.WriteLine(i);
                i++;
            }

            */

            // ARRAY AAYO

            /*
            var array = new string[10];
            

            
            array[0] = "ASHIM";
            array[1] = "RAM";
            array[2] = "HARI";
            array[3] = "Shyam";
            array[4] = "sita";
            
            /*
            Console.WriteLine(array[0]);
            Console.WriteLine(array[1]);
            Console.WriteLine(array[2]);
            Console.WriteLine(array[3]);
            Console.WriteLine(array[4]);
            //
            
            for (int i=0; i<5; i++ )
            {
                Console.WriteLine(array[i]);
            }
            */



            /*
            var num = new int[] { 1, 2, 3, 4, 5 };
            foreach (var nos in num)
            {
                Console.WriteLine(nos);
            }
            */



            /*
            Random rand = new Random();
            int month=rand.Next(1,12);
            Console.WriteLine(month);
            
            */


            /*
            var newarray = new int[] { 1, 2, 3, 4, 5, 6, 8 };
            int length = newarray.Length;
            var reverse = newarray.Reverse();
            Console.Write ("The lemgth is: "+length+"\n & \n Rvrese is:\n");
            foreach (var r in reverse)
                {
                Console.WriteLine(r);

            }
            */
            



            //List haru ko 


           /*
            List<int> intlist = new List<int>() { 10 , 20 , 30, 40}; //List<datat ype> var
            intlist.Insert(0,15);  // .add pani xa
            foreach (var add in intlist)
            {
                Console.WriteLine(add);
            }
           */
         
          
            
            //boolean true false ko

            /*
            bool a = false;
            if (a == true)
            {
                Console.WriteLine("Its true");
            }

            else
            {
                Console.WriteLine("Its False");
            }

            */


            // Date and time



            /*
            DateTime aile= DateTime.Now;
            Console.WriteLine(aile);
            var today = DateTime.Today;
            Console.WriteLine(today);


            // var hour= now.hour;
                "   minute= now.minute;

            */



            // Files 


            /*
            string path = @"E:\FILES\first.txt";

            
            //To check if file exists or not

            if (File.Exists(path))
            {
                Console.WriteLine("Path is available");
            }
            else
            {
                Console.WriteLine("Not available");
            }*/




            /*
            string path = @"E:\FILES\first.txt";
            File.Copy(path, @"E:\FILES\firstcopy.txt",true);// ,true lekhyo vane feri overwrite hunxa

            var cont = File.ReadAllText(path);
            Console.WriteLine(cont);


            */


            // Directory create garne

            /*
            string location = @"E:\FILES\directory_folder";
            Directory.CreateDirectory(location);


            */


            // Getting files from directory


            /*
            string search = @"C:\Program Files (x86)\Microsoft Visual Studio 8";
            var files = Directory.GetFiles(search,"*.*",SearchOption.AllDirectories);
            foreach (var file in files)
            {
                Console.WriteLine(file);
            }
            */




         



        }
    }
}
