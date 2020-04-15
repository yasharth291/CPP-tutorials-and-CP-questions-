import numpy as np
mod = 998244353
def inverse(x, y, m) :     
    if(y == 0) : 
        return 1
    p = inverse(x, y//2, m) % m 
    p = (p*p)%m 
    if(y%2 == 0) : 
        return p  
    else :  
        return ((x * p) % m)
      
def popfun(stack,n):
  for i in range(n):
    stack.pop()
  return stack

def fun1(string):
    stack = [] 
    output = ''
    for ch in string:
        if(ch == '('):
          stack.append('(')
        elif(ch == '#'):
          output += ch 
        elif (ch == ')'):
          while (stack and stack[-1] != '('):
              output += stack.pop()
          stack.pop()
        else:
          while (stack and stack[-1] != '('):
              output += stack.pop()
          stack.append(ch)
    while(stack):
        output += stack.pop()
    return output

def fun2(a):
    global mod
    stack = []
    p = inverse(4,mod-2,mod)
    l = np.array([[p,p,p,p]],dtype=int)
    for i in a:
        if(i == '#'):
            stack.append(l)
        elif(i == '&'):
            a = np.matmul(stack[-1].T,stack[-2])
            mat = np.full((1,4),1,dtype=int)
            mat[0][0] = (np.sum(a[0])+np.sum(a.T[0])-a[0][0]+a[2][3]+a[3][2])%mod
            mat[0][1] = (a[1][1])%mod
            mat[0][2] = (a[1][2]+a[2][1]+a[2][2])%mod
            mat[0][3] = (a[1][3]+a[3][1]+a[3][3])%mod
            popfun(stack,2)
            stack.append(mat)
        elif(i == '|'):
            a = np.matmul(stack[-1].T,stack[-2])
            mat = np.full((1,4),1,dtype=int)
            mat[0][0] = (a[0][0])%mod
            mat[0][1] = (np.sum(a[1])+np.sum(a.T[1])-a[1][1]+a[2][3]+a[3][2])%mod
            mat[0][2] = (a[0][2]+a[2][0]+a[2][2])%mod
            mat[0][3] = (a[0][3]+a[3][0]+a[3][3])%mod
            popfun(stack,2)
            stack.append(mat)
        elif(i == '^'):
            a = np.matmul(stack[-1].T,stack[-2])
            mat = np.full((1,4),1,dtype=int)
            mat[0][0] = (a[0][0]+a[1][1]+a[2][2]+a[3][3])%mod
            mat[0][1] = (a[0][1]+a[1][0]+a[2][3]+a[3][2])%mod
            mat[0][2] = (a[0][2]+a[2][0]+a[1][3]+a[3][1])%mod
            mat[0][3] = (a[0][3]+a[3][0]+a[1][2]+a[2][1])%mod
            popfun(stack,2)
            stack.append(mat)
    return stack[0][0]

def main():
  t = input()
  t = int(t)
  for i in range(t):
      string = input()
      probs = fun1(string)
      #print(probs)
      probs = fun2(probs)
      length = probs.shape[0]-1
      for i in range(length):
          print(probs[i],end=' ')
      print(probs[-1])

main()
