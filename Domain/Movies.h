#pragma once
#include <string>
using namespace std;

class Movie {
private:
    int id;
    string title;
    string genre;
    int duration; // minute
    double rating;

public:
    Movie();
    Movie(int id, string title, string genre, int duration, double rating);

    // Getters
    int getId() const;
    string getTitle() const;
    string getGenre() const;
    int getDuration() const;
    double getRating() const;

    // Setters
    void setTitle(const string& newTitle);
    void setGenre(const string& newGenre);
    void setDuration(int newDuration);
    void setRating(double newRating);

    // CSV serialization
    string toCSV() const;

};
