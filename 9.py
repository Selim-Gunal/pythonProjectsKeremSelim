import math

pythagorean_triplet_numbers = []
indicator = 0

i = 1

while (True):
    for x in range (i + 1 ,1001):
        pythagorean_triplet = i ** 2 + x ** 2
        pythagorean_triplet = math.sqrt(pythagorean_triplet)
        if (pythagorean_triplet % 1 == 0):
            pythagorean_triplet_numbers.append(i)
            pythagorean_triplet_numbers.append(x)
            pythagorean_triplet_numbers.append(pythagorean_triplet)
        if (i + x + pythagorean_triplet == 1000):
            indicator = 1
            break
    i = i + 1
    print(pythagorean_triplet_numbers)
    if (indicator == 1):
        break
pythagorean_triplet_numbers.reverse()
print(pythagorean_triplet_numbers)
print(int(pythagorean_triplet_numbers[0] * pythagorean_triplet_numbers[1] * pythagorean_triplet_numbers[2]))