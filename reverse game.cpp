#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,k=0,z;
		cin>>n>>z;
		long long int a[n],m=n-1;
		for(i=0;i<n;i++)
		{
			if(i%2!=0){
			a[i]=k;
			k++;
		}
			else if(i%2==0)
			{
			a[i]=m;
			m--;
	    }  
	}
		for(i=0;i<n;i++)
		{
			if(a[i]==z)
			{
				cout<<i<<"\n";
				break;
			}
		}
	} 
	return 0;
}
