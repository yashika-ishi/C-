#include<iostream>
#include<cmath>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: \n
  To sum two numbers: +\n
  To subtract two numbers: -\n
  Tp multiply two numbers: *\n
  To devide two numbers: / ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    case:'sqrt':
        cout<<num1<<"square root="<<


    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}