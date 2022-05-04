#include "AdresatMenedzer.h"

AdresatMenedzer::AdresatMenedzer()
{
    int idOstatniegoAdresata = 0;
    int idUsunietegoAdresata = 0;
}

int AdresatMenedzer::pobierzIdOstatniegoAdresata()
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

char AdresatMenedzer::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
