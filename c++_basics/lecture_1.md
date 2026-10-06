
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