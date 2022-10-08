from heapq import heappop, heappush

heap = []
	
lista = [35, 33, 42, 10, 14, 19, 27, 44, 26, 31]
	
for x in lista:
  heappush(heap, x)

lista.clear()
	
while heap:
  lista.append(heappop(heap))
	    
print(lista)
