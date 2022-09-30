a = int(input())
b = input() 

x = 0
c = reversed(list(map(int , str(b))))
sum = 0
for i in c:
    n =a*i
    x+=1
    print(n , sep='\n')
    sum+=n

print(a*int(b) , sep='\n')