#include <iostream>
#include <math.h> 
using namespace std;

float factorial(float  n) {
   if(n == 0 || n == 1) {
   	 return 1;
   }
   else {
   	 return n * factorial(n-1);
   }
}
int main() {
	float number;
	float factorialnum;
	float z;
	float n1;
	float sum;
	int digits = 0;
	cout << "Enter the any number from 0 - 100" << endl;
	cin >> number;
	factorialnum = factorial(number);
	z = factorialnum;
	while(factorialnum != 0){
            factorialnum = factorialnum / 10;
            digits++;
    }
    for(int i = 0; i < digits; i++){
            n1 = remainderf(z, 10);
            cout << "n1 = " << n1 << endl; 
            sum = sum + n1;
            cout << "sum = " << sum << endl; 
            z = z / 10;
            cout << "z = " << z << endl; 
            
    }
    cout << "The digital sum of  " << number << " factorial is " << sum << endl;
    
    
}
