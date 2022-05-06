//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

public class Fifth {
    public static void main(String[] args){
        //Here I assign the variables
        int i ,x ,y ,z ,cachePrimeNumber ,cacheBase ,multiply;
        boolean primeNumberTest;
        cacheBase = 1;
        cachePrimeNumber = 2;
        multiply = 1;

        //This for loop finds the prime numbers below 21
        for (i = 2 ;i < 21 ;i = i + 1){
            primeNumberTest = true;
            cachePrimeNumber = i;
            for (x = 2 ;x < 21 ;x = x + 1){
                if (i % x == 0 && !(i == x)){
                    primeNumberTest = false;
                    break;
                }
            }

            //I didn't make a list that contains prime numbers below 21 because I didn't know how to make lists so every time upper for loop finds a prime number and puts into a variable
            if (primeNumberTest == true){
                //This for loop hold 3**4 or 3**2
                for (y = 4 ;y >= 0 ;y = y - 1){
                    cacheBase = 1;
                    //This for loop gets the power of the prime number based on the y variable
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
//The result is 232792560