/**
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;        // sum of all multiples of 3 or 5
    int test = 1000;    // test input for problem

    for(size_t i = 0; i < 1000; i++)    // i loops until test value
    {
        if(i % 3 == 0 || i % 5 == 0)    // checks if i is a multiple of 3 or 5
        {
            sum += i;   // adds i to the sum
        }
    }
    cout << sum << endl;    // prints the sum

    return 0; 
}