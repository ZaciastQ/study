
#include <iostream> //podstawowa biblioteka wejscia wyjscia terminala w cpp
 
using namespace std;  // uzywamy standardowych przestrzen nazw funkcji 
 
// zeby posortować kopcowo poddrzewa zakorzenione w i-tym wezle (najwiekszym)
// ktory jest indeksem tablicy arr[].
// n jest rozmiarem kopca
void heapify(int arr[], int n, int i)
{
   
  // najwiekszy jako korzen
    int najwiekszy = i;
   
  // lewy = 2*i + 1
    int l = 2 * i + 1;
   
  // prawy = 2*i + 2
    int r = 2 * i + 2;
 
    // jesli dziecko lewe jest wieksze niz korzen
    if (l < n && arr[l] > arr[najwiekszy])
        najwiekszy = l;
 
    // sprawdzamy prawe
    if (r < n && arr[r] > arr[najwiekszy])
        najwiekszy = r;
 
    // jesli najwiekszy to nie korzeń
    if (najwiekszy != i) {
        swap(arr[i], arr[najwiekszy]);
 
        // posortuj rekursywnie wybraną gałąź
    
        heapify(arr, n, najwiekszy); //wywolanie funkcji rekursywnie
    }
}
 

void heapSort(int arr[], int n)
{
   
    // zbuduj kopiec (stworz drzewo na tablicy)
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i);
 
    // po kolei otwieraj elementy z kopca
    for (int i = n - 1; i > 0; i--) {
       
        // rusz obecny korzen na koniec tablicy w postaci drzewa
        swap(arr[0], arr[i]);
 
        // wywolaj heapify na zredukowanym stosie
        heapify(arr, i, 0);
    }
}
 
//funkcja do printowania tablic
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 
// kod do sterowania programem
int main()
{
    int arr[] = { 15,7,92103,123,123,41,2020 }; //tutaj podaj liczby w { ... }
    ///////////////////////////////////////////
    //////////////////////////////////////
    /////////////////////////////////
    int n = sizeof(arr) / sizeof(arr[0]);
 
    heapSort(arr, n);
 
    cout << "Sorted array is \n";
    printArray(arr, n);
}