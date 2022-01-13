
/**
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>

using namespace std;

int main()
{
  int a = 1;          // first number in fib sequence 
  int b = 2;          // second number in fib sequence 
  int c = 0;          // counting number for fib calculation
  int MAX = 4000000;  // max number according to problem
  int sum = b;        // sum of even values terms initalized to b

  while(c <= MAX)     // loops until c is MAX
  {
    c = a + b;        // finds next num in fib sequence
    if(c % 2 == 0)    // checks if number is even
    {
      sum += c;       // if even adds number to the sum
    }
    a = b;            // updates a to b
    b = c;            // updates b to c
  }
  cout << sum << endl;  // prints out the sum of all even-valued terms

  return 0;
}
