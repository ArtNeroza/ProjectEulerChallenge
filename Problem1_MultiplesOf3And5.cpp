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

