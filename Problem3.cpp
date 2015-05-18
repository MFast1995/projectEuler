//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	long long value = 600851475143;
	long long largest = 5;
	
	for(int x = 3; x <= sqrt(value); x+=2)
	{
		if(value%x == 0)
		{
			value = value/x;
			if(x > largest)
				largest = x;
		}
	}
	if(value > largest)
		largest = value;
	cout << value;

	return 0;
}
