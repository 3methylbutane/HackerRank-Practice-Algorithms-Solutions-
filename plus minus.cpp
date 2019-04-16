#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
	int n,i;
	double x=0,y=0,z=0;
	cin>>n;
	int a[100];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		x++;
		else if(a[i]<0)
		y++;
		else if(a[i]==0)
		z++;
	}
	printf("%.6lf\n",(x/n));
	printf("%.6lf\n",(y/n));
	printf("%.6lf\n",(z/n));

	//std::cout<<std::setprecision(6)<<ans<<"\n";
	//std::cout<<std::setprecision(6)<<y/n<<"\n";
	//std::cout<<std::setprecision(6)<<z/n<<"\n";
	return 0;	
}
