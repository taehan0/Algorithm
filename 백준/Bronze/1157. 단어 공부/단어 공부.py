#65~90, 97~122
str=input()

str_list=list(str)
total=[0]*123
count=0

for i in range(len(str_list)):
    if 65<=ord(str_list[i])<=90:
        total[ord(str_list[i])]+=1

    elif 97<=ord(str_list[i])<=122:
        total[ord(str_list[i])-32]+=1

for i in range(len(total)):
    if total[i]==max(total):
        count+=1
        ans=i

if count==1:
    print(chr(ans))
else:
    print("?")
