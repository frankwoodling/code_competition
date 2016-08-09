# HackerRank Practice Problems
# Algorithms > Dynamic Programming > Fibonacci Modified

data = input()
t1, t2, n = data.split()

t1 = int(t1)
t2 = int(t2)
n = int(n)

a = [t1, t2]
for i in range(0, n-1):
    a.append(a[i]+a[i+1]**2)

print(a[n-1])

