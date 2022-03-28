#By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
#What is the 10 001st prime number?

#In this code i don't want to enter number i want it to code do this job.
#Like if i know the 10003 prime number i can do a scan lower from that number

whatNumber = 2
primeNumbersList = []
indicator = 0

#I used while loop because it's better when we don't know the exact finish
#This while loop changes the prime number
while (len(primeNumbersList) < 10001):
    #This for loop is for testing normal numbers for the numbers in while loop
    for x in range (2 ,whatNumber):
        indicator = 0
           #Thin about 13 it is a prime number if 13 mod 5 is 0 it will enter this if part
        if (whatNumber % x == 0):
            #This is like an indicator
            indicator = 1
            break
    if (indicator == 0):
        primeNumbersList.append(whatNumber)
    whatNumber = whatNumber + 1
#This will reverse the prime numbers in the list
primeNumbersList.sort(reverse=True)
print(primeNumbersList[0])
#The result is 104747