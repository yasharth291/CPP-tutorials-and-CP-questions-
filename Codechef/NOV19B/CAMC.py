t = int(input())
def minDiff1(a,n,m,w):
    co = [0]*m
    done = [False]*m
    doall = [True]*m
    ca = a[n-1] - a[0]
    i=0
    j = 0
    while i<(n):
        done[w[i]] = True
        co[w[i]] +=1
        if w[i] == w[j] and i!=j:
            co[w[j]] -=1
            j+=1
            
        if done == doall:
            while(co[w[j]] > 1):
                co[w[j]] -= 1
                j+=1
            ca = min(a[i] - a[j], ca)
            co[w[j]] -=1
            if co[w[j]] == 0:
                done[w[j]] = False
            j+=1
        
        i+=1
    print(ca)    
for i in range(t):
    n, m = input().split()
    n = int(n)
    m = int(m)
    a = [int(i) for i in input().split()]
    
    sin = [j[0] for j in sorted(enumerate(a), key=lambda x:x[1])]
    w = [0]*n
    for j in range(n):
        w[j] = sin[j]%m
    a.sort()
    ans = 9147483647
    chk = [int(i) for i in range(m)]
    if m==n:
        print(a[n-1]-a[0])
    minDiff1(a,n,m,w)
