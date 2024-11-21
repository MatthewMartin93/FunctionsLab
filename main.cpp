//Matthew Martin
//Mrs. Alblas
//Functions Lab
//11/21/24
#include <iostream>
std::string name;
int times, favNumber, num1, num2, num3;
void countdown();
void customGreet(std::string name, int times);
int getFavoriteNumber();
int calculateAverage(int a, int b, int c);

int main() {
    countdown();
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Pick a number" << std::endl;
    std::cin >> times;
    customGreet(name, times);
    favNumber = getFavoriteNumber();
    std::cout << "Your favorite number is: " << favNumber << std::endl;
    std::cout << "Enter number 1" << std::endl;
    std::cin >> num1;
    std::cout << "Enter number 2" << std::endl;
    std::cin >> num2;
    std::cout << "Enter number 3" << std::endl;
    std::cin >> num3;
    std::cout << "Average is: " << calculateAverage(num1, num2, num3) << std::endl;
    return 0;
}

void countdown() {
    for (int i = 10; i >= 0; i--) {
        if (i == 0) {
            std::cout << "Lift off!" << std::endl;
        }
        else {
            std::cout << i << std::endl;
        }
    }
}

void customGreet(std::string name, int times) {
    for (int i = 0; i < times; i++) {
        std::cout << "Hello, " << name << std::endl;
    }
}

int getFavoriteNumber() {
    int number;
    std::cout << "What is your favorite number? (int only)" << std::endl;
    std::cin >> number;
    return number;
}

int calculateAverage(int a, int b, int c) {
    int average = (a + b + c) / 3;
    return average;
}
