#include "UzytkownikMenadzer.h"
#include "KsiazkaAdresowa1.h"
using namespace std;
KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikMenadzer.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}
