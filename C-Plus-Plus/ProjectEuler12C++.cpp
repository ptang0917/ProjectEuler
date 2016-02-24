#include <iostream>
#include <cmath>

#include <time.h>

using namespace std;

int findingDivisor(int n) {
	int count = 0;
	 //cout << "Divisor of  " << n << " is " << endl;
	 //Determine the divisor of that given number n
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) { //If a divisor is found, print the that divisor and increase the count by 1
			//cout << i << endl;  //prints out the divisor 
			if(i != sqrt(n)){
				count+=2;
			}
			else {
				count+=1; //increase the count
			}
			

			
		}
	}
	//cout << "which has  " << count << " divsors " << endl;
	return count; //returns the how many divsors in the given number n.

}

int main() {
	int natural = 1; //variable represented the natural number that is being 'evaulated ' to determine how many divisors there is
	int naturalsum = 1; //variable representing how many 
	
	int magiccount = 0;
	clock_t init, final;

	init=clock(); 
	while (natural > 0) {  //make sure that the given number is 'natural';
		magiccount = findingDivisor(natural); //variable magic count takes in the returned value of the function
											  //'findingDivisor' which is how many divisors found in the given natural number;	
		if (magiccount > 500) {  
			//if the amount of divisors exceeds the 500 limit, the loop terminates
			break;
			
			
		}
		else {  //if the number of divisors is still under 500, then it will continue to search for that number that has 500 divisors or more
			naturalsum++; //increase the naturalsum by 1 
			natural += naturalsum; //add that natural number based on the variable naturalsum.
		}
		
	}

	
	final=clock()-init;
	cout << "The first triangle number to have over five hundred divisors is " << natural << endl;
	cout << "The time the program takes is " << (double)final / ((double)CLOCKS_PER_SEC) << " seconds " << endl;

	 
	return 0;
}
