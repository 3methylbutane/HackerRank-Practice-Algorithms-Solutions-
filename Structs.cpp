#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
struct Student
	{
		int age;
		string first_name;
		string last_name;
		int standard;
	};
int32_t main()
{
	reus;
		Student st;
		cin>>st.age>>st.first_name>>st.last_name>>st.standard;
		cout<<st.age<<" "<<st.first_name<<" "<<st.last_name<<" "<<st.standard;
	return 0;
}
