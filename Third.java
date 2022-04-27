//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

public class Third {
    public static void main(String[] args){
        long i ,x ;
        boolean indicator ,enterToIf;

        //The "L" represents type long because if we didn't assign "L" it means it is a 32-Bit integer after we add "L" it becomes 64-Bit integer
        for (i = 2 ;i < 600851475143L ;i = i + 1){
            indicator = false;
            enterToIf = false;

            if (600851475143L % i == 0){
                enterToIf = true;
                for (x = 2 ;x < i ;x = x + 1){
                    if (i % x == 0){
                        indicator = true;
                        break;
                    }
                }
            }
            if (indicator == false & enterToIf){
                System.out.println(i);
            }
        }
    }
}
//The result is 6857
