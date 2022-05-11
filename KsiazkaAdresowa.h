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
    AdresatMenedzer adresatMenedzer;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami) {};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    char wybierzOpcjeZMenuGlownego();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika( int idZalogowanegoUzytkownika);
    void zapiszWszystkichUzytkownikowDoPliku();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int aktualnyIdZalogowanegoUzytkownika);
    vector <Adresat> pobierzAdresatow();
    void ustawIdOstatniegoAdresata( int i);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    char wybierzOpcjeZMenuUzytkownika();
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyczyscVector();
};

#endif
