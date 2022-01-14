/**
A palindromic number reads the same both ways. The largest palindrome made from the 
product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>

using namespace std;

bool ispalin(int n);

int main(){
  int n; 
  int h = 0;

  for(int i = 100; i < 1000; i++){
      for(int j = 100; j < 1000; j++){
          n = i * j;
          if(ispalin(n)){
              if(n > h)
              {
                  h = n;
              }
          }
      }
  }

  cout << h << endl;
   return 0;

}

bool ispalin(int n){

    int rev = 0;
    int rem;
    int temp = n;

    while(temp > 0){
        rem = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + rem;
    }

    if(rev == n)
    return 1;
    else
    return 0;

}