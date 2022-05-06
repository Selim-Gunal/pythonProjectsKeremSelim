public class Forth {
    public static void main(String[] args){
        //I assign the variables
        int i ,x ,multiply ,biggest;
        String convertedToStr ,reversed;
        StringBuilder cacheReverse;
        biggest = 1;

        for (i = 999 ;i > 99 ;i = i - 1){
            for (x = i ;x > 99 ;x = x - 1){
                multiply = i * x;
                //I convert integer to string
                convertedToStr = String.valueOf(multiply);
                //I covert convertedToStr to StringBuilder and then assign to cacheReverse
                cacheReverse = new StringBuilder(convertedToStr);
                //Here I reverse the cacheReverse
                cacheReverse.reverse();
                //And then I convert back to string then assing to reversed
                reversed = new String(cacheReverse);

                //Here I questioned why we can not do covertedToStr == reversed
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
//The expected result if 906609
