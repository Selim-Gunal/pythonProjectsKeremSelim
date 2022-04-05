#include <iostream>

using namespace std;

int main() {
    int a ,a1 ,b ,b1 ,c ,c1 ,c2 ,d ,d1;
    bool indicator;

    cout << "a";
    cout << "\n";

    for (a = 0 ;a < 10 ; a = a + 1){
        for (a1 = -1 ;a1 < a ;a1 = a1 + 1){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n";
    cout << "b";
    cout << "\n";

    for (b = 0 ;b < 10 ;b = b + 1){
        for (b1 = 10 ;b1 > b ;b1 = b1 - 1){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n";
    cout << "c";
    cout << "\n";

    for (c = 0 ;c < 10 ;c = c + 1){
        for (c2 = 0 ;c2 < c ;c2 = c2 + 1){
            cout << " ";
        }
        for (c1 = 10 ;c1 > c2 ;c1 = c1 - 1){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "d";
    cout << "\n";
}