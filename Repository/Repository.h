#pragma once
#include <vector>
#include "../Domain/Booking.h"
#include "../Domain/Movies.h"
#include "../Domain/User.h"
#include "../Domain/Room.h"

using namespace std;

// --- REPO pentru Movie ---
class MovieRepo {
private:
    vector<Movie> movies;

public:
    void addMovie(const Movie& movie);
    void removeMovie(int id);
    Movie* findMovie(int id);
    vector<Movie>& getAllMovies();
};

// --- REPO pentru User ---
class UserRepo {
private:
    vector<User*> users;

public:
    void addUser(User* user);
    void removeUser(int id);
    User* findUser(int id);
    vector<User*>& getAllUsers();
};

// --- REPO pentru Booking ---
class BookingRepo {
private:
    vector<Booking> bookings;

public:
    void addBooking(const Booking& booking);
    void removeBooking(int id);
    Booking* findBooking(int id);
    vector<Booking>& getAllBookings();
};

// --- REPO pentru Food ---
// class FoodRepo {
// private:
//     vector<Food> foods;
//
// public:
//     void addFood(const Food& food);
//     void removeFood(int id);
//     Food* findFood(int id);
//     vector<Food>& getAllFoods();
// };

// --- REPO pentru Room ---
class RoomRepo {
private:
    vector<Room> rooms;

public:
    void addRoom(const Room& room);
    void removeRoom(int id);
    Room* findRoom(int id);
    vector<Room>& getAllRooms();
};
