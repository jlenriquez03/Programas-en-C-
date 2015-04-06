#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string ans;
double babylonian(double n)
{
	double a, b, n1, r, x, z;
	n1=n;
	z=1;
	if (n1==0)
	{
		return 0;
	}
	else
	{
		a=1;
		b=1;
	while(z!=n1)
	{
		for(int i=0;i<=9999999;i++)
		{
		x=(a+b)/2;
		a=x;
		b=n1/a;
		}
		r=a;
		z=pow(r,2);
	}
	return r;
	}
}
int main()
{
	double n, r;
	do
	{
	cout<<"Introduce a number."<<endl;
	cin>>n;
	cout<<"The square root by using sqrt function is "<<sqrt(n)<<"."<<endl;
	r=babylonian(n);
	cout<<"The square root of "<<n<<" by the Babylonian Method is "<<r<<"."<<endl;
	cout<<"Would you like to repeat the program?"<<endl;
	cin>>ans;
	}while (ans=="y");
	cout<<"Ok, goodbye."<<endl;
	return 0;
}