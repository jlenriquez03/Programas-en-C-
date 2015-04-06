#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double List[10];
double SUM(double List[])
{
	double sum;
	for (int i=0;i<10;i++)
	{
		sum=sum+List[i];
	}
	return sum;
}
double DES(double List[])
{
	double des, pcg;
		for(int i=0;i<10;i++)
	{
		pcg=pcg+(List[i]/10);
	}
	for(int i=0;i<10;i++)
	{
		double po, res;
		res=(List[i]-pcg);
		po=pow(res,2);
		des=des + po;
	}
	des=des/10;
	des=sqrt(des);
	return des;
}
int main()
{
	double sum, des;
	string ans;
	do
	{
		cout<<"Please enter 10 numbers."<<endl;
		for (int i=0;i<10;i++)
		{
		cout<<"Enter the "<<i+1<<"° value."<<endl;
		cin>>List[i];
		}
		sum=SUM(List);
		cout<<"The sum of the 10 numbers that you entered is: "<<sum<<endl;
		cout<<"The average result of the 10 numbers that you entered is: "<<sum/10<<endl;
		des=DES(List);
		cout<<"The standard dev. of the 10 numbers you entered is: "<<des<<endl;
		cout<<"Do you want to try again?"<<endl;
		cin>>ans;
	}while(ans=="y");
	cout<<"OK. Goodbye."<<endl;
	return 0;
}