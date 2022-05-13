#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if( uzytkownikMenedzer.czyUzytkownikJestZalogowany() )
    {
        adresatMenedzer = new AdresatMenedzer( NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() );
    }
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::zmianaHasla()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
    uzytkownikMenedzer.zapiszWszystkichUzytkownikowDoPliku();
}

void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika(int aktualnyIdZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(aktualnyIdZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::ustawIdOstatniegoAdresata( int nowyIdOstatniegoAdresata )
{
    adresatMenedzer->ustawIdOstatniegoAdresata(nowyIdOstatniegoAdresata);
}

void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresatMenedzer->wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    adresatMenedzer->wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if( uzytkownikMenedzer.czyUzytkownikJestZalogowany() )
    {
    adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::zakonczProgram()
{
    cout << "Koniec programu." << endl;
    exit(0);
}

void KsiazkaAdresowa::niepoprawnyWyborOpcjiZMenu()
{
   cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
   system("pause");
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenedzer->edytujAdresata();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatMenedzer->usunAdresata();
}
