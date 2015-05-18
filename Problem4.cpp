//A palindromic number reads the same both ways. The largest 
//palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	string pali;
	int largest = 0;
	for(int x = 999; x > 0; x--)
	   for(int y = 999; y > 0; y--)
	   {
		   bool palindrome = true;
		   int number = x*y;
		   ostringstream ss;
		   ss << number;
		   pali = ss.str();
		   for(int z = 0; z < pali.size()/2; z++)
		      if(pali[z] != pali[pali.length()-z-1])
		         palindrome = false;     
		   if(palindrome)
		      if(number > largest)
		         largest = number;
	   }

	cout << largest;
	return 0;
}
