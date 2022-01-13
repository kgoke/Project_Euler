/**
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>

using namespace std;

int main()
{
    long long prime;            // stores largest prime factor
    long long test = 600851475143; // test input

    for(prime = 3; prime <= test; prime += 2)  // loops while prime less than or equal to test
    {
       while(test % prime == 0)
        {
          test /= prime;
        }

      if (test == 1) break;  // breaks loop if n is equal to 1
    }

  cout << prime << endl;  // prints the largest prime factor
}