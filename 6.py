#The sum of the squares of the first ten natural numbers is,
#The square of the sum of the first ten natural numbers is,
#Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is.
#Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

sum_square = 0
square_sum = 0

#Here we will find the sum of the squares of the first one hundred natural numbers
for i in range (1 ,101):
    sum_square = sum_square + i ** 2
print(sum_square)

