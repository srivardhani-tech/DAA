#include<iostream>
using namespace std;
int main()
{
	int n,key,i,temp;
	cout<<"enter the element size\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the search element\n";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=a[i];
		}
	}
	int mid,low=0,high=n-1;
	int f=0;
	while(low<=high)
	{
	  mid=(low+high)/2;
	  if(key<mid)
	  {
	  	high=mid-1;
      }	
	  else if(key>mid)
	  {
	  	low=mid+1;
	  }
	  else if(key==mid)
	  {
	  	cout<<"element found";
	  	f=1;
	  	break;
	  }
	  
	}
	if(!f)
	cout<<"element not found";
	
}
		
