#ifndef CINEMA_H
#define CINEMA_H
#include <string>
#include <vector>

struct Film {
    std::string titlu;
    std::string gen;
    int durata;
};

class Cinema {
private:
    std::vector<Film> filme;

public:
    void incarcaFilme(const std::string& numeFisier);
    void afiseazaMeniu();
    void selecteazaFilm();
};

#endif