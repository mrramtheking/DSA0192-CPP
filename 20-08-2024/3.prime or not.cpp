#include <iostream>
using namespace std;
int main()
{
	int n,i,flag=0;
	cout<< "enter a number to be checked:";
	cin>>n;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			cout<<"the given number "<<n<<" is not a prime number";
			flag=1;
			break;
		}
		if(flag==0)
		{
			cout<<"the given number "<<n<<" is a prime number";
		}
	}
	return 0;
}