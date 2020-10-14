#include <iostream>
#include "KsiazkaAdresowa1.h"

using namespace std;

int main()
{
KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");
ksiazkaAdresowa.rejestracjaUzytkownika();
ksiazkaAdresowa.logowanieUzytkownika();
ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
ksiazkaAdresowa.wylogowanieUzytkownika();
ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
}


//Testowanko

#include "AdresatMenadzer.h"

int _main()
{
    AdresatMenadzer adresatMenadzer ("Adresaci.txt",2);
    adresatMenadzer.wyswietlWszystkichAdresatow();
    adresatMenadzer.dodajAdresata();
    adresatMenadzer.wyswietlWszystkichAdresatow();

}
