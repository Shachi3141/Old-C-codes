
#include<iostream>
float squareRoot(int num) {
    float x = num;
    float y = 1;
    float precision = 0.001;

    while (x - y > precision) {
        x = (x + y) / 2;
        y = num / x;
    }

    return x;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Cannot calculate the square root of a negative number." << std::endl;
        return 0;
    }

    float result = squareRoot(num);
    std::cout << "Square root of " << num << " is approximately: " << result << std::endl;

    return 0;
}
