#include "PlikTekstowy.h"

string PlikTekstowy::pobierzNazwePliku()
    {
        return NAZWA_PLIKU;
    }

bool PlikTekstowy::czyPlikJestPusty()
{
    fstream plikTekstowy;
    plikTekstowy.open(NAZWA_PLIKU, ios::in);
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
    {
        plikTekstowy.close();
        return true;
    }
    else
    {
        plikTekstowy.close();
        return false;
    }
}
