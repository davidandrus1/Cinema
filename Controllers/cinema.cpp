#include "cinema.h"
#include <iostream>
#include <fstream>
#include <sstream>

void Cinema::incarcaFilme(const std::string& numeFisier) {
    std::ifstream fisier(numeFisier);
    if (!fisier.is_open()) {
        std::cerr << "Eroare la deschiderea fisierului " << numeFisier << "!\n";
        return;
    }

    std::string linie;
    while (std::getline(fisier, linie)) {
        std::stringstream ss(linie);
        std::string titlu, gen;
        int durata;

        std::getline(ss, titlu, ',');
        std::getline(ss, gen, ',');
        ss >> durata;

        Film film;
        film.titlu = titlu;
        film.gen = gen;
        film.durata = durata;
        filme.push_back(film);
    }

    fisier.close();
}

void Cinema::afiseazaMeniu() {
    std::cout << "Bine ati venit la Cinema!\n";
    std::cout << "Filme disponibile:\n";
    for (size_t i = 0; i < filme.size(); ++i) {
        std::cout << i + 1 << ". " << filme[i].titlu << " (" << filme[i].gen 
                  << ", " << filme[i].durata << " minute)\n";
    }
}

void Cinema::selecteazaFilm() {
    int alegere;
    std::cout << "Introduceti numarul filmului dorit: ";
    std::cin >> alegere;

    if (alegere > 0 && alegere <= static_cast<int>(filme.size())) {
        Film& film = filme[alegere - 1];
        std::cout << "\nAti ales: " << film.titlu << "\n";
        std::cout << "Gen: " << film.gen << "\n";
        std::cout << "Durata: " << film.durata << " minute\n";
        std::cout << "Vizionare placuta!\n";
    } else {
        std::cout << "Selectie invalida!\n";
    }
}