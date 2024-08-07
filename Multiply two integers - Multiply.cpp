#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1 = 5;
    int num2 = 3;
    int result = multiply(num1, num2);
    std::cout << "The result of multiplying " << num1 << " and " << num2 << " is " << result << std::endl;
    return 0;
}
