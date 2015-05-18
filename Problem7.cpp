//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that 
//the 6th prime is 13.
//What is the 10 001st prime number?

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int counter = 1;
	int number = 3;
	bool prime = true;
	
	while(counter < 10001)
	{
		prime = true;
		for(int x = 3; x < number; x++)
		   if(number%x == 0)
		      prime = false;
		if(prime)
		   counter++;
		number+=2;
	}

    cout << number-2;
    
	return 0;
}
