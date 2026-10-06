## Lecture 2
```
Topics to be covered :
1. Conditional statements 
   a. if-else statement 
2. loops 
   a. While loop
   b. For loop
3. Nested loops

```

1. Conditional statements <br>
    Example 1 :  Grading system
```cpp
#include <iostream>
using namespace std;
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
```

Example 2: Find is the character is lowercase or uppercse <br>

     a. method 1 

```cpp
#include <iostream>
using namespace std;
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
```

    b. method 2 - By comparing ascii values 

```cpp
#include <iostream>
using namespace std;
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


```


2. Loops <br>


   a. While loop <br>


  example 1: Print nnumber 1 to 10 
```cpp
#include <iostream>
using namespace std;
int main(){
    int i = 1;

    while(i <= 10){
        cout << i;
        cout << endl;
        i++;
    }
    return 0;
}

```

  b. For loop <br>
  

  Example 1: Sum of n'th number

```cpp 
#include <iostream>
using namespace std;
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

```


   Example 2: Sum of all odd numbers from 1 to n 


```cpp
#include <iostream>
using namespace std;
int main(){
  int n = 50;
  int sum = 0;

  for(int i=1; i<=n ; i = i+2){
     sum += i;
  }

  cout << "sum : " << sum << endl;
  return 0;
}
```


  Example 3: Check if the number is prime or not


```cpp
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
```


3. Nested loops

