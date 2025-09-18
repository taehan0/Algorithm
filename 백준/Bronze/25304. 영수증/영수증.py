totalPay=int(input())
numberOfProduct=int(input())
sum=0

for i in range(numberOfProduct):
    a,b=map(int,input().split())
    sum+=a*b

if totalPay==sum:
    print("Yes")

else:
    print("No")