#include<iostream>

#define SPRING 0
#define SUMMER 1
#define AUTUMN 0
#define WINTER 0

int main () {
    #if (SPRING && !SUMMER && !AUTUMN && !WINTER)
    std::cout<<"\nIts a SPRING";
    #endif

    #if (!SPRING && SUMMER && !AUTUMN && !WINTER)
    std::cout<<"\nIts a SUMMER";
    #endif

    #if (!SPRING && !SUMMER && AUTUMN && !WINTER)
    std::cout<<"\nIts a AUTUMN";
    #endif

    #if (!SPRING && !SUMMER && !AUTUMN && WINTER)
    std::cout<<"\nIts a WINTER";
    #endif  
}






