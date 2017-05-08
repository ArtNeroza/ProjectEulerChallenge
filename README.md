# ProjectEulerChallenge
Project Euler is an archive of mathematical / algorithmic problems intended to be solved in computer programs. (https://projecteuler.net/about)

This is for me to also learn C++ by its nature. 
In this challenge, We will be using C++. And day by day we will be solving this problems. 

If you have some critics or suggestion please feel free to commit and comment :)

PS: This was a challenge from a friend named: Nikolai Fontanila ( http://kranznikolai.com )

# Problem 1: Multiples of 3 and 5
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
```c++
#include <iostream>

using namespace std;

int main()
{
  	int total_sum = 0;
	  for( int x = 0; x < 1000; x++){
	      if( x % 3 == 0 || x % 5 == 0 ){
	         total_sum += x;
	      }
	  }
	cout << total_sum << endl;
	return 0;
}
```

# Problem 2: Even Fibonacci Numbers
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

```c++
#include <iostream>

using namespace std;

int main()
{
    int firstNum = 1; //starting number
    int secondNum = 2; // second number
    int thirdTotal = 0; // first number + second number equals the third number
    
    int totalSum = 0; //total of even valued terms
    
    //Iterate till 4M passing the sum of first number and second number to third number
    //check the number if it is even using modulo and pass to totalSum var
    //then update value of first number to second number and second number to third number
    //print total of even values.
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
```


