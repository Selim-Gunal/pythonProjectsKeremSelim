#include <iostream>

using namespace std;

int main (){
    //a ,b ,c ,d Represents the shapes like a is the first shape
    int i ,a ,b ,c ,d ,cache;
    a = 1;
    c = 10;
    for (i = 0 ;i < 10 ;i = i + 1) {

        for (cache = 0; cache < a; cache = cache + 1) {
            cout << "*";
        }
        a = a + 1;
        cout << "         ";

        cout << endl;
    }
}