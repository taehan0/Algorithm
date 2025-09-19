N,M=map(int,input().split())

arr=[0]*N

for i in range(M):
    front,end,num=map(int,input().split())

    for j in range(front-1,end):
        arr[j]=num



for i in range(N):
    print(arr[i],end=" ")

