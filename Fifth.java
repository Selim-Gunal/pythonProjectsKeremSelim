public class Fifth {
    public static void main(String[] args){
        int i ,x ,y ,z ,cachePrimeNumber ,cacheBase ,multiply;
        boolean primeNumberTest;
        cacheBase = 1;
        cachePrimeNumber = 2;
        multiply = 1;
        for (i = 2 ;i < 21 ;i = i + 1){
            primeNumberTest = true;
            cachePrimeNumber = i;
            for (x = 2 ;x < 21 ;x = x + 1){
                if (i % x == 0 && !(i == x)){
                    primeNumberTest = false;
                    break;
                }
            }
            if (primeNumberTest == true){
                for (y = 4 ;y >= 0 ;y = y - 1){
                    cacheBase = 1;
                    for (z = 0 ;z < y ;z = z + 1){
                        cacheBase = cacheBase * cachePrimeNumber;
                    }
                    if (cacheBase < 21){
                        multiply = multiply * cacheBase;
                        break;
                    }
                }
            }
        }
        System.out.println(multiply);
    }
}
