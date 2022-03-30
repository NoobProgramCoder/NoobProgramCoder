// Array passing

// Yo part pani ramrari gareko xainaaa


#include <iostream>
using namespace std;
void showarray(int a[], int len);
int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9,10};
	showarray(int a,int len);
	
	
	
	
	return 0;
}
void showarray(int a[],int len)
{
	int len =a.length;
	
	for (int i=0; i<len; i++)
	{
		
		cout << a[i]<< endl;
	}
	
}

