//José Luis Enríquez Flores
//a01630238
#include<iostream>
using namespace std;
long long int a,fib=0;
long long int fibonacci(unsigned long long int a)
{
	long long int x=0,y=1;
	if (a==0)
		{
			return 0;
		}
	else if(a==1)
		{
			return 1;
		}
	else if(a>1)
	{
	for(int i=1;i<a;i++)
		{
			fib=x+y;
			x=y;
			y=fib;
		}
		return fib;
	}
}
int main()
{
	cout<<"Enter a number"<<endl;
	cin>>a;
	fib=fibonacci(a);
	cout<<"The fibonacci value of"<<a<<" is "<<fib<<endl;
	return 0;
}