#I made this code because python is a single threaded program moveover if i this code only a single python file
#It runs about 40 minutes
#Think about a big work and i cut into a smaller pieces like in main1.py it tested 2 to 3000000000 if can it devide 600851475143


#You must start code with this code then main1   main2   main3
#The last thing is wait

import time

start_count = time.perf_counter()
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

finish_count = time.perf_counter()
print("Finished in" ,round(finish_count - start_count,2),"seconds")