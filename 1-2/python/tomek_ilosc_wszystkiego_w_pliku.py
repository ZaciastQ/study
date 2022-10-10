class TextStatisctics():
   def __init__(self,dane):
      #prywatne atrybuty
      self.__dane = dane
      self.__ilosclinii = 0
      self.__iloscslow = 0
      self.__iloscznakow = 0

      for linia in self.__dane:
         self.__ilosclinii += 1 
         slowa = str.split(linia, " ")   #rozdzielamy słowa w tekscie spacją
         print(tuple(slowa))
         for i in slowa: 
            self.__iloscslow += 1
        
         linia1 = linia
         #usuwamy wszelkie niepotrzebne znaki białe i znaki konca linii
         linia1 = linia1.replace(" ","")
         linia1 = linia1.replace("\n","")
         self.__iloscznakow += len(linia1)
         #srednie
      self.__sredniaznakow = self.__iloscznakow/self.__ilosclinii
      self.__sredniaslow = self.__iloscslow/self.__ilosclinii
      
      
      #definicje metod 
   def ilosc_linii(self):
      return self.__ilosclinii
   def ilosc_slow(self):
      return self.__iloscslow
   def ilosc_znakow(self):
      return self.__iloscznakow
   def sredniaznakow(self):
      return self.__sredniaznakow
   def sredniaslow(self):
      return self.__sredniaslow
   def pokaz_wszystko(self):
      print("Ilosc linii: ", self.__ilosclinii)
      print("Ilosc slow: ",self.__iloscslow)
      print("Ilosc znakow: ", self.__iloscznakow)
      print("Ilosc srednia znakow: ",self.__sredniaznakow)
      print("Ilosc srednia slow: ", self.__sredniaslow)




if __name__ == "__main__":

   try:
      plik = open("text.txt","r")
      lista = []
      #zapelnnienie listy danymi z pliku
      for linia in plik:
         lista.append(linia)
      #utwotzernie obiektu klasy
      T1 = TextStatisctics(lista)
      T1.pokaz_wszystko()
   except KeyboardInterrupt:
      print("przerwanie działania programu!!")
   except FileExistsError:
      print("Plik nie istnieje!")
   except IOError:
      print("Błąd szyny danych wejścia/wyjścia")
   except OverflowError:
      print("Przepełnienie stosu zbyt duże liczby!")
   finally:
      print("wszystko przebieglo pomyślnie oto wyniki")



   plik.close()