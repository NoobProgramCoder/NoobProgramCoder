// Recursive functions

#include <iostream>
using namespace std;
int fact(int n);
int main()
{
	
	/*
	cout << "Enter the number:"<<endl;
	int n ,fact = 1; 
	cin >> n;
	
	for (int i = n; i >0; i--)
	{
		fact = fact *i;
		
		
		
	}
	cout << fact;
	
	*/
	
	cout << "Enter number" <<endl;
	int num ;
	cin >> num;
	
	cout << "Factorial :" <<fact(num);
	
	
	
	return 0;
}

int fact(int num)
{
	if (num ==1){
		return 1;
	}
	else
	 {
		return num * fact(num-1);
	  }
}

