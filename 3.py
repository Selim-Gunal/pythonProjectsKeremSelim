import math
theNumber = 600851475143
numbersCanDevide = []
result = 0

#We need to find the numbers can devide to our number
for i in range (2 ,(math.floor(math.sqrt(theNumber)))):
    if(600851475143 % i == 0):
        numbersCanDevide.append(i)

#We will reverse the numbers because the question wants us the biggest number
numbersCanDevide.reverse()
for i in range (0 ,len(numbersCanDevide)):
    for x in range (2 ,numbersCanDevide[i]):
        if (numbersCanDevide[i] % x == 0):
            break
        if (x == numbersCanDevide[i] - 1):
            result = numbersCanDevide[i]
    if(result > 0):
        break
print(result)
#The result is 6857
