#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> a;
	a.push_back(10);
	a.push_back(21);
	a.push_back(251);
	a.push_back(399);
	a.push_back(1024);
	a.push_back(2012);
	a.push_back(2048);
	a.push_back(11892);
	for(int i=0;i < a.size();i++)
	{
		int t=a[i];
		vector <int> k;
		while(t>0)
		{
			int rem = t%2;
			k.push_back(rem);
			t = t / 2;
		}
		cout<<a[i]<<"\t ";
		for(int j=k.size()-1; j>=0  ; j--)
		{
			cout<<k[j];
		}
		cout<<endl;
	}
	return 0;
}