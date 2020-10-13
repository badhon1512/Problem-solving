import math
t=int(input())
for i in range(t):
  a=input()
  a=int(a)
  b=input()
  b=int(b)
  diff=abs(a-b)
  move=math.ceil(diff/10)
  print(move)