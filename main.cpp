#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

void zad4() {
    std::vector<double> liczby;
    double liczba;
    char czyKontynuowac;

    // Pobieranie liczb od u¿ytkownika
    do {
        std::cout << "Podaj liczbê: ";
        std::cin >> liczba;
        liczby.push_back(liczba);

        std::cout << "Czy chcesz dodaæ kolejn¹ liczbê? (t/n): ";
        std::cin >> czyKontynuowac;
    } while (czyKontynuowac == 't' || czyKontynuowac == 'T');

    // Liczba wprowadzonych liczb
    int liczbaElementow = liczby.size();
    std::cout << "Liczba wprowadzonych liczb: " << liczbaElementow << std::endl;

    // Obliczanie sumy i œredniej
    double suma = 0;
    for (double l : liczby) {
        suma += l;
    }
    double srednia = suma / liczbaElementow;
    std::cout << "Œrednia wprowadzonych liczb: " << srednia << std::endl;

    // Znajdowanie minimum i maksimum
    double minLiczba = *std::min_element(liczby.begin(), liczby.end());
    double maxLiczba = *std::max_element(liczby.begin(), liczby.end());
    std::cout << "Minimalna z wprowadzonych liczb: " << minLiczba << std::endl;
    std::cout << "Maksymalna z wprowadzonych liczb: " << maxLiczba << std::endl;

    // Obliczanie odchylenia standardowego
    double sumaKwadratowOdchylen = 0;
    for (double l : liczby) {
        sumaKwadratowOdchylen += (l - srednia) * (l - srednia);
    }
    double odchylenieStandardowe = std::sqrt(sumaKwadratowOdchylen / liczbaElementow);
    std::cout << "Odchylenie standardowe wprowadzonych liczb: " << odchylenieStandardowe << std::endl;
}
