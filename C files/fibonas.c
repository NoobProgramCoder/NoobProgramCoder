#include <stdio.h>
#include <conio.h>
int fibo (int n);
void main ()
{
    int i,n;
    printf ("Enter the value :");
    scanf ("%d",&n);

    for (i=0; i<=n ; i++ )
    printf ("%d",fibo(n));
    getch ();
}

int fibo(int n)
{
    if (n==0)
    {
        return (0);
    }
    else if (n==1)
    {
        return (1);
    }
    else
        {
            return (fibo(n-1)+fibo(n-2));
        }
}
