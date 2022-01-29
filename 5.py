numbers_list = []

for i in range (1 ,21):
    numbers_list.append(i)

for i in range (2 ,21):
    for x in range (2 ,21):
        if (i == x):
            x = x + 1
        if (x / i % 1 == 0):
            for z in range (0 ,len(numbers_list)):
                if (x == numbers_list[z]):
                    remember_num = z
                    del numbers_list[z]
                    break
print(numbers_list)