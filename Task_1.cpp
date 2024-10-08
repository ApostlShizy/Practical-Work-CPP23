#include<iostream>

#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"
#define CONCAT(number) DAY_ ## number


int main() {
    int num;
    std::cout << "Enter day of week (1-7): ";
    std::cin >> num;
    if (num == 1) {
        std::cout << "\nIts: " << CONCAT(1) << std::endl;
    }
    else if (num == 2) {
        std::cout << "\nIts: " << CONCAT(2) << std::endl;
    }
    else if (num == 3) {
        std::cout << "\nIts: " << CONCAT(3) << std::endl;
    }
    else if (num == 4) {
        std::cout << "\nIts: " << CONCAT(4) << std::endl;
    }
    else if (num == 5) {
        std::cout << "\nIts: " << CONCAT(5) << std::endl;
    }
    else if (num == 6) {
        std::cout << "\nIts: " << CONCAT(6) << std::endl;
    }
    else if (num == 7) {
        std::cout << "\nIts: " << CONCAT(7) << std::endl;
    }
    else {
        std::cout << "\nWrong number !";
    }
}

