//2520 is the smallest number that can be divided 
//by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible 
//by all of the numbers from 1 to 20?

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	for(int x = 10000000; x < 100000000000; x+=20)
	{
       bool divided = true;
	   for(int y = 11; y <= 20; y++)
	      if(x%y != 0)
	         divided = false;
	   if(divided)
	   {
	      cout << x;
	      return 0;
	   }
    }
	return 0;
}
