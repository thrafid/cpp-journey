// Exercise 1: Simple Calculator
#include <iostream>

int main() {
    int a,b;
    char operation;
    std::cout << "Enter two numbers and an operation (+, -, *, /):";
    std::cin >> a >> b >> operation;
    // std::cout << "You entered :" << a << '\n' << b << operation ;
    if(operation == '+'){
        std::cout << "addition = " << a+b;
    }
    else if(operation == '-'){
        std::cout << "substraction = " << a-b;
    }
    
    else if(operation == '*'){
        std::cout << "multiplication= " << a*b;
    }
    else if(operation == '/'){
        std::cout << "division= " << a/b;
    }
    else{
        std::cout << "Invalid!!";
    }
    return 0;
}
