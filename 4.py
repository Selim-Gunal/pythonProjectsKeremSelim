#A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
#Find the largest palindrome made from the product of two 3-digit numbers.

numbers_list = []

for i in range (999 ,100 ,-1):
    for x in range (998 ,99 ,-1):
        straight_number = str(i * x)
        reverse_number = straight_number[::-1]
        #If they are the same it will add numbers to our list 
        if (straight_number == reverse_number):
            numbers_list.append(int(straight_number))
#In here i reversed the numbers so it will be bigger to smaller            
numbers_list.sort(reverse=True)
print(numbers_list[0])