#Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
#1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
#By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

x = 1
y = 2
z = 0
u = 0
sum_of_numbers_that_can_devide_two = 0

#This while loop will give us a chance to get our numbers smaller than 4 million
while (x < 4000000 and y < 4000000 and z < 4000000 and u < 4000000):
    z = x + y
    if (z % 2 == 0):
        sum_of_numbers_that_can_devide_two = sum_of_numbers_that_can_devide_two + z
    u = y + z
    if (u % 2 == 0):
        sum_of_numbers_that_can_devide_two = sum_of_numbers_that_can_devide_two + u
    x = z + u
    if (x % 2 == 0):
        sum_of_numbers_that_can_devide_two = sum_of_numbers_that_can_devide_two + x
    y = u + x
    if (y % 2 == 0):
        sum_of_numbers_that_can_devide_two = sum_of_numbers_that_can_devide_two + y

#We've added two because at first we've started with 3 three
print(sum_of_numbers_that_can_devide_two + 2)
#The result is 4613732