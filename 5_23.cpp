#include <iostream>

using namespace std;

int main() {
    int i ,x ,hashtag ,hashtagCache ,whatLine;
    whatLine = 0;
    for (i = 0 ;i < 9 ;i = i + 1){
        if (whatLine == 0 or whatLine == 8){
            for (hashtagCache = 0 ;hashtagCache < 8 ;hashtagCache = hashtagCache + 1){
                cout << "#";
            }
        }
            else {
            cout << "#";
        }



        cout << "#";
        whatLine = whatLine + 1;
        cout << endl;
    }
}
