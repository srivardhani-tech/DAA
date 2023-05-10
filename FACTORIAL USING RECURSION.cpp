#include<iostream>
using namespace std;
int facto(int number)
{
	if(number!=0)
	{
		return(number*facto(number-1));
	}
	else
	{
		return 1;
	}
}
int main()
{
	int number;
	cout<<"enter the number\n";
	cin>>number;
	int factorial=facto(number);
	cout<<factorial;
}