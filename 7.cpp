#include <iostream>
#include <list>

using namespace std;

int main() {
    std::list<int> primeNumbers;
    int i ,x;
    bool test;
    int thPrime = 0;
    test = false;
    for (i = 2 ;thPrime < 10001 ;i = i + 1){
        test = false;
        for (x = i - 1 ;x != 1 ;x = x - 1){
            if (i % x == 0){
                test = true;
                break;
            }
        }
        if (test == false){
            if (thPrime == 10000){
                cout << i;
            }
            thPrime = thPrime + 1;
        }
    }
}