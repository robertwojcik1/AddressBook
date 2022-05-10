#include <iostream>
#include "KsiazkaAdresowa.h"
#include "AdresatMenedzer.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    AdresatMenedzer adresatMenedzer;
    PlikZAdresatami plikZAdresatami;
    //int idZalogowanegoUzytkownika = 0;
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
            if ( adresatMenedzer.pobierzAdresatow().empty() )
                {
                adresatMenedzer.ustawIdOstatniegoAdresata( adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() ) );
                }

            wybor = adresatMenedzer.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                adresatMenedzer.ustawIdOstatniegoAdresata( adresatMenedzer.dodajAdresata( ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() ) );
                break;
            case '4':
                adresatMenedzer.wyswietlWszystkichAdresatow();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika( ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() );
                ksiazkaAdresowa.zapiszWszystkichUzytkownikowDoPliku();
                break;
            case '8':
                ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika(0);
                adresatMenedzer.wyczyscVector();
                break;
            }
        }
    }
    return 0;
}
