#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int sideOne ,sideTwo ,i ,x ,indicateWhileLoop;
    float hypotenuse ,hypotenuseMod;
    indicateWhileLoop = false;

    while (indicateWhileLoop == false){

        for (sideOne = 1 ;sideOne < 501 ;sideOne = sideOne + 1){

            for (sideTwo = sideOne + 1 ;sideTwo < 501 ;sideTwo = sideTwo + 1){
                hypotenuse = sideOne * sideOne + sideTwo * sideTwo;

                hypotenuse = sqrt(hypotenuse);
                hypotenuseMod= fmodf(hypotenuse ,1);

                if (hypotenuse > 500){
                    break;
                }
                if (hypotenuseMod == 0){
                    cout << sideOne << " " << sideTwo << " " << hypotenuse << endl;
                }
            }
        }
        break;
    }
}