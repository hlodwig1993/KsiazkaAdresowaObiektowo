#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>


using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;


public:
    void ustawID(int noweID);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string noweNumerTelefonu);
    void ustawEmail(string noweEmail);
    void ustawAdres(string noweAdres);

    int pobierzID();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();



};
#endif
