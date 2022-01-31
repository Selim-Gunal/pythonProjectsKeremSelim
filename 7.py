#By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
#What is the 10 001st prime number?

#In this code i don't want to enter number i want it to code do this job.
#Like if i know the 10003 prime number i can do a scan lower from that number

which_prime = 2
prime_numbers = []
for_test = 0

#I used while loop because it's better when we don't know the exact finish
#This while loop changes the prime number
while (len(prime_numbers) < 10001):
    #This for loop is for testing normal numbers for the numbers in while loop
    for x in range (2 ,which_prime):
        for_test = 0
           #Thin about 13 it is a prime number if 13 mod 5 is 0 it will enter this if part
        if (which_prime % x == 0):
            #This is like an indicator
            for_test = 1
            break
    if (for_test == 0):
        prime_numbers.append(which_prime)
    which_prime = which_prime + 1
#This will reverse the prime numbers in the list
prime_numbers.sort(reverse=True)
print(prime_numbers[0])