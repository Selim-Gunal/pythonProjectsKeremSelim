public class Forth {
    public static void main(String[] args){
        int i ,x ,multiply ,biggest;
        String convertedToStr ,reversed;
        StringBuilder cacheReverse;
        biggest = 1;

        for (i = 999 ;i > 99 ;i = i - 1){
            for (x = i ;x > 99 ;x = x - 1){
                multiply = i * x;
                convertedToStr = String.valueOf(multiply);
                cacheReverse = new StringBuilder(convertedToStr);
                cacheReverse.reverse();
                reversed = new String(cacheReverse);

                if (convertedToStr.equals(reversed)){
                   if (multiply > biggest){
                       biggest = multiply;
                   }
                }
            }
        }
        System.out.println(biggest);
    }
}
