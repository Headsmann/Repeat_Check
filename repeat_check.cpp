#include<iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;
//deklaracja zmiennych globalnych
string wyraz;
int p;
void sortowanie() {
	for (int i=0; i<wyraz.length()-1; i++)
        for (int j=0; j<wyraz.length()-1; j++)
            if (wyraz[j]>wyraz[j+1])
                swap(wyraz[j], wyraz[j+1]);
}
void sprawdzenie(){
	p=0;
	 	for (int i=0; i<wyraz.length();i++)
 		for (int j=0; j<wyraz.length(); j++)
 		if (wyraz[j]==wyraz[j+1])
 		p++;
}
void yesno(){
 if (p>0)
 	cout << "TAK"<< endl;
 else
 	cout << "NIE"<< endl;	
}
int main () {	
    cout << "Podaj tekst: ";
    cin >> wyraz;  
//sortowanie
	sortowanie(); 
//sprawdzenie powtarzania 
	sprawdzenie();
//ograniczenie do 50 znak�w
if (wyraz.length()>50)
cout << "WPROWADZI�ES WIECEJ NIZ 50 ZNAKOW"<< endl;
else
	yesno();		
return( 0 );		
}
