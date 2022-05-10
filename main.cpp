#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    char wybor;

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika( ksiazkaAdresowa.logowanieUzytkownika() );
                ksiazkaAdresowa.ustawIdOstatniegoAdresata( ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() ) );
                break;
            case '9':
                cout << "Koniec programu." << endl;
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.ustawIdOstatniegoAdresata( ksiazkaAdresowa.dodajAdresata( ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() ) );
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika( ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() );
                ksiazkaAdresowa.zapiszWszystkichUzytkownikowDoPliku();
                break;
            case '8':
                ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika(0);
                ksiazkaAdresowa.wyczyscVector();
                break;
            }
        }
    }
    return 0;
}
