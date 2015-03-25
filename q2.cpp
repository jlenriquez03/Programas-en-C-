//José Luis Enríquez Flores
//A01630238
#include <iostream>
using namespace std;
void triangle(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int x=1;x<=i;x++)
		{
			cout<<"T";
		}
		cout<<endl;
	}
	for(int i=(n-1);i>0;i--)
	{
		for(int x=1;x<=i;x++)
		{
			cout<<"T";
		}
		cout<<endl;
	}
}

int main()
{
	int x;
	cout<<"Please enter the maximum length value."<<endl;
	cin>>x;
	triangle(x);
	return 0;
}