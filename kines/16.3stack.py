class Stack:
    
     def __init__(self):
         self.items = []

     def push(self, item):
         self.items.append(item)

     def pop(self):
         return self.items.pop()
        
     def min_element(self):
         return min_(self.items)
s=Stack()

def min_(arr):
        m=arr[0]
        for i in arr:
            if i<m:
                m=i
        return m 

for i in range(30):
    s.push(i)
print('Элементы стека:',s.items)
for i in range(12):
    s.pop()
print('Элементы стека после выполнения метода pop:',s.items)
print('Минимальный элемент =',s.min_element())
