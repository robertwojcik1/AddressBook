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

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika( int idZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::zapiszWszystkichUzytkownikowDoPliku()
{
    uzytkownikMenedzer.zapiszWszystkichUzytkownikowDoPliku();
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika(int aktualnyIdZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(aktualnyIdZalogowanegoUzytkownika);
}

vector <Adresat> KsiazkaAdresowa::pobierzAdresatow()
{
    adresatMenedzer.pobierzAdresatow();
}

void KsiazkaAdresowa::ustawIdOstatniegoAdresata( int i )
{
    adresatMenedzer.ustawIdOstatniegoAdresata(i);
}

int KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    adresatMenedzer.wybierzOpcjeZMenuUzytkownika();
}

int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika)
{
    adresatMenedzer.dodajAdresata(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wyczyscVector()
{
    adresatMenedzer.wyczyscVector();
}
