import numpy as np
import matplotlib.pyplot as plt
from numpy.linalg import solve, det

#tablica x
x = np.array([0.0, 1.0, 2.0, 3.0, 4.0, 5.0])[:, None]
#tablica y
y = np.array([2.1, 7.7, 13.6, 27.2, 40.9, 61.1])[:, None]

#tworzymy wielomian dołączając kolejne potegi
Z1 = np.concatenate((x**0, x**1, x**2), axis = 1)

ZT1 = np.transpose(Z1)
print(Z1)
print(ZT1)
print(" ")
print(ZT1.dot(Z1))
print()
print(ZT1.dot(y))

#rozwiązanie dla a,b w macierzowej postaci iloczynu skalarnego(liczenie wartosci macierzy wielomianu)
#ya1=a0+a1*x^1+a2*x^2


a1 = solve( ZT1.dot(Z1), ZT1.dot(y) )

print("Rozwiazanie dla pierwszego wielomianu = %s " % a1)

Sr = np.sum( (y - np.dot(Z1, a1))**2 )
print("Kwadrat residuów = %s" % Sr)

r2 = 1.0-Sr/np.sum((y-np.mean(y))**2)
print("Wspolczynnik determinacji = %s" % r2)

syx = np.sqrt(Sr/(len(x)-len(a1)))
print("Blad standardowy = %s" % syx)


plt.title ('Wykres pierwszy ')
plt.plot(x, y, 'b.')
plt.plot(x**0 + x**1 + x**2, 'r')
plt.xlabel('x')
plt.ylabel('y')
plt.show()

print("\n")


Z2 = np.concatenate((x**0, x**1), axis = 1)
ZT2 = np.transpose(Z2)
#ya2=a0+a1*x^1
a2 = solve( ZT2.dot(Z2), ZT2.dot(y) )

print("Rozwiazanie dla drugiego wielomianu = %s " % a2)

Sr = np.sum( (y - np.dot(Z2, a2))**2 )
print("Kwadrat residuów = %s" % Sr)

r2 = 1.0-Sr/np.sum((y-np.mean(y))**2)
print("Wspolczynnik determinacji = %s" % r2)

syx = np.sqrt(Sr/(len(x)-len(a2)))
print("Blad standardowy = %s" % syx)

plt.title ('Wykres drugi ')
plt.plot(x, y, 'b.')
plt.plot(x**0 + x**1, 'r')
plt.xlabel('x')
plt.ylabel('y')
plt.show()


plt.title ('Wykres x, y')
plt.plot(x, y, 'b.')
plt.xlabel('x')
plt.ylabel('y')
plt.show()


