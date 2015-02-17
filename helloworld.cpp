#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int A, B, C =0;
	srand (time(NULL));
	B = 1 + rand ()%100;
	while (A!=B)
	{
		C=C+1;
		cout<<"Guess a number between 1 and 100."<<endl;
		cin >>A;
		if(A<B)
		{
			cout<<"ÑO... Too low :´( "<<endl;
		}
		else if (A>B)
		{
			cout<<"ÑO... Too high :´("<<endl;
		}
	}
	
	cout<<"GOOD, GOOOOOOOOOOD"<<endl;
	
	if (C>5)
	{
		cout<<"You suck, you take "<<C<<" attemps."<<endl;
	}
	else
	{
		cout<<"Well done, you take "<<C<<" attemps."<<endl;
	}
	return 0;
}