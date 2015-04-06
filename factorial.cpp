#include<iostream>
#include<string>
//#include "BigIntegerLibrary.hh"
using namespace std;
int main()
{
	string answ, bnsw, cnsw; //Puerta programa, Selector de subprograma, Puerta subprograma
	long long int a, n, fa, fb, fact, fib, par, sv, sv1;
	do
	{
		cout<<"In this program, you enter an integer positive number and the computer will give the factorial or Fibonacci value."<<endl;
		cout<<"Which program would you like to run? (a=factorial, a!=Fibonacci)"<<endl;
		cin>>bnsw;
		if (bnsw=="a")
			{
				do
				{
					cout<<"Factorial mode. Please  enter a positive integer number."<<endl;
					cin>>n;
					while(n<0)
					{
						cout<<"You wrote a negative value which can't be answered, please enter a POSITIVE integer."<<endl;
						cin>>n;
					}
					a=1;
					fact=1;
					while(a<=n)
					{
						fact=fact*a;
						a++;
					}
					cout<<"The factorial value of "<<n<<" is "<<fact<<"."<<endl;
					cout<<"Would you like to try with another number? Any given answer different to yes will be taken as a no answer."<<endl;
					cin>>cnsw;
					if (cnsw!="yes")
						{
							cout<<"You have left the factorial program."<<endl;
						}
				} while(cnsw=="yes");
			} 
		else 
			{
				do
				{
					cout<<"Fibonacci mode. Please enter a positive integer number."<<endl;
					cin>>n;
					fa=0;
					fb=1;
					par=1;
					while(n<0)
					{
						cout<<"You wrote a negative value which can't be answered, please enter a POSITIVE integer."<<endl;
						cin>>n;
					}
					do
					{
					fib=fa+fb;
					fa=fb;
					fb=fib;
					par++;
					}while(par<=n);
					cout<<"The Fibonacci value of "<<n<<" is "<<fib<<"."<<endl;
					cout<<"Would you like to try with another number? Any given answer different to yes will be taken as a no answer."<<endl;
					cin>>cnsw;
					if (cnsw!="yes")
						{
							cout<<"You have left the Fibonacci program."<<endl;
						}
				}while (cnsw=="yes");
			}
		cout<<"Would you like to try again with another program?(Any given answer different to yes will be taken as a no answer)."<<endl;
		cin>>answ;
	}while (answ=="yes");
	cout<<"OK, goodbye."<<endl;
	return 0;
}