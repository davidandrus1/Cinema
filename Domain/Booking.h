#pragma once
#include <string>
using namespace std;

class Booking {
private:
    int idBooking;
    int idMovie;
    string clientName;
    int seatNumber;

public:
    Booking();
    Booking(int idBooking, int idMovie, string clientName, int seatNumber);

    // Getters
    int getIdBooking() const;
    int getIdMovie() const;
    string getClientName() const;
    int getSeatNumber() const;

    // Setters
    void setClientName(const string& name);
    void setSeatNumber(int number);

    // CSV serialization
    string toCSV() const;

    // Overload <<
    friend ostream& operator<<(ostream& out, const Booking& booking);
};
