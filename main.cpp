#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

    //int idZalogowanegoUzytkownika = 0;
   // int idOstatniegoAdresata = 0;
   // int idUsunietegoAdresata = 0;
   // char wybor;

   // uzytkownikMenedzer.wczytajUzytkownikowZPliku(uzytkownicy);
    /*
    while (true)
    {
        if (idZalogowanegoUzytkownika == 0)
        {
            wybor = KsiazkaAdresowa::ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                KsiazkaAdresowa::ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                idZalogowanegoUzytkownika = UzytkownikMenedzer::uzytkownikMenedzer.logowanieUzytkownika(uzytkownicy);
                break;
            case '9':
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

            if (adresaci.empty() == true)

                idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);

            wybor = wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
                break;
            case '4':
                wyswietlWszystkichAdresatow(adresaci);
                break;
            case '8':
                idZalogowanegoUzytkownika = 0;
                adresaci.clear();
                break;
            }
        }
    } */
    return 0;
}
