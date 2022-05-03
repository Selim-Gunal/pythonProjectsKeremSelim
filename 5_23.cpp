#include <iostream>

using namespace std;

int main() {
    int i ,x ,hashtag ,hashtagCache ,star ,starCache ,whatLine ,space ,spaceCache ,spaceSecondPhaze ,spaceSecondPhazeCache;
    bool starIncreasePoint;
    whatLine = 0;
    starCache = 8;
    starIncreasePoint = false;
    spaceCache = 0;
    spaceSecondPhazeCache = 0;
    for (i = 0 ;i < 9 ;i = i + 1){
        if (whatLine == 0 or whatLine == 8){
            for (hashtagCache = 0 ;hashtagCache < 8 ;hashtagCache = hashtagCache + 1){
                cout << "#";
            }
        }
            else {
            cout << "#";
        }

        if (whatLine > 1 && whatLine < 7){
            if (whatLine < 5){
                spaceCache = spaceCache + 1;
            }

            for (space = 0 ;space < spaceCache ;space = space + 1){
                cout << " ";
            }

            if (whatLine >= 4){
                spaceCache = spaceCache - 1;
            }
        }

        if (0 < whatLine && whatLine < 8){
            for (star = -1 ;star < starCache ;star = star + 1){
                cout << "*";
            }
        }

        if (whatLine < 4){
            starCache = starCache - 2;
        }

        if (whatLine > 3){
            starCache = starCache + 2;
        }

        if (whatLine > 1 && whatLine < 7){
            if (whatLine < 5){
                spaceSecondPhazeCache = spaceSecondPhazeCache + 1;
            }

            for (spaceSecondPhaze = 0 ;spaceSecondPhaze < spaceSecondPhazeCache ;spaceSecondPhaze = spaceSecondPhaze + 1){
                cout << " ";
            }

            if (whatLine >= 4){
                spaceSecondPhazeCache = spaceSecondPhazeCache - 1;
            }
        }

        cout << "#";
        whatLine = whatLine + 1;
        cout << endl;
    }
}
