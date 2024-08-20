#include <iostream>
using namespace std;
int main()
{
	float faren,cel;
	cout<<"enter the temperature:";
	cin>>cel;
	faren=(cel * 9.0)/5.0+32;
	cout<<"the temperature in celsius:"<<cel;
	cout<<"\nthe temperature in fahrenheit :"<<faren;
	return 0;	
}