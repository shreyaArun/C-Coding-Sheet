#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	cout << "Enter Percentage(%) : ";
	cin >> i;
	if(i>90)
	{
		cout<<"GRADE A"<<endl;
	}
	else if(i<=90 && i>80)
	{
		cout<<"GRADE B"<<endl;
	}
	else if(i<=80 && i>70)
	{
		cout<<"GRADE C"<<endl;
	}
	else if(i<=70 && i>60)
	{
		cout<<"GRADE D"<<endl;
	}
	else if(i<=60 && i>50)
	{
		cout<<"GRADE E"<<endl;
	}
	else if(i<=50 && i>=0)
	{
		cout<<"GRADE F"<<endl;
	}
	else
	{
		cout<<"Invalid Input,Try Again!!"<<endl;
	}
	return 0;
}
