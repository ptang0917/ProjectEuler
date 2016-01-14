#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int m = 2;
    int n = 1;
    
    int sum;
    int sum2;
    int a;
    int b;
    int c;
    int aa;
    int bb;
    int cc;
    int p = 3;
    int product;
    while(sum != 1000){
         a = (pow(m,2) - pow(n,2));
         b = (2*m*n);
         c = (pow(m,2) + pow(n,2));
         sum = a+b+c;
         // aa = p*(pow(m,2) - pow(n,2));
         // bb = p*(2*m*n);
         // cc = p*(pow(m,2) + pow(n,2));
         // sum2 = aa+bb+cc;
         std::cout << "The sum of " << a << " & " << b  << " & " << c << " is " << sum << endl;
         // std::cout << "The sum of " << aa << " & " << bb  << " & " << cc << " is " << sum2 << endl;
         ++m;
         
         if(sum > 1000){

           n++;
           m = 2+n;
           
           
          
         }
         
       }
       
      
        
       
    if(sum == 1000){
      std::cout << "The following value for a such that a+b+c = 1000 is " << a << endl;
      std::cout << "The following value for b such that a+b+c = 1000 is " << b << endl;
      std::cout << "The following value for c such that a+b+c = 1000 is " << c << endl;
      product = a*b*c;
      std::cout << "The follow product of a*b*c is  " << product << endl;

    }
    // if(sum2 == 1000) { 
    //    std::cout << "The following value for a such that a+b+c = 1000 is " << aa << endl;
    //    std::cout << "The following value for b such that a+b+c = 1000 is " << bb << endl;
    //    std::cout << "The following value for c such that a+b+c = 1000 is " << cc << endl;
    //    product = aa*bb*cc;
    //    std::cout << "The follow product of a*b*c is  " << product << endl;
    // }   
    return 0; 
}
