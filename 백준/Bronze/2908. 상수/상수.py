A,B=map(str,input().split())

A_list=list(A)
B_list=list(B)

for i in range (len(A)//2):
    temp=A_list[i]
    A_list[i]=A_list[-i-1]
    A_list[-i-1]=temp

for i in range(len(A)//2):
    temp=B_list[i]
    B_list[i]=B_list[-i-1]
    B_list[-i-1]=temp

A=int("".join(map(str,A_list)))
B=int("".join(map(str,B_list)))

if A>B:
    print(A)

else:
    print(B)


