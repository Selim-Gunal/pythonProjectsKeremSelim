#include <iostream>

using namespace std;

int main (){
    int i;
    //I am seperating the variables because it becomes much more easier to handle the code
    int sumOfSquares ,sumOfSquaresCache;
    int squareOfSum ,squareOfSumCache;
    sumOfSquares = 0;
    squareOfSumCache = 0;
    //This part of code finds the sum of the squares to 100
    for (i = 1 ;i < 101 ;i = i + 1){
        sumOfSquaresCache = i * i;
        sumOfSquares = sumOfSquares + sumOfSquaresCache;
    }
    //This part of the code finds the square of sum to 100
    for (i = 1 ;i < 101 ;i = i + 1){
        squareOfSumCache = squareOfSumCache + i;
    }
    squareOfSum = squareOfSumCache * squareOfSumCache;
    cout << squareOfSum - sumOfSquares;
}
//The result is 25164150