N,M=map(int,input().split())

arr=[0]*(N+1)

for i in range (N+1):
    arr[i]=i

for i in range (M):
    a,b=map(int,input().split())

    temp=arr[a]
    arr[a]=arr[b]
    arr[b]=temp

for i in range (1,N+1):
    print(arr[i],end=" ")