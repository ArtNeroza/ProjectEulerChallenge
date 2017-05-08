# ProjectEulerChallenge
Project Euler is an archive of mathematical / algorithmic problems intended to be solved in computer programs. (https://projecteuler.net/about)

This is for me to also learn C++ by its nature. 
In this challenge, We will be using C++. And day by day we will be solving this problems. 

If you have some critics or suggestion please feel free to commit and comment :)

PS: This was a challenge from a friend named: Nikolai Fontanila ( http://kranznikolai.com )

# Problem 1: Multiples of 3 and 5
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
```<c++>
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




