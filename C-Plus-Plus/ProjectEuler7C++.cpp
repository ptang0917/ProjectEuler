#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main(){
  clock_t init, final;
  bool prime;
  int i = 1;
  int f = 1;
  int  num = 2;
  while(f >= 1){

     for(i = 2; i <= num; i++){

       prime = true;
           for(int n = 2; n <= sqrt(i); n++){
              if(i % n == 0){
                prime = false;
                num++;
              }
           }
      if(prime){
          //cout << f << ") " << i << " is prime" << endl;
          
          
          num++;
          f++;
        }
       if(f > 10001){
             
            cout << "The 10001st prime number is " << i << endl;
            final=clock()-init;
            cout << "The time the program takes is " << (double)final / ((double)CLOCKS_PER_SEC) << " seconds " << endl;

            break;

         }
    
      } 
      if(f > 10001) {
         break;
      }
      
    
   } 
  return 0;
}
