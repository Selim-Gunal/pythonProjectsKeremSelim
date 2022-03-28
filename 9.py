#A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
#a2 + b2 = c2
#For example, 32 + 42 = 9 + 16 = 25 = 52.
#There exists exactly one Pythagorean triplet for which a + b + c = 1000.
#Find the product a.b.c.

#I inported math library because we are going to take square root
import math

tripletNumbersList = []
indicator = 0
a = 1

#This while loop is going to run until we break it this will allow us for if all the number equals for 1000
while (True):
    #Here i didn't make a while loop beacuse we know the last number
    for b in range (a + 1 ,1001):
        tripletNumber = a ** 2 + b ** 2
        #the math.sqrt will allow us for take square root of pythagorean triplet number and then if it is a square of a number
        tripletNumber = math.sqrt(tripletNumber)
        #We are going to test if the number is a square of a number
        if (tripletNumber % 1 == 0):
            tripletNumbersList.append(a)
            tripletNumbersList.append(b)
            tripletNumbersList.append(tripletNumber)
        if (a + b + tripletNumber == 1000):
            indicator = 1
            break
    a = a + 1
    if (indicator == 1):
        break
tripletNumbersList.reverse()
print(int(tripletNumbersList[0] * tripletNumbersList[1] * tripletNumbersList[2]))
#The result is 31875000