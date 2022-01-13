/**
A palindromic number reads the same both ways. The largest palindrome made from the 
product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>

using namespace std;

bool isPalin(int product);

int main()
{
    int product;        // product of two 3-digit numbers
    int highest = 0;    // hightest palindrome
    // find all possible products of two 3-digit numbers
    for(int i = 100; i <= 999; i++)
    {
        for(int j = 100; i <= 999; j++)
        {
            product = i * j;            // gets product of i and j
            if(isPalin(product))        // checks if product is a palindrome
            {
                if(product > highest)   // checks if product is higher than current high
                {
                    highest = product;  // updates current high
                }
            }
        }
    }

    cout << highest << endl;            // prints highest palindrome
}

// check if product is a palindrome
bool isPalin(int product)
{

}

