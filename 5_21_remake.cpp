#include <iostream>
//e5_21.cpp // Modified e5_15.cpp
using namespace std;

int main () { //a ,b ,c ,d Represents the shapes like a is the first shape
    int a, b, c, d, cache, cacheSpace, firstSpace, secondSpace, firstSpaceCache, secondSpaceCache, thirdSpace, thirdSpaceCache;
    a = 1;  //Start from 1 then increase and goes to 10
    b = 10; //Start from 10 then decrease and goes to 1
    c = 10; //Start from 10 then decrease and goes to 1
    d = 1; //Start from 1 then increase and goes to 10

    //Spaces between diagrams initialized
    cacheSpace = 11;
    firstSpaceCache = 10;       //Initial Space between A and B
    secondSpaceCache = 1;       //Initial Space between B and C
    thirdSpaceCache = 10;       //Initial Space between C and D

    for (int i = 0 ;i < 10 ;i = i + 1) {  //Outer forloop for all printing
        cacheSpace--; //cacheSpace becomes 11 first and then decrease gradually
        secondSpace = secondSpaceCache;     //second space becomes 11

        //Part A
        for (cache = 0; cache < a; cache++) {
            cout << "*";
        }
        a++; //Increases a so it prints one more in each iteration

        //Prints the empty space between a and b
        for (firstSpace = firstSpaceCache ;firstSpace > 0 ;firstSpace--) {
            cout << " ";
        }
        firstSpaceCache--;

        //Part B
        for (cache = b ;cache > 0 ;cache--){
            cout << "*";
        }
        b--;
        cout << " ";

        //Prints the empty space between b and c
        for (; secondSpace < 1 ;secondSpace++) {
            cout << "  ";
        }
        secondSpaceCache--;

        //Part C
        for (cache = c ; cache > 0; cache--) {
            cout << "*";
        }
        c--;

        //Prints the empty space between b and c
        for (thirdSpace = 0; thirdSpace < thirdSpaceCache; thirdSpace++) {
            cout << " ";
        }
        thirdSpaceCache--;

        //Prints the empty space between c and d
        for (cache = 0; cache < d; cache++) {
            cout << "*";
        }
        d++;
        cout << endl;
    }
}