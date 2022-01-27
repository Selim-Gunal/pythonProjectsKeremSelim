the_number_s_text = open("./3/numbers.txt","w")

our_number = 600851475143

for i in range (3000000001 ,6000000000):
    if (our_number % i == 0):
        the_number_s_text.write(str(i) + " ")

the_number_s_text.close()