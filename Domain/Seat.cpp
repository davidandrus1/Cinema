#include "Seat.h"
#include <sstream>
#include <iostream>

Seat::Seat() : seatNumber(0), isOccupied(false) {}

Seat::Seat(int seatNumber, bool isOccupied)
    : seatNumber(seatNumber), isOccupied(isOccupied) {}

int Seat::getSeatNumber() const { return seatNumber; }
bool Seat::getIsOccupied() const { return isOccupied; }

void Seat::setIsOccupied(bool status) { isOccupied = status; }

