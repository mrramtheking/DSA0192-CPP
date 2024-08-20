#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i;
	char arr[100];
	cout<<"enter the input string:";
	cin>>arr;
	cout<<"the original string is:";
	cout<<arr;
	cout<<"\n";
	for(i=0;i<strlen(arr);i++)
	{
		putchar(toupper(arr[i]));
	}
	return 0;
}