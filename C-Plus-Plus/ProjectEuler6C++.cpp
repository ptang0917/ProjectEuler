#include <iostream>
#include <math.h> 

int main () {
   //Declaring the necessary variables to compute the difference between to sums
   int sum1 = 0;
   int n = 0;
   int m = 0;
   int sum2 = 0;
   
   //This for loop is basically the summation of n^2
   for(int i = 1; i <= 100; i++) {
       n = pow(i,2);
       sum1 += n;
    }
    
    //The second for loop add ups the integer from n = 1-100 and then square the sum 
   for(int j = 1; j <= 100; j ++) {
      m += j;
   }
   sum2 = pow(m,2);
   int diff = sum2 - sum1; //Calculating the difference between the two sums
   std::cout << "The sum of all n^2 from n = 1 to 100 is " << sum1 << std::endl; //Outputing the first sum
   std::cout << "The square of the summation from n = 1 to 100 is " << sum2 << std::endl; //Outputting the second sum
   std::cout << "The difference between two sums is " << diff << std::endl; //Outputing the difference 
   return 0;  
}
