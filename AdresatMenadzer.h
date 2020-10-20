#ifndef ADRESATKMENADZER_H
#define ADRESATKMENADZER_H

#include <iostream>
#include <vector>
#include <cstdio>
#include "Adresat.h"
#include "UzytkownikMenadzer.h"
#include "PlikZAdresatami.h"


using namespace std;

class AdresatMenadzer {

const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
vector <Adresat> adresaci;
PlikZAdresatami plikZAdresatami;

Adresat podajDaneNowegoAdresata();
void wyswietlDaneAdresata(Adresat adresat);
char wybierzOpcjeZMenuEdycja();
void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);


public:
    AdresatMenadzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata);
    void edytujAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();

};

#endif
