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
    //string nazwaPlikuZAdresatami;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;
    //PlikZAdresatami plikZAdresatami;


public:
    AdresatMenedzer();    //(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    vector <Adresat> pobierzAdresatow();
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata( int i);
    char wybierzOpcjeZMenuUzytkownika();
};

#endif
