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
