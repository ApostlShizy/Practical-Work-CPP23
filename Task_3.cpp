#include<iostream>

#define COUNT(func,train) func(train)
#define FILL(func,train) func(train)

void count(int train[]) {
    int total = 0;
    for (int i = 0; i < 10; ++i) {        
        if (train[i] > 20) {
            std::cout << "\nWagon " << i << " overcrowded!";
            total += train[i];  
            train[i] = -1;
        }
    }
    for(int i = 0; i < 10; ++i){
        if(train[i] == 0) {
            std::cout<<"\nWagon " << i << " empty.";
        }
        if(train[i] > 0) {
            total += train[i];
        }
    }
    std::cout<<"\nCount off.Total count: "<< total;
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