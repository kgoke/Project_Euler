/**
A palindromic number reads the same both ways. The largest palindrome made from the 
product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>

using namespace std;

bool ispalin(int n);

int main(){
  int n;        // product of two 3-digit numbers
  int h = 0;    // highest palindrome

  for(int i = 100; i < 1000; i++){      // loops from 100 to 999
      for(int j = 100; j < 1000; j++){  // loops from 100 to 999
          n = i * j;                    // gets product of i and j
          if(ispalin(n)){               // checks if n is a palindrome
              if(n > h)                 // checks if palindrome is greater than current high
              {
                  h = n;                // updates current high
              }
          }
      }
  }

  cout << h << endl;    // displays the highest palindrome 
   return 0;

}

bool ispalin(int n){

    int rev = 0;    // reverse of input number
    int rem;        // holder for remainder
    int temp = n;   // tempary holder for input value

    while(temp > 0){            // loops while temp is greater than 0
        rem = temp % 10;        // gets remainder of temp divided by 10
        temp = temp / 10;       // divided temp by 10
        rev = rev * 10 + rem;   // multiplies the reversed number by 10 and adds the remainder value
    }

    if(rev == n)    // checks if reverse number is equal to input number
    return 1;       // returns true
    else
    return 0;       // returns false

}