#include <string>
#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;

bool is_palindrome(BigInteger n){
  string s = bigIntegerToString (n);
  reverse (s.begin(), s.end());
  BigInteger x = stringToBigInteger (s);
  if (n == x){
    return true;
  } else {
    return false;
  }
}

BigInteger apply196(BigInteger n){
  string p = bigIntegerToString (n);
  reverse (p.begin(), p.end());
  BigInteger q = stringToBigInteger (p);
  n = n + q;
  return n;
}

void Space (){
  cout << endl;
}

int main() {
  int a;
  int b;
  int np = 0;
  int nl = 0;
  int l = 0;
  int i;
  BigInteger x;

  cout << "Enter the lower bound:" << endl;
  cin >> a;
  cout << "Enter the upper bound:" << endl;
  cin >> b;
  Space ();
  for (i = a; i <= b; i++){
    cout << "Analyzing number: " << i << endl;
    if (is_palindrome(i) == true){
      cout << "This number is a natural palindrome!" << endl;
      np++;
      Space ();
    } else {
      x = apply196 (i);
      for (int c = 1; c <= 30; c++){
        if (is_palindrome (x) == true){
          cout << "This number is a non-Lychrel number!" << endl;
          nl++;
          Space ();
          break;
        } else {
          x = apply196 (x);
        }
      }
      if (is_palindrome (x) == false){
        cout << "This number is a Lychrel number!" << endl;
        l++;
        Space ();
      }
    }
  }
  Space ();
  cout << "Analysis Report: " << endl;
  Space ();
  cout << "Number of Values Analyzed: " << (b - a) + 1 << endl;
  cout << "Number of Natural Palindromes: " << np << endl;
  cout << "Number of Non-Lychrel Numbers: " << nl << endl;
  cout << "Number of Lychrel Numbers: " << l << endl;
  return 0;
}