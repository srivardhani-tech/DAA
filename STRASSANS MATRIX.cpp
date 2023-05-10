#include<iostream>
using namespace std;
 int main()
{
	int a[2][2],b[2][2],row=2,col=2;
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the 2nd matrix\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	int m1=((a[0][0]+a[1][1])*(b[0][0]+b[1][1]));
	int m2=((a[1][0]+a[1][1])*b[0][0]);
	int m3=(a[0][0]*(b[0][1]-b[1][1]));
	int m4=(a[1][1]*(b[1][0]-b[0][0]));
	int m5=((a[0][0]+a[0][1])*b[1][1]);
	int m6=((a[1][0]-a[0][0])*(b[0][0]+b[0][1]));
	int m7=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	int l =(m1+m4)-(m5+m7);
	int m =m3+m5;
	int n =m2+m4;
	int o =(m1+m3)-(m2+m5);
	cout<<l<<"\t"<<m<<"\n"<<n<<"\t"<<o<<endl;
}