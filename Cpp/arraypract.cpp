// Array practise

#include <iostream>
using namespace std;

int main()
{
	int arr = 5;
	int marks[arr];
	for (int i=0; i<arr; i++)
	{
		cout << "Enter marks"<<i++ <<endl;
		cin >> marks[i];
		
		
	}
	
	int sum = 0;
	
	for (int i=0; i<arr; i++)
	{
	 	sum = sum + marks[i] ;
		
		
	}
	int avarage = (sum / arr);
	
	cout << "\nPercentage is "<< avarage;
	
	
	
	return 0;
}


