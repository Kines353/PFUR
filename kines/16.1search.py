print ('Введите кол-во столбцов')
n=int(input())
print ('Введите кол-во строк')
m=int(input())
print ('Введите искомое число')
val=int(input())
print ('Введите матрицу')
mas=[[int(i) for i in input().split()]for j in range(n)]

for k,i in enumerate(mas):
    try: 
        i.index(val)
        print(k,i.index(val))
    except:
        continue
'''example: 2
            3 
            4
            1 2 3
            4 5 6'''
