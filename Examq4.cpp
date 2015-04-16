//José Luis Enríquez Flores
//a01630238
#include<iostream>
#include<string>
#include<iterator>
using namespace std;
bool isPalindrome(string x)
{
if((x.length()==0) or (x.length()==1))
{
	return true;
}	
else if(x.begin()==x.end())
{
	return isPalindrome(x.substr(1,x.length()-1));
}
else
{
return false;	
}
}

int main()
{
	string x;
	cout<<"Please enter a word.";
	cin>>x;
	if(isPalindrome(x))
	{
		cout<<"It´s a palindrome!"<<endl;
	}
	else
	{
	cout<<"It´s not a palindrome."<<endl;
	}
	return 0;
}