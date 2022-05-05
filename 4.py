#A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
#Find the largest palindrome made from the product of two 3-digit numbers.

#Our reverseable numbers will be stored in here
listOfNumbers = []

for i in range (999 ,99 ,-1):
    for x in range (i ,99 ,-1):
        #We changed it to the string because the reverse for strings is much more easier
        straightNumber = str(i * x)
        reverseNumber = straightNumber[::-1]
        #If they are the same it will add numbers to our list
        if (straightNumber == reverseNumber):
            #Here we turn back to integer
            listOfNumbers.append(int(straightNumber))
#In here i reversed the list so it will be bigger to smaller
listOfNumbers.sort(reverse=True)
print(listOfNumbers[0])
#The result is 906609