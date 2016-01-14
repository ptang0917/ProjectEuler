#include <iostream>
using namespace std;
int main() {
   int sum = 0; //declaring the variable
   for(int i = 0; i <= 1000; i++)  {  //setting up the for loop
   	   if(i % 3 == 0 || i % 5 == 0)
   	   	 sum += i;
   	}
    std::cout << "The sum is " << sum << endl;
    return 0; 
}
