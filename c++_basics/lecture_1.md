
## lecture 1
```
Topics to be covered :

1. Baiscs of c++ - variables
2. input - output 
3. print result 
4. data types 
5. operations.
6. writing our first code
```

1. Basics of c++ variables :<br>

1. Variables : In c++ you can store any value by first defining what ype of data type is the value belongs to and by what name you want to define the value by . But these values can be updated by changing the value in the same variable . The true value stored is the last changed value . Such stored data that can be changes more then one time in single code file is known as Variables.

Example :

```cpp
#include <iostream>
using namespace std;

int main({
    str name = "udit"
    int age = 12
    double price = 11.122
    float length = 1.23
    
}
)
```

## c++ code

```cpp

#include <iostream>
using namespace std;

int main() {
    double a,b;    // data type - int , char , float , double etc;
    cout << "enter the value of a" << endl;    // print the statement or result 
    cin >> a;    // take input from user 
    cout << "enter the value of b" << endl;
    cin >> b;
    double sum = a + b;
    cout << "the value of a + b =  " << sum << endl;
    return 0;
}
```