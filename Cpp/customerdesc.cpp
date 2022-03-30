// Discount by user need

#include <iostream>
using namespace std;
int main ()
{
	double price, discount, customerid ,amount ;
	string name , address,prname;
	
	cout << " Enter the price of product:";
	cin >> price;
	cout<<"\n Enter the discount rate available for product:";
	cin >> discount;
	
	cout << "\n Enter the name of Customer:";
	cin >> name;
	
	cout << "\n Enter the customer Number:";
	cin >> customerid;
	
	
	cout<< "\n Enter the address of Customer:";
	cin >> address;
	
	cout << "\n Enter the name of product:";
	cin >> prname;
	
	int code = 0001;
	
	if (address == "kathmandu" ){
		discount = 15;
	}
	
	 amount = price - (discount/100)*price;
	 
	 double given , taken,tip , returned;
	 
	 cout <<"\n Amount given:";
	 cin >> given;
	 
	 cout << " Price after discount:"<<amount<<endl;
	 cout << " Amount returned without tip:"<<(given-amount)<<endl;
	 
	 cout << "\n Tip included(amount):";
	 cin >> tip;
	 
	 taken = amount + tip;
	 
	 returned = given - amount-tip;
	 
	
	cout << "\n Sold to:" <<name<<endl;
	cout<< " Customerid:"<<customerid<<endl;
	cout << " Address:" <<address<<endl;
	cout << " Product:" <<prname<<endl;
	cout << " Initial Cost of "<< prname <<":"<<price <<endl;
	cout << " Price after discount of "<< discount <<"%:"<<amount<<endl;
	cout << " Amount received:"<<given<<endl;
	cout << " Tip included:"<< tip<<endl;
	cout << " Amount returned:"<<returned<<endl;
	cout << " Shop's Earning in this transaction:"<<taken<<endl;
	

	return 0;
}
