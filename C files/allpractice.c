/*WAP to find the greatest no. among any three nos... */
#include <stdio.h>
#include <conio.h>
int greater();
void main()
{
    greater ();
    getch ();

}
int greater ()
{
    int a, b ,c, *x ,*y,*z;
    printf ("Enter the numbers a & b and c:");
    scanf ("%d%d%d",&a,&b,&c);
    x=&a;
    y=&b;
    z=&c;
    if (*x>*y && *x>*z)
    {

        printf ("Number first is greater %d.",*x);
    }
    else if (*y>*x && *y>*z)
        {
    printf ("Number second is greater %d.",*y);
    }
else{
    printf ("Number third is greater %d.",*z);
}


}
