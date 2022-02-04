which_prime = 2
prime_numbers = []
for_test = 0

while (which_prime < 2000000):
    for x in range (2 ,which_prime):
        for_test = 0
        if (which_prime % x == 0):
            for_test = 1
            break
    if (for_test == 0):
        prime_numbers.append(which_prime)
    which_prime = which_prime + 1
print(prime_numbers)