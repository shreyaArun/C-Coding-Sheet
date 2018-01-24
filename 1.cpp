#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	cout<<"Enter 1 for FOR loop or anything else for WHILE : ";
	cin>>i;
	if (i==1)
	{
		for(;;)
		{
			cout<<"Hello World!"<<endl;
		}
	}
	else
	{
		while(1)
		{
			cout<<"Hello World!"<<endl;
		}
	}
	return 0;
}