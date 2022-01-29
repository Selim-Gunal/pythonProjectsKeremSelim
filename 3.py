#The prime factors of 13195 are 5, 7, 13 and 29.
#What is the largest prime factor of the number 600851475143 ?

our_number = 600851475143
numbers_can_devide = []
result = 0

#We need to find the numbers can devide to our number
for i in range (2 ,600851475143 // 70 + 1):
    if(600851475143 % i == 0):
        numbers_can_devide.append(i)

#We will reverse the numbers because the question wants us the biggest number
numbers_can_devide.reverse()
for i in range (0 ,len(numbers_can_devide)):
    for x in range (2 ,numbers_can_devide[i]):
        if (numbers_can_devide[i] % x == 0):
            break
        if (x == numbers_can_devide[i] - 1):
            result = numbers_can_devide[i]
    if(result > 0):
        break
print(result)