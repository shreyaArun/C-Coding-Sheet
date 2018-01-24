#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	int c=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<c++<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<"  "; 
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		for(int j=i-1;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<2*i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<2*i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	for(char c='A';c<'A'+n;c++)
	{
		for(char i='A';i<='A'+(c-'A');i++)
		{
			cout<<c<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	return 0;
}