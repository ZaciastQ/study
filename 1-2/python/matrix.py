import random
def create(a):
    return [[0 for i in range(a)]for j in range(a)]                       
def fill(a,b,c):
    return [[random.randint(b,c)for i in range(a)]for j in range(a)]
def paz(tab,a):
    suma = 0
    for i in range(a):
            elem = tab[i][i]
            if elem % 2 == 0:
                suma+=elem
                
    return suma
        
def wypisz(a,tab):
    for i in range(a):
        print(tab[i])

#iloczyn robi sie tak samo jak paz(tab,a) z *

def niepaz(tab,a):
    iloczyn=0
    for i in range(a):
        elem=tab[i][a-1-i]
        if elem % 2 != 0 & i==1:
            elem2=tab[i][i]
            iloraz=elem2/elem ##### ???????????????
            return iloraz
        else:
            return None
def main():
    a = 1
    while a < 4 or a > 8:
        a = int(input("Podaj wielkosc macierzy: "))
        tab = create(a)
        wypisz(a,tab)
        b = int(input("Podaj poczatek przedzialu: "))
        c = int(input("Podaj koniec przedzialu"))
        tab = fill(a,b,c)
        wypisz(a,tab)
        suma = paz(tab,a)
        print("Suma parzystych elementow na glownej przekatnej wynosi: ", suma)
        iloraz = niepaz(tab,a)
        print("Iloraz nieparzystych elementow lezacych na przeciwnej przekatnej: ", iloraz)
main()