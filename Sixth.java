//The sum of the squares of the first ten natural numbers is,
//The square of the sum of the first ten natural numbers is,
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

public class Sixth {
    public static void main(String[] args){
        int i ,sumOfSquares ,squareOfSum ,squareOfSumResult;
        sumOfSquares = 0;
        squareOfSum = 0;

        for (i = 1 ;i < 101 ;i = i + 1){
            sumOfSquares = sumOfSquares + (i * i);
        }

        for (i = 1 ;i < 101 ;i = i + 1){
            squareOfSum = squareOfSum + i;
        }
        squareOfSumResult = squareOfSum * squareOfSum;

        if (sumOfSquares > squareOfSumResult){
            System.out.println(sumOfSquares - squareOfSumResult);
        }
        else {
            System.out.println(squareOfSumResult - sumOfSquares);
        }
    }
}
