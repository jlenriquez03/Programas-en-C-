#include <iostream>
using namespace std;

int main ()
{
	int n1, x, n2, sum=0;
	cout<<"Welcome to SUM OF NUMBERS! This program sums the numbers of a range given with integer numbers (inclusive)."<<endl;
	cout<<"Please type the lower bound, then press enter. "<<endl;
	cin>>n1;
	cout<<"Please type the higher bound, then press enter. "<<endl;
	cin>>n2;
	x=n1;
	/*while (n1<=n2)
	{
		sum+=n1;	
		n1++;
	}*/
	for (int i = n1 ; i<=n2; i++)
	{
		sum+=i;
	}  
	cout<<"The sum of the numbers between the range " <<x<< " & " <<n2<< " inclusive, is: "<<sum<<endl;
	return 0;
}