//José Luis Enríquez Flores
//a01630238
#include<iostream>
#include<cmath>
using namespace std;
long long int a,b,r;
long long int superpower(long long int a, long long int b)
{
	r=pow(a,b);
	return r;
}
int main()
{
	cout<<"enter the first value"<<endl;
	cin>>a;
	cout<<"enter the second value"<<endl;
	cin>>b;
	r=superpower(a,b);
	cout<<"The super power of "<<a<<"^"<<b<<" is "<<r<<endl;
	return 0;
}