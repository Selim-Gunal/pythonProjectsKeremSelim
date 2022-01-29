#I made this code because python is a single threaded program moveover if i run it in a single python file
#it runs about 40 minutes


#You must start code with this code then main1   main2   main3
#The last thing is wait

import time

time.sleep(780)

#My variables
the_number_s_text = open("numbers.txt" ,"r").readline()
numbers_list = []
for_completing = ""
result = 0

for i in range (0 ,len(the_number_s_text)):
    if (the_number_s_text[i] == " "):
        numbers_list.append(int(for_completing))
        for_completing = ""
    else:
        for_completing = for_completing + the_number_s_text[i]
numbers_list.sort(reverse=True)


for i in range (0 ,len(numbers_list)):
    for x in range (2 ,numbers_list[i]):
        if (numbers_list[i] % x == 0):
            break
        if (x == numbers_list[i] - 1):
            result = numbers_list[i]
    if (result > 0):
        break
print(result)