#include <stdio.h>
#include <conio.h>
struct employee
{
    char name[100];
    char address[100];
    int salary;
};
void main()
{
    struct employee e1[2];
    int i;
    for (i=0; i<2; i++)
    {
        printf ("Enter the employee name:");
        scanf ("%c",&e1[i].name);
        printf ("Enter the employee's address:");
        scanf ("%c",&e1[i].address);
        printf ("Enter the employee's salary:");
        scanf ("%d",&e1[i].salary);
    }
    for (i=0; i<2; i++)
    {
        printf("\n%c\t\t\t%c\t\t\t%s\t\t\t%d",e1[i].name,e1[i].address,e1[i].salary);


    }
    getch ();
}
/* fjvhghhg*/

