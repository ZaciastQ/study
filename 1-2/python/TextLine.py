class TextLine():
   def __init__(self,dane):
        self.__dane=dane
        self.__liczbalinii=0
        self.__liczbabialych=0
        self.__liczbanum=0
        self.__liczbaliter=0
        self.__liczbamal=0
        self.__liczbaduz=0
        
        for linia in self.__dane:
            self.__liczbalinii +=1
            for i in linia:
                linia1=i.replace(" ","")
                linia1=i.replace("\n","")
                if i.isspace():
                    self.__liczbabialych+=1
                if linia1.isalpha():
                    self.__liczbaliter+=1
                if linia1.isdigit():
                    self.__liczbanum+=1
                if linia1.islower():
                    self.__liczbamal+=1
                if linia1.isupper():
                    self.__liczbaduz+=1  
    #definicje metod 
   def zwroclinie(self):
       for linia in self.__dane:
           print("zwracam linie: ",linia)
   def zwroc_liczbebial(self):
        return self.__liczbabialych
   def zwroc_liczbanum(self):
        return self.__liczbanum
   def zwroc_liczbaliter(self):
        return self.__liczbaliter
   def zwroc_liczbamal(self):
        return self.__liczbamal
   def zwroc_liczbaduz(self):
        return self.__liczbaduz
    
   def pokaz_wszystko(self):
        print("liczba linii: ",self.__liczbalinii)
        print("liczba bialych: ",self.__liczbabialych)
        print("liczba numerow ",self.__liczbanum)
        print("liczba liter: ",self.__liczbaliter)
        print("liczba liter malych: ",self.__liczbamal)
        print("liczba liter wielkich: ",self.__liczbaduz)



if __name__ == "__main__":
    plik=open("text.txt","r")
    lista=[]
    for linia in plik:
        lista.append(linia)
    #utworzenie obiektu klasy
    Obj1 = TextLine(lista)
    Obj1.pokaz_wszystko()
    Obj1.zwroclinie()