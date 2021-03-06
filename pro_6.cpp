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
const int num = 100;

int main(){
    int s = 0, s2 = s;
    for(int i = 1; i <= num; i++){s += i*i; s2+= i;}
    cout << s2*s2 - s << endl;
    return 0;
}
