#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;


int main() {
   long currentnumber = 2520;
   bool found = false;
   bool divisible;
    while(!found) {
    	currentnumber += 2520;
    	for(int i = 11; i < 20; i++) {
    		if(currentnumber % i != 0) {
    			divisible = false;
    			break;
    		}
    		else {
    			divisible = true;
    		}
    	}
    	if(divisible) {
    		found = true;
    	}
}

   
   std::cout << "The  number is " << currentnumber << endl;
   	   
   	   	 
   	
         
    return 0; 
}

