#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany() )
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                ksiazkaAdresowa.zakonczProgram();
                break;
            default:
                ksiazkaAdresowa.niepoprawnyWyborOpcjiZMenu();
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHasla();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            default:
                ksiazkaAdresowa.niepoprawnyWyborOpcjiZMenu();
                break;
            }
        }
    }
    return 0;
}
