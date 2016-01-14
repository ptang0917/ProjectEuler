#include <iostream>
using namespace std;
int main() {
    int a = 1; //base case
    int b = 1; 
    int sum = 0;  //declaring sum 
    for(int c = 0; c < 4000000; c++){
        c=(a+b);
    	a=b;
	    b=c;	  
       if(c % 2 == 0)
         sum += c;
     }
   std::cout << "The fibanocci sum of even numbers is " << sum << endl;
   return 0;
}
