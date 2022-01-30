#The sum of the squares of the first ten natural numbers is,
#The square of the sum of the first ten natural numbers is,
#Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is.
#Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

sum_square = 0
square_sum = 0
for_square_sum = 0

#Here we will find the sum of the squares of the first one hundred natural numbers
for i in range (1 ,101):
    sum_square = sum_square + i ** 2

#Here i sum all the numbers below 101
for i in range (1 ,101):
    for_square_sum = for_square_sum + i
#And then I get the square of it
square_sum = for_square_sum ** 2

#Lastly I sumtracted the smaller one from the bigger one
if (sum_square > square_sum):
    print(sum_square - square_sum)
else:print(square_sum - sum_square)