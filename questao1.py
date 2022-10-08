temp = 0
a = 1
b = 7
c = 2
d = 9

n = input('insira o numero da serie ')

arr = [a, b, c, d]
arr

for x in range(0, 100):
  temp = a + b
  arr.append(temp)
  a = b
  b = c
  c = d
  d = temp

arr
