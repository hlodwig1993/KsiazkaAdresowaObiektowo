#ifndef KSIAZKAADRESOWA1_H
#define KSIAZKAADRESOWA1_H
#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer *adresatMenadzer;
    char wybor;
    const string NAZWA_PLIKU_Z_ADRESATAMI;


public:
   KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
   {
       adresatMenadzer = NULL;
   };
   ~KsiazkaAdresowa()
   {
       delete adresatMenadzer;
       adresatMenadzer = NULL;
   }
    void rejestracjaUzytkownika();
    void wypiszWszystkichAdresatow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    char wybierzOpcjeZMenuGlownego();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuUzytkownika();
    void usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();


};

#endif
