N,M=map(int,input().split())

bucket=[0]*(N+1)
for i in range(N+1):
    bucket[i]=i

for i in range(M):
    front,end=map(int,input().split())
    k=end
    for j in range(front,front+((end-front+1)//2)):
        temp=bucket[j]
        bucket[j]=bucket[k]
        bucket[k]=temp
        k-=1


for i in range(1,N+1):
    print(bucket[i],end=" ")
