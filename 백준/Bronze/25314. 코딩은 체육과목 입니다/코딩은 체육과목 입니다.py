N=int(input())

numOfLong=N//4

if N%4!=0:
    numOfLong+=1

for i in range(numOfLong):
    print("long",end=" ") 
    
print("int")
