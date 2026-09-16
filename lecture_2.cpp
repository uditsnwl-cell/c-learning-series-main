// ------------------------------------ conditional statements ---------------------
#include <iostream>
using namespace std;

//----------------  grading system -----------------------

int main(){
    int marks;
    cout << "Enter mark's obtained: ";
    cin >> marks;

    if(marks >= 90){     
        cout << "Grade : A\n";
    }else if(marks >= 80 && marks < 90){
        cout << "Grade : B\n";
    } else{
        cout << "Grade : C\n";
    }
    return 0;
}



// --------------------- find is the character is lowercase or uppercse ------------------------

// ---------------- method 1 -------------


int main(){
    char ch;
    cout << " Enter your character :";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "lowercase \n";
    }else{
        cout << "uppercase \n";
    }
}


//--------------------  method 2 - by comparing ascii values --------------------------

int main(){
    char ch;
    cout << " Enter your character :";
    cin >> ch;

    if(ch >= 65 && ch <= 90){    //implicit type conversion
        cout << "uppercase \n";
    }else{
        cout << "lowercase \n";
    }

  return 0;
}





// ------------------------------------loops ---------------------------------------------

//-------------------------- while loop --------------------------

// --------------- print nnumber 1 to 10 ------------

int main(){
    int i = 1;

    while(i <= 10){
        cout << i;
        cout << endl;
        i++;
    }
    return 0;
}



// ------------------------------- for loop ----------------------------------

//------------ sum of n'th number -------------------

int main(){

    int n = 50;
    int sum = 0;

    for(int i = 1; i <= n; i++){
       sum += i;
       if(i == 5){
        break;
       }
    }
    cout <<"sum: " << sum << endl;
    return 0;
}





//------------------- sum of all odd numbers from 1 to n -------------------------


int main(){
  int n = 50;
  int sum = 0;

  for(int i=1; i<=n ; i = i+2){
     sum += i;
  }

  cout << "sum : " << sum << endl;
  return 0;
}



//-------------------  check if the number is prime or not --------------------


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




usydysygd