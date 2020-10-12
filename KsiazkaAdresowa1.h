#ifndef KSIAZKAADRESOWA1_H
#define KSIAZKAADRESOWA1_H
#include "UzytkownikMenadzer.h"


using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenadzer uzytkownikMenadzer;

public:
    KsiazkaAdresowa(string NazwaPlikuZUzytkownikami) : uzytkownikMenadzer(NazwaPlikuZUzytkownikami){uzytkownikMenadzer.wczytajUzytkownikowZPliku();};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();



};

#endif
