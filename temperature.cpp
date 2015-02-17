#include <iostream>
using namespace std;
int main()
{
float C, F;
cout<<"Introduce the temperature in Farenheit and press enter ";
cin>>F;
C=(5+(F-32)/9);
cout<<"The given temperature in Farenheit is " <<F;
cout<< ", which in degrees Celsius is "<<C;
cout<<"°C"<<endl;
if (C<100)
	{
	cout<<"Under typical conditions, water does not boil at this temperature."<<endl;
	}
	else
	{
	cout<<"Under typical conditions, water boils at this temperature."<<endl;
	}
	return 0;
}