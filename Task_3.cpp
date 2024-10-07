#include<iostream>

#define COUNT(func,train) func(train)
#define FILL(func,train) func(train)

void count(int train[]) {
    for (int i = 0; i < 10; ++i) {
        if (train[i] == 0) {
            std::cout << "\nWagon " << i << " empty.";
        }
        else if (train[i] > 20) {
            std::cout << "\nWagon " << i << " overcrowded!";
        }
    }
}

void fill(int train[]) {
    for (int i = 0; i < 10; ++i) {
        std::cout << "\nEnter number of passengers in " << i << " wagon: ";
        std::cin >> train[i];
    }
}

int main() {
    int train[10];
    FILL(fill, train);
    COUNT(count,train);
}