import random

int_min = -2147483648  # Replace with your desired minimum
int_max = 2147483647  # Replace with your desired maximum

random_ints = ' '.join(map(str, random.sample(range(int_min, int_max + 1), 20)))
print(random_ints)
