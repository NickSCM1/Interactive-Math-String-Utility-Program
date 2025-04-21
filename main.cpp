//****************************************************** 
// Author:      Nickolas Marino
// Asignment:   Interactive Math String Utility
// Description: A Multi Function Calculator
//             
//******************************************************

#include <iostream>
#include <string>

void factorialCalculator() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
        return;
    }

    long long factorial = 1;
    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;
}

void numberPyramid() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    if (rows <= 0) {
        std::cout << "Error: Number of rows must be a positive integer." << std::endl;
        return;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void sumOfEvenOrOddNumbers() {
    int choice;
    std::cout << "Enter 1 for sum of even numbers or 2 for sum of odd numbers: ";
    std::cin >> choice;

    if (choice != 1 && choice != 2) {
        std::cout << "Error: Invalid choice." << std::endl;
        return;
    }

    int n;
    std::cout << "Enter an upper limit: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Error: Upper limit must be a positive integer." << std::endl;
        return;
    }

    int sum = 0;
    int i = 1;
    do {
        if ((choice == 1 && i % 2 == 0) || (choice == 2 && i % 2 != 0)) {
            sum += i;
        }
        i++;
    } while (i <= n);

    if (choice == 1) {
        std::cout << "Sum of even numbers up to " << n << ": " << sum << std::endl;
    } else {
        std::cout << "Sum of odd numbers up to " << n << ": " << sum << std::endl;
    }
}

void reverseString() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    std::string reversedStr = "";
    int i = str.length() - 1;
    while (i >= 0) {
        reversedStr += str[i];
        i--;
    }

    std::cout << "Reversed string: " << reversedStr << std::endl;
}

void checkPalindrome() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    std::string reversedStr = "";
    int i = str.length() - 1;
    while (i >= 0) {
        reversedStr += str[i];
        i--;
    }

    if (str == reversedStr) {
        std::cout << str << " is a palindrome." << std::endl;
    } else {
        std::cout << str << " is not a palindrome." << std::endl;
    }
}

void fibonacciSeries() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Error: Input must be a positive integer." << std::endl;
        return;
    }

    int a = 0;
    int b = 1;
    std::cout << "Fibonacci series up to " << n << ": ";
    while (a <= n) {
        std::cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    std::cout << std::endl;
}

void checkPrime() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Error: Input must be a positive integer." << std::endl;
        return;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        std::cout << n << " is a prime number." << std::endl;
    } else {
        std::cout << n << " is not a prime number." << std::endl;
    }
}

void calculateGCD() {
    int a, b;
    std::cout << "Enter two positive integers: ";
    std::cin >> a >> b;

    if (a <= 0 || b <= 0) {
        std::cout << "Error: Both inputs must be positive integers." << std::endl;
        return;
    }

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    std::cout << "GCD of the two numbers is: " << a << std::endl;
}

void displayMenu() {
    int choice;
    do {
        std::cout << "========= Interactive Utility Program =========" << std::endl;
        std::cout << "1. Factorial Calculator" << std::endl;
        std::cout << "2. Number Pyramid" << std::endl;
        std::cout << "3. Sum of Even or Odd Numbers" << std::endl;
        std::cout << "4. Reverse a String" << std::endl;
        std::cout << "5. Check Palindrome" << std::endl;
        std::cout << "6. Fibonacci Series" << std::endl;
        std::cout << "7. Check Prime Number" << std::endl;
        std::cout << "8. Calculate GCD" << std::endl;
        std::cout << "9. Exit" << std::endl;
        std::cout << "==============================================" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                factorialCalculator();
                break;
            case 2:
                numberPyramid();
                break;
            case 3:
                sumOfEvenOrOddNumbers();
                break;
            case 4:
                reverseString();
                break;
            case 5:
                checkPalindrome();
                break;
            case 6:
                fibonacciSeries();
                break;
            case 7:
                checkPrime();
                break;
            case 8:
                calculateGCD();
                break;
            case 9:
                std::cout << "Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Error: Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 9);
}

int main() {
    displayMenu();
    return 0;
}
