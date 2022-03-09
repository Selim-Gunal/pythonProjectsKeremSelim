#include <iostream>
using namespace std;

int main(){
         int i ,sumOfNumbersCanDevide3or5;
         sumOfNumbersCanDevide3or5 = 0;
         for (i = 0;i < 1000;i = i + 1){
            if (i % 3 == 0){
                sumOfNumbersCanDevide3or5 = sumOfNumbersCanDevide3or5 + i;
            }
            if (i % 5 == 0){
                sumOfNumbersCanDevide3or5 = sumOfNumbersCanDevide3or5 + i;
                if (i % 3 == 0){
                    sumOfNumbersCanDevide3or5 = sumOfNumbersCanDevide3or5 - i;
                }
            }
         }
    cout << sumOfNumbersCanDevide3or5;

}
