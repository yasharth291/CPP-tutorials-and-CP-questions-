# cook your dish here
import numpy as np
test = int(input()) 
while(test>0):
    test = test-1
    num =int(input()) 
    arr = np.array([int(x) for x in input().split()])
    arr = arr% 4
    string = ""
    for i in arr:
        if(i%2 == 0):
            string += str(i)
        else:
            string += "1"
            
    string= string.split('0')
    answer = int((num * (num+1) )/2)
    
    for i in string:
        string1 = i.split('2')
        arr = []
        for i in string1:
            arr+=[len(i)]
        for i in range(len(arr)-1):
            answer -= (arr[i]+1)*(arr[i+1]+1)
    print(answer)
