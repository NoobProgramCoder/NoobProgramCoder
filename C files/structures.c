#include <stdio.h>
#include <conio.h>
struct employee
{
    int empid;
    char name[50];
    char address[50];
    float salary;

};
void main()
{
   struct employee  e1={"1","bikash","bhaktapur","500000"};
   struct employee  e2={"2","ashim","kathmandu","50000"};
        printf ("\n%d \t\t %s \t\t %s \t\t %f",e1.empid,e1.name,e1.address,e1.salary);
         printf ("\n%d\t\t%s\t\t%s\t\t%f",e2.empid,e2.name,e2.address,e2.salary);




    getch ();//return 0;           444442525251454
}
