whatNumber = 2
primeNumbersList = []
indicator = 0

while (whatNumber < 2000000):
    for x in range (2 ,whatNumber):
        indicator = 0
        if (whatNumber % x == 0):
            indicator = 1
            break
    if (indicator == 0):
        primeNumbersList.append(whatNumber)
    whatNumber = whatNumber + 1
print(primeNumbersList)
#The result is