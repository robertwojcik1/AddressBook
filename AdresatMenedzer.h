#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wyswietlDaneAdresata(Adresat adresat);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    void wyswietlWszystkichAdresatow(vector <Adresat> &adresaci);
    int dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
};

#endif
