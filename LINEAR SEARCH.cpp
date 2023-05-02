#include<iostream>
using namespace std;
int main()
{
	int n,key,i;
	int fact=0;
	cout<<"enter the size of array\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<" enter the key \n";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(a[i]!=key)
		{
			fact=1;
		}
		else
		{
			int index=i;
			cout<<"element found in index"<<index<<endl;
			break;
		}	
	}
	if(fact==1)
	{
		cout<<"not found\n";
	}
	return 0;
}