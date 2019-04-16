#include<bits/stdc++.h>
using namespace std;
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
	reus;
	int n;
	cin>>n;
	int i,j,a[10][10],sum1=0,sum2=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			  sum1+=a[i][j];
			if((i+j)==n-1)
			  sum2+=a[i][j];
		}
		
	}
	cout<<abs(sum2-sum1)<<endl;
	return 0;
}
