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
