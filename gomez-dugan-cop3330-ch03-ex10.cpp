#include <iostream>
using namespace std;

int main(){
  string operation;
  double a;
  double b;
  cout << "Enter an operation (+, -, *, /) and two numbers (in this order) to get its calculcation.\n";
  while(cin >>operation >> a >> b)
  {
    if (operation == "+" || operation == "plus"){
      cout << "The result is " << a+b << ".\n";
      cout << "Enter an operation (+, -, *, /) and two numbers (in this order) to get its calculcation.\n";
    }
    else if (operation == "-" || operation == "minus"){
      cout << "The result is " << a - b << ".\n";
      cout << "Enter an operation (+, -, *, /) and two numbers (in this order) to get its calculcation.\n";
    }
    else if (operation == "*" || operation == "mul"){
      cout << "The result is " << a * b << ".\n";
      cout << "Enter an operation (+, -, *, /) and two numbers (in this order) to get its calculcation.\n";
    }
    else if (operation == "/" || operation == "div"){
      cout << "The result is " << a / b << ".\n";
      cout << "Enter an operation (+, -, *, /) and two numbers (in this order) to get its calculcation.\n";
    }
  }
  return 0;
}