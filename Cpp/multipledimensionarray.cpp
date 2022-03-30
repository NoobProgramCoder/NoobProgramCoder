// Multi dimensional 

// Not done properly..... See mre to understand


#include <iostream>
using namespace std;

int main()
{
	
	/*
	
	int a[2][3];
	
	a[0][0] = 1;
	a[0][1] = 2;
	a[0][2] = 3;
	a[1][0] = 4;
	a[1][1] = 5;
	a[1][2] = 6;
	
	int i = 0 ;
	int  j = 0;
	
	for (i; i<3 ; i++)
	{
		for(j; j<3; j++  )
		{
			cout << a[i][j]<<"\t";
		}
		cout <<endl;
	}
	
	
	*/
	 
	 
	 /*
	 int a[2][3];
	 
	 
	 
	 	for (int i=0; i<2 ; i++)
	{
		for(int j=0; j<3; j++  )
		{
			cout << "Enter value for " <<i <<" "<<j;
			cin >> a[i][j];
		}
		
	}
	
	
		for (int i=0; i<2 ; i++)
	{
		for(int j=0; j<3; j++  )
		{
			cout << a[i][j]<<"\t";
		}
		cout <<endl;
	}
	 
	*/
	
	
	// Adding 2/3 matrix
	
	
	int a[2][3];
	int b[2][3];
	int sum[2][3];
	
	cout << "Enter data for matrix A:"<<endl;
	
	for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
			cout << "Enter data for matrix ["<<i<<" "<<j<<"]."<<endl;
			cin >> a[i][j];
		}
		
	}

	cout << "Enter data for matrix B:"<<endl;
	
	for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
			cout << "Enter data for matrix ["<<i<<" "<<j<<"]."<<endl;
			cin >> b[i][j];
		}
		
	}	
	
	
		for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
			sum [i][j] = a[i][j] + b[i][j];
		}
		
	}	
	
		cout << "Output after adding matrices:"<<endl;
		
			for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
		  cout  <<sum[i][j]<<"\t";
		}
		cout <<endl;
		
	}	
		

	
	
	 
	
	
	return 0;
}


