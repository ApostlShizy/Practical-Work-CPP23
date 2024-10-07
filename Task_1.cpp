#include<iostream>

#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"
#define CONCAT(day,number) day ## _ ## number


int main() {
    int num;
    std::cout << "Enter day of week (1-7): ";
    std::cin >> num;
    if (num == 1) {
        std::cout << "\nIts: " << CONCAT(DAY, 1) << std::endl;
    }
    else if (num == 2) {
        std::cout << "\nIts: " << CONCAT(DAY, 2) << std::endl;
    }
    else if (num == 3) {
        std::cout << "\nIts: " << CONCAT(DAY, 3) << std::endl;
    }
    else if (num == 4) {
        std::cout << "\nIts: " << CONCAT(DAY, 4) << std::endl;
    }
    else if (num == 5) {
        std::cout << "\nIts: " << CONCAT(DAY, 5) << std::endl;
    }
    else if (num == 6) {
        std::cout << "\nIts: " << CONCAT(DAY, 6) << std::endl;
    }
    else if (num == 7) {
        std::cout << "\nIts: " << CONCAT(DAY, 7) << std::endl;
    }
    else {
        std::cout << "\nWrong number !";
    }
}

