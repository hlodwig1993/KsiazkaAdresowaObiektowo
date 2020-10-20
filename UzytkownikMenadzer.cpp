#include "UzytkownikMenadzer.h"

void UzytkownikMenadzer::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik UzytkownikMenadzer::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawID(pobierzIdNowegoUzytkownika());
    string login;
    do
    {
        cout << "Podaj login: ";
        cin>>login;
        uzytkownik.ustawLogin(login);
    }
    while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);
    string haslo;
    cout << "Podaj haslo: ";
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);
    return uzytkownik;
}

int UzytkownikMenadzer::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzID() + 1;
}

bool UzytkownikMenadzer::czyIstniejeLogin(string login)
{
    for(int i = 0; i<uzytkownicy.size();i++)
    {
        if(uzytkownicy[i].pobierzLogin() == login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }

    }
    return false;

}

void UzytkownikMenadzer::wypiszWszystkichUzytkownikow()
{
    for(int i = 0; i<uzytkownicy.size();i++)
    {
        cout<<uzytkownicy[i].pobierzID()<<"."<<uzytkownicy[i].pobierzLogin()<<"-"<<uzytkownicy[i].pobierzHaslo()<<endl;
    }
    system("pause");
}



int UzytkownikMenadzer::logowanieUzytkownika()
{
    Uzytkownik uzytkownik;
    string login = "", haslo = "";

    cout << "Podaj login: ";
    login = MetodyPomocnicze::wczytajLinie();

    for(int i= 0; i < uzytkownicy.size(); i++)
   {
        if (uzytkownicy[i].pobierzLogin()== login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (uzytkownicy[i].pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    idZalogowanegoUzytkownika = uzytkownicy[i].pobierzID();
                    return idZalogowanegoUzytkownika;
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }

    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}

void UzytkownikMenadzer::zmianaHaslaZalogowanegoUzytkownika()
{
        for (int i = 0; i<uzytkownicy.size(); i++)
        {
            if(uzytkownicy[i].pobierzID() == idZalogowanegoUzytkownika)
        {
            string noweHaslo = "";
            cout << "Podaj nowe haslo: ";
            noweHaslo = MetodyPomocnicze::wczytajLinie();
            uzytkownicy[i].ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}

void UzytkownikMenadzer::wylogowanieUzytkownika()
{   cout<<"Zaraz nastapi wylogowanie uzytkownika"<<endl;
    system("pause");
    idZalogowanegoUzytkownika = 0;
}

int UzytkownikMenadzer::pobierzIdZalogowanegoUzytkownika()
{
    return idZalogowanegoUzytkownika;
}

bool UzytkownikMenadzer::czyUzytkownikJestZalogowany()
{
    if(idZalogowanegoUzytkownika>0)
        return true;
        else
            return false;

}
