//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <list>
using namespace std;

int main(){
    long long i ,x ,y ,cacheNumber ,nowNumber ,test;
    long long our_number = 600851475143;
    std::list<long long> numbersCanDevide;
    long long result = 0;

    for (i = 2 ;i < 600851475143 / 70 + 1 ;i = i + 1){
        if (600851475143 % i == 0){
            //I did push front because the question want us bigger number and I but bigger number to the front so I don't have to reverse
            numbersCanDevide.push_front(i);
        }
    }
    for (i = 0 ;i < numbersCanDevide.size() ;i = i + 1){
        test = 0;
        //I've done this loop because as i found in cpp there isn't numbersCanDevide[0] so i did a loop it finds numbersCanDevide[i] and it puts into nowNumber
        for (long long x : numbersCanDevide){
            if (test == i){
                nowNumber = x;
                break;
            }
            test = test + 1;
        }
        //This for loop finds if the nowNumber is a prime number
        for (y = 2 ;y < nowNumber ;y = y + 1){
            if (nowNumber % y == 0){
                break;
            }
            if (y == nowNumber - 1){
                result = nowNumber;
            }
        }
        //If the number found it breaks the loop and prints the result
        if (result > 0){
            break;
        }
    }
    cout << result << endl;
    //The result is 6857
}
