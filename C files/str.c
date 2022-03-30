#include <stdio.h>
#include <conio.h>
struct employee
{
    int empid;
    char name[50];
    char address[50];
    float salary;

}e1[2];
void main()
{
    int i;

    for (i=0; i<2; i++)
    {
        printf ("enter the empid:");
        scanf ("%d",&e1[i].empid);
        printf ("Enter Name:");
        scanf ("%s",&e1[i].name);
         printf ("Enter address:");
        scanf ("%s",&e1[i].address);
        printf ("enter the salary:");
        scanf ("%f",&e1[i].salary);

    }
for (i=0; i<2; i++ )
{
    printf ("\n%d\t\t%s\t\t%s\t\t%f",e1[i].empid,e1[i].name,e1[i].address,e1[i].salary);

}

    getch ();//return 0;
}
