#include "Adresat.h"


using namespace std;

void Adresat::ustawID(int noweID)
{
    id = noweID;
}
void Adresat::ustawIdUzytkownika(int noweIdUzytkownika)
{

    idUzytkownika = noweIdUzytkownika;
}
void Adresat::ustawImie(string noweImie)
{
    imie = noweImie;
}
void Adresat::ustawNazwisko(string noweNazwisko)
{
   nazwisko = noweNazwisko;
}
void Adresat::ustawNumerTelefonu(string noweNumerTelefonu)
{
    numerTelefonu = noweNumerTelefonu;
}
void Adresat::ustawEmail(string noweEmail)
{
    email = noweEmail;
}
void Adresat::ustawAdres(string noweAdres)
{
    adres = noweAdres;
}


int Adresat::pobierzID()
{
    return id;
}
int Adresat::pobierzIdUzytkownika()
{
    return idUzytkownika;
}
string Adresat::pobierzImie()
{
    return imie;
}
string Adresat::pobierzNazwisko()
{
    return nazwisko;
}
string Adresat::pobierzNumerTelefonu()
{
    return numerTelefonu;
}
string Adresat::pobierzEmail()
{
    return email;
}
string Adresat::pobierzAdres()
{
    return adres;
}
