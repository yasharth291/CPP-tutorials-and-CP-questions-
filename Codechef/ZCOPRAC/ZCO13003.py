n , k = map(int , input().split())
a = list(map(int , input().split()))

a.sort()

c = 0

i = 0 
j = len(a) - 1

while i < j :
	if a[j] + a[i] >= k :

		j -= 1
	else:
		c += j - i 
		i += 1

print(c)
