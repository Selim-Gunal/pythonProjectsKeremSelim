#A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
#a2 + b2 = c2
#For example, 32 + 42 = 9 + 16 = 25 = 52.
#There exists exactly one Pythagorean triplet for which a + b + c = 1000.
#Find the product a.b.c.

#I inported math library because we are going to take square root
import math

pythagorean_triplet_numbers = []
indicator = 0
a = 1

#This while loop is going to run until we break it this will allow us for if all the number equals for 1000
while (True):
    #Here i didn't make a while loop beacuse we know the last number
    for b in range (a + 1 ,1001):
        pythagorean_triplet = a ** 2 + b ** 2
        #the math.sqrt will allow us for take square root of pythagorean triplet number and then if it is a square of a number
        pythagorean_triplet = math.sqrt(pythagorean_triplet)
        #We are going to test if the number is a square of a number
        if (pythagorean_triplet % 1 == 0):
            pythagorean_triplet_numbers.append(a)
            pythagorean_triplet_numbers.append(b)
            pythagorean_triplet_numbers.append(pythagorean_triplet)
        if (a + b + pythagorean_triplet == 1000):
            indicator = 1
            break
    a = a + 1
    if (indicator == 1):
        break
pythagorean_triplet_numbers.reverse()
print(int(pythagorean_triplet_numbers[0] * pythagorean_triplet_numbers[1] * pythagorean_triplet_numbers[2]))