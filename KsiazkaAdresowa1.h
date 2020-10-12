#ifndef KSIAZKAADRESOWA1_H
#define KSIAZKAADRESOWA1_H
#include "UzytkownikMenadzer.h"


using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenadzer uzytkownikMenadzer;

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();



};

#endif
