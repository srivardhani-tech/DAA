#include<iostream>
using namespace std;
double facto(double n)
{
	double fact=1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	double sum=0,n;
	int j;
	cout<<"enter the size\n";
	cin>>n;
	for(j=1;j<=n;j++)
	{
		if(j%2!=0)
		{
		sum=sum+(j/facto(j));
	}
	}
	cout<<sum;
}