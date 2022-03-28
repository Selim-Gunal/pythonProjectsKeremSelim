#The sum of the squares of the first ten natural numbers is,
#The square of the sum of the first ten natural numbers is,
#Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is.
#Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

sumOfSquares = 0
squareOfSum = 0
forSquareOfSum = 0

#Here we will find the sum of the squares of the first one hundred natural numbers
for i in range (1 ,101):
    sumOfSquares = sumOfSquares + i ** 2

#Here i sum all the numbers below 101
for i in range (1 ,101):
    forSquareOfSum = forSquareOfSum + i
#And then I get the square of it
squareOfSum = forSquareOfSum ** 2

#Lastly I sumtracted the smaller one from the bigger one
if (sumOfSquares > squareOfSum):
    print(sumOfSquares - squareOfSum)
else:
    print(squareOfSum - sumOfSquares)
#The result is 25164150