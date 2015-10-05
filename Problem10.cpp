//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	unsigned int counter = 9;
   unsigned int total = 17;
   while(counter < 2000000)
   {
      bool prime = true;
      for(int x = 3; x <= counter/3; x++)
         if(counter%x == 0)
            prime = false;
      if(prime)
         total += counter;
      counter = counter + 2;
   }
   cout << total;
}
