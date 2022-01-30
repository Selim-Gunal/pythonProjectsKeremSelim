#2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
#What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

sum_of_numbers = 1
prime_numbers = []
for_test = 0

#This part of code will take the prime numbers below 20 and it will it to our list
for i in range (2 ,21):
    for x in range (2 ,21):
        for_test = 0
        if (i == x):
            x = x + 1
        if (i % x == 0):
            for_test = -1
            break
    if (for_test == 0):
        prime_numbers.append(i)

#The exact meaning is in the 5.txt
for i in range (0 ,len(prime_numbers)):
    for x in range (4 ,0 ,-1):
        if (prime_numbers[i] ** x < 21):
            #We need all of them to multiply
            sum_of_numbers = sum_of_numbers * prime_numbers[i] ** x
            #Here I did a break because i want only 2**4 if I don't use break it will do 2**4 * 2**3 * 2**2 * 2**1
            break
print(sum_of_numbers)
