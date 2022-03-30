// Switch case

#include <iostream>
using namespace std;

int main ()
{
	
	int a;
	cout<< "Enter day number(1-5)";
	cin >>a;
	
	switch (a)
	{
	
	
		         case 1:
			        cout << "\nsunday";
			        break;
			             	case 2:
			                     cout << "\nmonday";
			                     break;
			                         case 3:
			                             cout << "\ntuesday";
			                             break;
			                                  case 4:
			                                      cout << "\nwednesday";
			                                      break;
			                                          case 5:
			                                             cout << "\nthursday";
			                                             break;
			                                                   default:
			                                                   	cout << "\n-----Enter valid number...";	
																   break;	                                                   
	}
		

	
	
	return 0;
}
