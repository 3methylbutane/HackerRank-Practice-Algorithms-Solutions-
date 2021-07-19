#include <map>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string name;
	map<string, int> m;
	
	for(int i=0;i<n;i++)
	{
		cin>>name;
		if(!m[name])
		{
			cin>>m[name];
		}
	}
	while(cin>>name)
	{
		if(m[name])
		{
			cout<< name <<"=" << m[name] << endl;
		}
		else
	    {
			cout << "Not found" << endl;
	    }
	}
	return 0;
}
