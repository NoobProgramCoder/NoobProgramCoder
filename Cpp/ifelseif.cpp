// if else if

#include <iostream>

using namespace std;

int main()
{
	
	int a;
	cout << " Enter any number:";
	cin >> a ;
	
	if (a>0){
		
		cout << "\n Number is positive";
	}
	
	else if(a<0)
	{
		cout <<"\n Number is negative";
	}
	else 
	{
		cout << "\n Number is neutral";
	}
	
	
	return 0;
}
