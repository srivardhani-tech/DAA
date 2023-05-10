#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter the number";
	cin>>n;
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"the factorial is: "<<fact; 
}