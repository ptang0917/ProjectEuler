#include <iostream>
using namespace std;
bool isPrime(int num){
	int count = 0;
	for(int i = 1; i <= num; i++){
		if(num % i == 0){
			count++;
		}
	}
	if(count == 2){
		return true;
	}
	else{
		return false;
	}
	


}

int main(){
	int num = 2;
	int i = 0;
	while(i < 10001){
		//cout << "hi " << endl;
		if(isPrime(num)){
			cout << num << " is a prime number " << endl;
			i++;
			num++;
		}
		else {
			num++;
		}
	}
	return 0;
	
}
