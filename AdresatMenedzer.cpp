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
    //cout << "2. Wyszukaj po imieniu" << endl;
    //cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    //cout << "5. Usun adresata" << endl;
    //cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    adresat.ustawId( ++idOstatniegoAdresata );
    adresat.ustawIdUzytkownika( idZalogowanegoUzytkownika );

    cout << "Podaj imie: ";
    adresat.ustawImie( MetodyPomocnicze::wczytajLinie() );
    adresat.ustawImie( zamienPierwszaLitereNaDuzaAPozostaleNaMale( adresat.pobierzImie() ) );

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko( MetodyPomocnicze::wczytajLinie() );
    adresat.ustawNazwisko( zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()) );

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu( MetodyPomocnicze::wczytajLinie() );

    cout << "Podaj email: ";
    adresat.ustawEmail( MetodyPomocnicze::wczytajLinie() );

    cout << "Podaj adres: ";
    adresat.ustawAdres( MetodyPomocnicze::wczytajLinie() );

    return adresat;
}

string AdresatMenedzer::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}

int AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}
