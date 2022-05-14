public class Seventh {
    public static void main(String[] args){
        int i,x ,countPrime;
        boolean isPrime;
        i = 1;
        for (countPrime = 0 ;countPrime < 10001;){
            i = i + 1;
            isPrime = false;
            for (x = 2 ;x < i ;x = x + 1){
                if (i % x == 0){
                    isPrime = true;
                    break;
                }
            }
            if (isPrime == false){
                countPrime = countPrime + 1;
            }
        }
        System.out.println(i);
    }
}
//The result is 104743