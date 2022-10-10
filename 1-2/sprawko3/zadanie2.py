#zadanie2
#10 x1+40 x2+70 x3=300
#20 x1+50 x2+80 x3=360
#30 x1+60 x2+80 x3=390



import numpy as np
def Cramer_method():
    A = np.array([ [10.0, 40.0, 70.0], [20., 50.0, 80.0], [30.0, 60.0, 80.0] ])
    b = np.array([ [300.0], [360.0], [390.0] ])
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