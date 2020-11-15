#include<iostream>
#include "prime.hpp"
#include "randomizeArray.h"

using namespace std;

int main() {
    auto isPrime = mtjprime::Prime();
    for(int i = 0; i < 10; i++) {
        int rand = mtjrandom::randint(1, 100000);
        if(isPrime.isPrime(rand)) {
            printf("%d is a prime\n", rand);
        } else {
            printf("%d is not a prime\n", rand);
        }
    }
    
    return 0;
}