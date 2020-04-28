import numpy as np
import random

# code demonstrating cache misses
# sequential iteration is much faster because of cache optimization
# random access to array is slow b/c we have to make trips to main memory far more often

NUM = 10000
TRIALS = 10000000 / NUM
a = np.ones(NUM)

sum1 = 0
sum2 = 0

# iterate thru the array sequentially
print('sum1 start')

for i in range(TRIALS):
  for j in range(NUM):
    sum1 += a[j]

print(sum1)


# access the array randomly
print('sum2 start')

for i in range(NUM * TRIALS):
  sum2 += a[random.randint(0,NUM-1)]

print(sum2)
