

#include <iostream>
using namespace std;

int main(){
  int n = 5;
  bool isPrime = true;

   for(int i = 2; i < n; i++){
      if(n % i == 0){
          isPrime = false;
          break;
      }
  }

  if(isPrime == true){
     cout << "it is a prime number";
  }else{
     cout << "It is an non prime number";
  }
  return 0;
}

