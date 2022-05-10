#zadanie 1 metoda cramera i eliminacji Gaussa
#2x1+x2+4x3=11
#4x1+3x2+6x3=23
#3x1+6x2+8x3=32
#


import numpy as np
def Cramer_method():
    A = np.array([ [2.0, 1.0, 4.0], [4.0, 3.0, 6.0], [3.0, 6.0, 8.0] ])
    b = np.array([ [11.0], [23.0], [32.0] ])
    x = np.array( [[0.0], [0.0], [0.0]] )
    detA = np.linalg.det(A)
    if detA == 0:
        print("Brak rozwiazan")
    else:
        for k in range(0, len(b)):
            M = A.copy()
            M[:, k] = b.squeeze().copy()
            x[k] = np.linalg.det(M)/detA
            
            
    return print('wynik w metodzie Cramera:\n ',x,end="") 
Cramer_method()
print()



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