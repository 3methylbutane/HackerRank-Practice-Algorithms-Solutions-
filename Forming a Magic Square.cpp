#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;
	int s[8][3][3]={
    {{8,1,6},{3,5,7},{4,9,2}},
    {{6,1,8},{7,5,3},{2,9,4}},
    {{4,9,2},{3,5,7},{8,1,6}},
    {{2,9,4},{7,5,3},{6,1,8}}, 
    {{8,3,4},{1,5,9},{6,7,2}}, 
    {{4,3,8},{9,5,1},{2,7,6}}, 
    {{6,7,2},{1,5,9},{8,3,4}}, 
    {{2,7,6},{9,5,1},{4,3,8}},  
};
int a[3][3];
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cin>>a[i][j];
	}
}
int ans=10000;
for(int k=0;k<8;k++)
{
	int c=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c+=abs(a[i][j]-s[k][i][j]);
		}
    }
    ans=min(ans,c);
}
cout<<ans<<endl;
	return 0;
}
