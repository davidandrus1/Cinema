#include "Booking.h"
#include <sstream>

Booking::Booking() : idBooking(0), idMovie(0), clientName(""), seatNumber(0) {}

Booking::Booking(int idBooking, int idMovie, string clientName, int seatNumber)
    : idBooking(idBooking), idMovie(idMovie), clientName(clientName), seatNumber(seatNumber) {}

int Booking::getIdBooking() const { return idBooking; }
int Booking::getIdMovie() const { return idMovie; }
string Booking::getClientName() const { return clientName; }
int Booking::getSeatNumber() const { return seatNumber; }

void Booking::setClientName(const string& name) { clientName = name; }
void Booking::setSeatNumber(int number) { seatNumber = number; }

string Booking::toCSV() const {
    stringstream ss;
    ss << idBooking << "," << idMovie << "," << clientName << "," << seatNumber;
    return ss.str();
}

ostream& operator<<(ostream& out, const Booking& booking) {
    out << "Booking ID: " << booking.idBooking
        << " | Movie ID: " << booking.idMovie
        << " | Client: " << booking.clientName
        << " | Seat: " << booking.seatNumber;
    return out;
}
