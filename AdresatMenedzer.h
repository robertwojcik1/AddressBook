#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer( string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami( nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA( idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku( adresaci, ID_ZALOGOWANEGO_UZYTKOWNIKA );
    };

    vector <Adresat> pobierzAdresatow();
    char wybierzOpcjeZMenuUzytkownika();
    void dodajAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlWszystkichAdresatow();
    void ustawIdOstatniegoAdresata(int nowyIdOstatniegoAdresata );
};

#endif
