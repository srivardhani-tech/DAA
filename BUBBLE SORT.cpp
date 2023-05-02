#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter the size of the array\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int temp=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
		  temp=a[i];
		  a[i]=a[i+1];
		  a[i+1]=temp;	
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}