//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

public class First {
    public static void main(String[] args) {
        int i, sum;
        sum = 0;

        for (i = 1 ;i < 1000 ;i = i + 1){
            if (i % 3 == 0){
                sum = sum + i;
            }

            if (i % 5 == 0) {
                sum = sum + i;
                if (i % 3 == 0) {
                    sum = sum - i;
                }
            }
        }
        System.out.println(sum);
    }
}
//The expected result is 233168
