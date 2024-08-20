#include <iostream>
using namespace std;
int main()
{
	int n,copy,rev,digit;
	cout<<"enter the number:";
	cin>>n;
	copy=n;
	while(n!=0)
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}
	if(rev==copy)
	{
		cout<<"it is palindrome";
	}
	else
	{
		cout<<"it is not a palindrome";
	}
}