#include <iostream>

using namespace std;

int main (){
    //a ,b ,c ,d Represents the shapes like a is the first shape
    int i ,a ,b ,c ,d ,cache ,space ,cacheSpace ,secondSpace ,secondSpaceCache;
    a = 1;
    b = 10;
    c = 10;
    cacheSpace = 11;
    secondSpaceCache = 0;
    for (i = 0 ;i < 10 ;i = i + 1) {
        space = cacheSpace;
        secondSpace = secondSpaceCache;
        for (cache = 0; cache < a; cache = cache + 1) {
            cout << "*";
        }
        a = a + 1;

        while (space != 0){
            cout << " ";
            space = space - 1;
        }
        cacheSpace = cacheSpace - 1;

        for (cache = b ;cache > 0 ;cache = cache - 1){
            cout << "*";
        }
        b = b - 1;

        for (secondSpace ;secondSpace < 1 ;secondSpace = secondSpace + 1){
            cout << "  ";
        }
        secondSpaceCache = secondSpaceCache - 1;

        for (cache = c ;cache > 0 ;cache = cache - 1){
            cout << "*";
        }
        c = c - 1;

        cout << endl;
    }
}