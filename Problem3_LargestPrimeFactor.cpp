/*
* Problem 3: Largest Prime Factor
* The Prime factors of 13195 are 5, 7, 13 and 29.
* What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>

using namespace std;

int main()
{
   unsigned long primeNum = 600851475143;
   
   for( long x = 2; x < primeNum; x++){
       while( primeNum % x == 0 ){

           //Break down to prime
           primeNum = primeNum / x ;
           
       }
       //cout << primeNum << endl;
   }
   
   cout << primeNum << endl;
   
   return 0;
}

