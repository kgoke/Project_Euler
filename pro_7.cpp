/**
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
*/

#include <iostream>
using namespace std;

bool isprime(int num);

int main()
{
    int count = 2;  // counter for prime number ammount starts at 2 since 3 and 5 are already calculated
    int prime;      // prime number
    for (int i = 5;count != 10001 ; i+=2){
        if (isprime(i)){    // checks if i is a prime number
            count++;        // updates the count of prime numbers
        }
        prime = i;      // sets prime equal to i
    }
    cout << prime << endl;  // displays the 10001st prime number
    return 0;
}
bool isprime(int num)
{
    for (int i = 2; i <= num/2; i++){   // loops while i <= num divided by 2
        if (num % i == 0){              // checks if num divided by i has any remainders
            return false;               // if it does returns false
        }
    }
    return true;    // returns true
}
