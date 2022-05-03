#include "AdresatMenedzer.h"

AdresatMenedzer::AdresatMenedzer()
{
    int idOstatniegoAdresata = 0;
    int idUsunietegoAdresata = 0;
}

int AdresatMenedzer::pobierzIdOStatniegoAdresata()
{
    return idOstatniegoAdresata;
}

void AdresatMenedzer::ustawIdOstatniegoAdresata( int i)
{
    idOstatniegoAdresata = i;
}
vector <Adresat> AdresatMenedzer::pobierzAdresatow()
{
    return adresaci;
}
