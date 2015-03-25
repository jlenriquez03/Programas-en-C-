//José Luis Enríquez Flores
//A01630238
#include <iostream>
using namespace std;
 int mcd(int x, int y)
 {
	 if(x==0)
		 {
			 return y;
		 }
	 else if(y==0)
		 {
			 return x;
		 }
	 else if(x==y)
		 {
			 return y;
		 }
	 else if(x<y)
		 {
			 mcd(x,y%x);
		 }
	 else
		 {
			 return mcd(y,x%y);
		 }
 }
 
    int main()
     {
     int x,y;
	 cout<<"This program returns the MCD value of two given integers."<<endl;
	 cout<<"Please enter the first integer."<<endl;
     cin>>x;
	 cout<<"Please enter the second integer."<<endl;
     cin>>y;
	 int ans= mcd(x,y);
     cout<<"The MCD value of the given integers is "<<ans<<"."<<endl;
     return 0;
     }
