//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
    int i ,x ,z ,n ,cache ,biggest;
    string straightNumber;
    string reverseNumber;
    string straightNumberCache;
    std::list<int> numbersList;
    biggest = 0;

    for (i = 999 ;i > 100;i = i - 1){
        for (x = 998 ;x > 99;x = x - 1){
            cache = i * x;
            straightNumber = to_string(cache);
            //I did the straightNumberCache beacuse swap function overwrites the existing variable
            straightNumberCache = straightNumber;
            n = straightNumberCache.length();
            for (z = 0 ;z < n / 2 ;z = z + 1){
                swap(straightNumberCache[z], straightNumberCache[n - z - 1]);
            }
            if (straightNumber == straightNumberCache){
                numbersList.push_front(cache);
            }
        }
    }
    //In this for loop it finds the biggest number in the list
    for (int x : numbersList){
        if (x > biggest){
            biggest = x;
        }
    }
    cout << biggest;
    //The result is 906609
}
