#include <iostream>

using namespace std;

int main (){
    //a ,b ,c ,d Represents the shapes like a is the first shape
    int i ,a ,b ,c ,d ,cache ,space ,cacheSpace ,secondSpace ,secondSpaceCache ,thirdSpace ,thirdSpaceCache;
    a = 1;
    b = 10;
    c = 10;
    d = 1;
    cacheSpace = 11;
    secondSpaceCache = 1;
    thirdSpaceCache = 10;
    for (i = 0 ;i < 10 ;i = i + 1) {
        space = cacheSpace;
        secondSpace = secondSpaceCache;
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

        cout << " ";
        for (secondSpace ;secondSpace < 1 ;secondSpace = secondSpace + 1){
            cout << "  ";
        }
        secondSpaceCache = secondSpaceCache - 1;

        for (cache = c ;cache > 0 ;cache = cache - 1){
            cout << "*";
        }
        c = c - 1;

        for (thirdSpace = 0 ;thirdSpace < thirdSpaceCache ;thirdSpace = thirdSpace + 1){
            cout << " ";
        }
        thirdSpaceCache = thirdSpaceCache - 1;

        for (cache = 0 ;cache < d ;cache = cache + 1){
            cout << "*";
        }
        d = d + 1;

        cout << endl;
    }
}