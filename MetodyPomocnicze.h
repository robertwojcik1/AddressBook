#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>

using namespace std;

class MetodyPomocnicze
{
public:
     static string konwerjsaIntNaString(int liczba);
     static int konwersjaStringNaInt(string liczba);
     static string wczytajLinie();
     static char wczytajZnak();
};

#endif
