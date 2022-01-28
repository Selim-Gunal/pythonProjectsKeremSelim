import time
start_count = time.perf_counter()

the_number_s_text = open("./3/numbers.txt","w")

our_number = 600851475143

for i in range (2 ,3000000000):
    if (our_number % i == 0):
        the_number_s_text.write(str(i) + " ")

the_number_s_text.close()

finish_count = time.perf_counter()
print("Finished in" ,round(finish_count - start_count,2),"seconds")