// Array

#include <iostream>
using namespace std;

int main()
{
	
	/*
	int a[5];
	
	a[0] = 10;
	a[1]= 20;
	a[2]= 30;
	a[3]=40;
	a[4]=50;
	
	for (int i = 0; i<5; i++)
	{
		
		cout << a[i]<<endl;
	}
	
	
	*/
	
	/*
	
	string a[3];
	
	a[0] = "Ash Nep";
	a[1] = "R unknown";
	a[2] = "A Unknown";
	
	for (int i =0; i<3; i++)
	{
		
		cout << "Name for a["<<i << "] is "<<a[i]<<endl;
	}
	
	
	*/
	
	string a[4];
	
	for (int i =0; i<4; i++)
	{
		cin >> a[i];
	}
	
	for (int i =0; i<4; i++){
		cout << "Name for a["<<i+1 << "] is "<<a[i]<<endl;
	}
	
	
	
	
	
	return 0;
}














