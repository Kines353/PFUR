n=int(input())
cnt=0
for i in range(1,n+1):
    if '2' in str(i):
        for k in str(i):
            if k=='2':
                cnt+=1
        print(i)
print('Количество цифр 2 в числе:',cnt)
''' example input : 25'''
