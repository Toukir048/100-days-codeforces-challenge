import sys
n, m, a, b = map(int, sys.stdin.readline().split())

option1 = n * a
option2 = (n // m) * b + (n % m) * a
option3 = ((n + m - 1) // m) * b

print(min(option1, option2, option3))