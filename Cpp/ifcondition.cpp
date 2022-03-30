// If condition
/*

used conditional operators
1. &&(AND)
2. || (OR)
3. !(NOT)

*/
#include <iostream>
using namespace std;
int main()
{
	cout<< "Voter Checker app :)"<<endl<<endl;
	int a;
	cout << "Enter your age";
	cin >> a;
	if(a>=18){
		
			cout << "Can vote"<< endl;
		
		
		if (a == 18){
			
			cout<< "welcom to new voter";
		}
	
	}
	else{
		cout<< "Can't vote";
	}
	
	
	
	return 0;
}
