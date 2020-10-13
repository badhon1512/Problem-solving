t=int(input())

for i in range(t):
  c=0
  n=int(input())
  while n>0:
   
    if n%2==0:
      c+=n/2
      n/=2
    else:
      c+=1
      n-=1
    if n%2==0:
      n/=2
    else:
      n-=1
  print(int(c))
    

