#include <stdio.h>
#include <conio.h>
int fact(int n);
void main ()
{
    int n,f;
    printf ("Enter the value :");
    scanf ("%d",&n);
    f= fact(n);
    printf ("The factorial is: %d",f);
    getch ();
}

int fact(int n)
{
    if (n<=0)
    {
        return (1);
    }
    else
    {
        return (n*fact(n-1));
    }
}
