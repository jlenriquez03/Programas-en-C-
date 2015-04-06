#include<iostream>
using namespace std;
int suma(int x, int y)
{
	int suma;
	suma=x+y;
	return suma;
}
int dif(int x, int y)
{
	return x-y;
}
int mul(int x, int y)
{
	return x*y;
}
int div(int x, int y)
{
	return x/y;
}
int rem(int x, int y)
{
	return x%y;
}
int main()
{
	int x, y;
	cout<<"Type two integer numbers please."<<endl;
	cin>>x;
	cin>>y;
	cout<<"The sum of "<<x<<" + "<<y<<" is "<<suma(x,y)<<"."<<endl;
	cout<<"The difference of "<<x<<" - "<<y<<" is "<<dif(x,y)<<"."<<endl;
	cout<<"The product of "<<x<<" * "<<y<<" is "<<mul(x,y)<<"."<<endl;
	cout<<"The integer division of "<<x<<" / "<<y<<" is "<<div(x,y)<<"."<<endl;
	cout<<"The integer remainder of "<<x<<" / "<<y<<" is "<<rem(x,y)<<"."<<endl;
	return 0;
}