#zadanie 3 
import numpy as np
def Gausse_method():
    A = np.array([ [2, 1, 4], [4, 3, 6], [3, 6, 8] ])
    b = np.array([ [11], [23], [32] ])
    x = np.array( [[0], [0], [0]] )
    n = len(b)
    for k in range(0, n-1):
        for i in range(k+1, n):
            L = A[i,k] / A[k,k]
            for j in range(k+1, n):
                A[i,j] = A[i,j] - L * A[k,j]
            b[i] = b[i] - L * b[k]
    x = b.copy()
    for i in range(n-1, -1, -1):
        R = 0.0
        for j in range(i+1, n):
            R = R + A[i,j] * x[j]
        x[i] = (x[i] - R) / A[i,i]
    return print('wynik w metodzie eliminacji Gaussa:\n ',x,end="")
Gausse_method()
print() 