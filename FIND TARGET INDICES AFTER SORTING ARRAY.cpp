#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"after sorting\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	int key,fact=0;
	cout<<"enter the key\n";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			fact=1;
			cout<<"target element found in index:"<<i<<".";
			break;
		}
	}
	if(!fact)
	{
		cout<<"not found";
	}
	
	return 0;
}