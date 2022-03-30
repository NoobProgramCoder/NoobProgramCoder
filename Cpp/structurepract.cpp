//

#include <iostream>

using namespace std;
struct employees{
	int id;
	char name[100];
	char address[100];
	double salary;
	
}e1[3];
int main()
{

for (int i =0; i<3; i++)
{
	
	cout << " Enter the id of Employee: ";
	cin >> e1[i].id;
	cout << "\n Enter the name of Employee: ";
	cin >> e1[i].name;
	cout << "\n Enter the address of Employee: ";
	cin >> e1[i].address;
	cout << "\n Enter the salary of Employee: ";
	cin >> e1[i].salary;
	
	
	
	}	
	cout << endl <<"ID\t\tName\t\tAddress\t\tSalary";
	for (int i=0; i<3; i++ ){
		
		cout <<endl <<e1[i].id<<"\t\t"<<e1[i].name<<"\t\t"<<e1[i].address<<"\t\t"<<e1[i].salary<<endl;
	}




return 0;
}
