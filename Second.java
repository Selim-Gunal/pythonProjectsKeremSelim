public class Second {

    public static void main(String[] args) {
        int sum;
        int a ,b ;
        a = 1;
        b = 2;
        sum = 0;

        while (a <= 4000000 & b <= 4000000){
            if (a % 2 == 0){
                sum = sum + a;
            }
            if (b % 2 == 0){
                sum = sum + b;
            }
            a = a + b;
            b = a + b;
        }

        System.out.println(sum);
    }
}
