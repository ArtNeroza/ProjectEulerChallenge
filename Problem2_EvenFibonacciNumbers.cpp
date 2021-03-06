/*
* Problem 2: Even Fibonacci Numbers
* Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
* By starting with 1 and 2, the first 10 terms will be:
* 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
* By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
* find the sum of the even-valued terms.
* 
*/
#include <iostream>

using namespace std;

int main()
{
    int firstNum = 1; //starting number
    int secondNum = 2; // second number
    int thirdTotal = 0; // first number + second number equals the third number
    
    int totalSum = 0; //total of even valued terms
    
    while(secondNum <= 4000000){
        thirdTotal = firstNum + secondNum;
        if( secondNum % 2 == 0 ){
            totalSum +=secondNum;
        }
        firstNum = secondNum;
        secondNum = thirdTotal;
    }
    
    cout << totalSum << endl;
   
   return 0;
}

