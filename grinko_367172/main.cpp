#include <iostream>

int Plus(int a, int b);

int Minus(int a, int b);

int main() {
    int a;
    std::string sign;
    int b;
    std::cin >> a >> sign >> b;
    std::cout << "Hello, this is SimpleCalc!" << std::endl;
    return 0;
}

int Plus(int a, int b) {
    return a + b;
}

int Minus(int a, int b) {
    return a - b;
}

