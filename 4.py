numbers_list = []

for i in range (999 ,100 ,-1):
    for x in range (998 ,99 ,-1):
        straight_number = str(i * x)
        reverse_number = straight_number[::-1]
        if (straight_number == reverse_number):
            numbers_list.append(int(straight_number))
numbers_list.sort(reverse=True)
print(numbers_list[0])