#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
    : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    };

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    char wybierzOpcjeZMenuGlownego();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika( int idZalogowanegoUzytkownika);
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int aktualnyIdZalogowanegoUzytkownika);
    vector <Adresat> pobierzAdresatow();
    void ustawIdOstatniegoAdresata( int nowyIdOstatniegoAdresata);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    char wybierzOpcjeZMenuUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wylogowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
    void zmianaHasla();
    void zakonczProgram();
    void niepoprawnyWyborOpcjiZMenu();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void edytujAdresata();
};

#endif
