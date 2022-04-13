#include <iostream>

using namespace std;

int main (){
    //a ,b ,c ,d Represents the shapes like a is the first shape
    int i ,a ,b ,c ,d ,cache ,space ,cacheSpace;
    a = 1;
    b = 10;
    cacheSpace = 11;
    for (i = 0 ;i < 10 ;i = i + 1) {
        space = cacheSpace;
        for (cache = 0; cache < a; cache = cache + 1) {
            cout << "*";
        }
        a = a + 1;

        while (space != 1){
            cout << " ";
            space = space - 1;
        }
        cacheSpace = cacheSpace - 1;

        for (cache = b ;cache > 0 ;cache = cache - 1){
            cout << "*";
        }
        b = b - 1;



        cout << endl;
    }
}