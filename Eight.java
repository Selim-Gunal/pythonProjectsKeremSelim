import java.math.BigInteger;

public class Eight {
    public static void main(String[] args){
        //Here I make variables long beacuse it has byte limitations
        long i ,x ,z ,t ,biggest ,cacheThirtheenInt ,multiply ,nowNumber ,zero;
        String beforeAllNumbers ,afterAllNumbers ,cacheThirtheen;
        biggest = 0;
        beforeAllNumbers = "73167176531330624919225119674426574742355349194934\n" +
                "96983520312774506326239578318016984801869478851843\n" +
                "85861560789112949495459501737958331952853208805511\n" +
                "12540698747158523863050715693290963295227443043557\n" +
                "66896648950445244523161731856403098711121722383113\n" +
                "62229893423380308135336276614282806444486645238749\n" +
                "30358907296290491560440772390713810515859307960866\n" +
                "70172427121883998797908792274921901699720888093776\n" +
                "65727333001053367881220235421809751254540594752243\n" +
                "52584907711670556013604839586446706324415722155397\n" +
                "53697817977846174064955149290862569321978468622482\n" +
                "83972241375657056057490261407972968652414535100474\n" +
                "82166370484403199890008895243450658541227588666881\n" +
                "16427171479924442928230863465674813919123162824586\n" +
                "17866458359124566529476545682848912883142607690042\n" +
                "24219022671055626321111109370544217506941658960408\n" +
                "07198403850962455444362981230987879927244284909188\n" +
                "84580156166097919133875499200524063689912560717606\n" +
                "05886116467109405077541002256983155200055935729725\n" +
                "71636269561882670428252483600823257530420752963450";

        //I replace all enters with nothing
        afterAllNumbers = beforeAllNumbers.replace("\n" ,"");

        for (i = 0 ;i < afterAllNumbers.length() - 12 ;i = i + 1){
            //Here I pull the thirtheen number
            cacheThirtheen = afterAllNumbers.substring((int) i, (int) (i + 13));
            //And I converted into integer
            cacheThirtheenInt = Long.parseLong(cacheThirtheen);
            multiply = 1;

            for (z = 13 ;z > 0 ;z = z - 1){
                //This for loop's very simple explanation is (xNumber = (cacheThirtheenInt / zero) % 10)
                zero = 1;

                //For loop zero adds 0 to 1 in order to devide the number
                for (t = 1 ;t < z ;t = t + 1){
                    zero = zero * 10;
                }
                nowNumber = (cacheThirtheenInt / zero) % 10;
                multiply = multiply * nowNumber;
            }
            if (multiply > biggest){
                biggest = multiply;
            }
        }
        System.out.println(biggest);
    }
}
//The result is 23514624000
