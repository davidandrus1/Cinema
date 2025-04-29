#pragma once
#include <iostream>
#include <string>
using namespace std;

class Room {
private:
    int id;
    string name;
    int capacity;

public:
    Room();  // constructor default
    Room(int id, const string& name, int capacity);

    // Getteri
    int getId() const;
    string getName() const;
    int getCapacity() const;

    // Setteri
    void setId(int id);
    void setName(const string& name);
    void setCapacity(int capacity);

    // Supraincarcari
    friend ostream& operator<<(ostream& os, const Room& room);

    // Salvare / citire din fisier
    string toCSV() const;
    static Room fromCSV(const string& line);
};