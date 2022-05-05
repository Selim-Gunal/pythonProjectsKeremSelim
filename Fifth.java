public class Fifth {
    public static void main(String[] args){
        int i ,x ,y ,z ,cachePrimeNumber ,cacheBase;
        boolean primeNumberTest;
        for (i = 2 ;i < 21 ;i = i = 1){
            primeNumberTest = false;
            cachePrimeNumber = i;
            for (x = 2 ;x < 21 ;x = x + 1){
                if (i % x == 0){
                    primeNumberTest = true;
                    break;
                }
            }
            if (primeNumberTest == false){
                for (y = 4 ;y >= 0 ;y = y - 1){
                    for (z = 0 ;z < y ;z = z + 1){

                    }
                }
            }
        }
    }
}
