/**
The sum of the squares of the first ten natural numbers is,
    1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
    (1+2+...+10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
    3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
using namespace std;

int getSumSquares(int num);
int getSQuareSums(int num);

int main(){
    int num = 100;  // test number
    cout << getSQuareSums(num) - getSumSquares(num) << endl;    // prints out the difference
    return 0;
}
int getSumSquares(int num){
    int sum = 0;    // sum of squares
    for(int i = 1; i <= num; i++){sum += i*i; } // loops until num is his adding i squares to the sum each loop
    return sum; // retuns sum of squares
}
int getSQuareSums(int num){
    int sum = 0;    // square of sums
    for(int i = 1; i <= num; i++){sum += i;} // loops until num is hit adding i to the sum each loop
    int sqr = sum * sum;    // squares the sum
    return sqr; // returns the square of sums
}