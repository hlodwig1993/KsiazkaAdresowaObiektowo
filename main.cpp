#include <iostream>
#include "KsiazkaAdresowa1.h"

using namespace std;

int main()
{
KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
ksiazkaAdresowa.rejestracjaUzytkownika();
ksiazkaAdresowa.logowanieUzytkownika();
ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
}
