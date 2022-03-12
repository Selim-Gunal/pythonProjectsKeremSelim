//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>
#include <list>

using namespace std;

int main(){
    std::list<int> primeNumbers;
    int i ,x ,z ,indicator ,result ,multiCache;
    multiCache = 1;
    result = 1;
    //This for loop find the prime numbers below 21
    for (i = 2 ;i < 21 ;i = i + 1){
        for (x = 2 ;x < 21 ;x = x + 1){
            indicator = 0;
            if (i == x){
                x = x + 1;
            }
            if (i % x == 0){
                indicator = 1;
                break;
            }
        }
        if (indicator == 0){
            primeNumbers.push_back(i);
        }
    }
    for (int i : primeNumbers){
        for (x = 4 ;x > 0 ;x = x - 1){
            multiCache = 1;
            //I couldn't found how to make 2 ** 4 so in the internet i found this method
            for (z = 1 ;z <= x ;z = z + 1){
                multiCache = multiCache * i;
            }
            if (multiCache < 21){
                result = result * multiCache;
                break;
            }
        }
    }
    cout << result;
}

//The result is 232792560
