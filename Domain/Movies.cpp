#include "Movies.h"
#include <sstream>

Movie::Movie() : id(0), title(""), genre(""), duration(0), rating(0.0) {}

Movie::Movie(int id, string title, string genre, int duration, double rating)
    : id(id), title(title), genre(genre), duration(duration), rating(rating) {}

int Movie::getId() const { return id; }
string Movie::getTitle() const { return title; }
string Movie::getGenre() const { return genre; }
int Movie::getDuration() const { return duration; }
double Movie::getRating() const { return rating; }

void Movie::setTitle(const string& newTitle) { title = newTitle; }
void Movie::setGenre(const string& newGenre) { genre = newGenre; }
void Movie::setDuration(int newDuration) { duration = newDuration; }
void Movie::setRating(double newRating) { rating = newRating; }

string Movie::toCSV() const {
    stringstream ss;
    ss << id << "," << title << "," << genre << "," << duration << "," << rating;
    return ss.str();
}

// ostream& operator<<(ostream& out, const Movie& movie) {
//     out << "ID: " << movie.id << " | Title: " << movie.title
//         << " | Genre: " << movie.genre
//         << " | Duration: " << movie.duration << " min"
//         << " | Rating: " << movie.rating << "/10";
//     return out;
// }
