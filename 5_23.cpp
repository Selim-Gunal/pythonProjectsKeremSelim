#include <iostream>

using namespace std;

int main() {
    int i ,x ,hashtag ,hashtagCache ,star ,starCache ,whatLine;
    bool starIncreasePoint;
    whatLine = 0;
    starCache = 7;
    starIncreasePoint = false;
    for (i = 0 ;i < 9 ;i = i + 1){
        if (whatLine == 0 or whatLine == 8){
            for (hashtagCache = 0 ;hashtagCache < 8 ;hashtagCache = hashtagCache + 1){
                cout << "#";
            }
        }
            else {
            cout << "#";
        }

        if (0 < whatLine and whatLine < 8){
            for (star = 0 ;star < starCache ;star = star + 1){
                cout << "*";
                if (whatLine == 4){
                    starIncreasePoint = true;
                }
            }
        }

        if (starIncreasePoint == false){
            starCache = starCache - 2;
        }

        if (starIncreasePoint == true){
            starCache = starCache + 2;
        }

        cout << "#";
        whatLine = whatLine + 1;
        cout << endl;
    }
}
