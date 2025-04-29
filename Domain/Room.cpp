#include "Room.h"
#include <sstream>

// Constructori
Room::Room() : id(0), name(""), capacity(0) {}
Room::Room(int id, const string& name, int capacity) : id(id), name(name), capacity(capacity) {}

// Getteri
int Room::getId() const { return id; }
string Room::getName() const { return name; }
int Room::getCapacity() const { return capacity; }

// Setteri
void Room::setId(int id) { this->id = id; }
void Room::setName(const string& name) { this->name = name; }
void Room::setCapacity(int capacity) { this->capacity = capacity; }

// Supraincarcare <<
ostream& operator<<(ostream& os, const Room& room) {
    os << "Room ID: " << room.id
       << ", Name: " << room.name
       << ", Capacity: " << room.capacity;
    return os;
}

// toCSV
string Room::toCSV() const {
    stringstream ss;
    ss << id << "," << name << "," << capacity;
    return ss.str();
}

// fromCSV
Room Room::fromCSV(const string& line) {
    stringstream ss(line);
    string token;
    int id, capacity;
    string name;

    getline(ss, token, ',');
    id = stoi(token);
    getline(ss, name, ',');
    getline(ss, token, ',');
    capacity = stoi(token);

    return Room(id, name, capacity);
}
