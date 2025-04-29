#pragma once
using namespace std;

class Seat {
private:
    int seatNumber;
    bool isOccupied;

public:
    Seat();
    Seat(int seatNumber, bool isOccupied);

    // Getters
    int getSeatNumber() const;
    bool getIsOccupied() const;

    // Setters
    void setIsOccupied(bool status);


};
