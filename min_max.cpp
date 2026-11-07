/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    int value;
    int smallestValue;
    int largestValue;
    bool data = false;

    std::cout << "Enter integers (-99 to finish): ";

    while (std::cin >> value && value != -99) {
        if (!data) {
            smallestValue = value;
            largestValue = value;
            data = true;
        } else {
            if (value < smallestValue) {
                smallestValue = value;
            }
            if (value > largestValue) {
                largestValue = value;
            }
        }
    }

    if (!data) {
        std::cout << "Clear no-data message.\n";
    } else {
        std::cout << "Smallest value: " << smallestValue << '\n';
        std::cout << "Largest value: " << largestValue << '\n';
    }

    return 0;
}