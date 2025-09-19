word=input()

arr=list(word)

time=0

for i in range(len(arr)):
    num=ord(arr[i])-65

    if num<=14:
        time+=num//3+3

    elif 15<=num<=18:
        time+=8
    elif 19<=num<=21:
        time+=9
    else:
        time+=10


print(time)