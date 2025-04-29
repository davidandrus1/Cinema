#include <iostream>
#include "Controllers/cinema.h"
#include "Controllers/cinema.cpp"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    Cinema cinema;
    cinema.incarcaFilme("C:\\Users\\david\\CLionProjects\\OOP\\Cinema\\Controllers\\filme.txt");
    cinema.afiseazaMeniu();
    cinema.selecteazaFilm();
}