#include <iostream>

using namespace std;

int main (){
    int i ,a ,b ,c ,d ,cache;
    a = 1;
    b = 10;
    for (i = 0 ;i < 10 ;i = i + 1) {
        for (cache = 0; cache < a; cache = cache + 1) {
            cout << "*";
        }
        a = a + 1;
        cout << "         ";
        for (cache = 0 ;cache < b ;cache = cache + 1){
            cout << "*";
        }
        b = b - 1;

        cout << endl;
    }
}