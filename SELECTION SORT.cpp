#include<iostream>
using namespace std;
int main()
{
	int n,i,temp,j;
	cout<<"enter the size of the element\n";
	cin>>n;
	int a[n];
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int low,index;
	for(i=0;i<n;i++)
	{
		low=a[i];
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(low>a[j])
			{
				low=a[j];
				index=j;
			}
		}
		temp=a[i];
		a[i]=a[index];
		a[index]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}