#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <windows.h>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    string nazwaTymczasowegoPlikuZAdresatami;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int pobierzZPlikuIdOstatniegoAdresata();

public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku)
    {
      nazwaTymczasowegoPlikuZAdresatami = "Adresaci_tymczasowy.txt";
    }

    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> adresaci, int ID_ZALOGOWANEGO_UZYTKOWNIKA);
    bool dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata( int nowyIdOstatniegoAdresata );
    string pobierzNazwePlikuZAdresatami();
    void edytujAdresataWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata );
    void usunAdresataWPliku(int idUsuwanegoAdresata);
};

#endif
