#include "Repo.h"

// --- MovieRepo ---
void MovieRepo::addMovie(const Movie& movie) {
    movies.push_back(movie);
}
void MovieRepo::removeMovie(int id) {
    movies.erase(remove_if(movies.begin(), movies.end(), [id](const Movie& m) { return m.getId() == id; }), movies.end());
}
Movie* MovieRepo::findMovie(int id) {
    for (auto& movie : movies)
        if (movie.getId() == id)
            return &movie;
    return nullptr;
}
vector<Movie>& MovieRepo::getAllMovies() {
    return movies;
}

// --- UserRepo ---
void UserRepo::addUser(User* user) {
    users.push_back(user);
}
void UserRepo::removeUser(int id) {
    users.erase(remove_if(users.begin(), users.end(), [id](User* u) { return u->getId() == id; }), users.end());
}
User* UserRepo::findUser(int id) {
    for (auto* user : users)
        if (user->getId() == id)
            return user;
    return nullptr;
}
vector<User*>& UserRepo::getAllUsers() {
    return users;
}

// --- BookingRepo ---
void BookingRepo::addBooking(const Booking& booking) {
    bookings.push_back(booking);
}
void BookingRepo::removeBooking(int id) {
    bookings.erase(remove_if(bookings.begin(), bookings.end(), [id](const Booking& b) { return b.getIdBooking() == id; }), bookings.end());
}
Booking* BookingRepo::findBooking(int id) {
    for (auto& booking : bookings)
        if (booking.getIdBooking() == id)
            return &booking;
    return nullptr;
}
vector<Booking>& BookingRepo::getAllBookings() {
    return bookings;
}

// --- FoodRepo ---
void FoodRepo::addFood(const Food& food) {
    foods.push_back(food);
}
void FoodRepo::removeFood(int id) {
    foods.erase(remove_if(foods.begin(), foods.end(), [id](const Food& f) { return f.getId() == id; }), foods.end());
}
Food* FoodRepo::findFood(int id) {
    for (auto& food : foods)
        if (food.getId() == id)
            return &food;
    return nullptr;
}
vector<Food>& FoodRepo::getAllFoods() {
    return foods;
}

// --- RoomRepo ---
void RoomRepo::addRoom(const Room& room) {
    rooms.push_back(room);
}
void RoomRepo::removeRoom(int id) {
    rooms.erase(remove_if(rooms.begin(), rooms.end(), [id](const Room& r) { return r.getId() == id; }), rooms.end());
}
Room* RoomRepo::findRoom(int id) {
    for (auto& room : rooms)
        if (room.getId() == id)
            return &room;
    return nullptr;
}
vector<Room>& RoomRepo::getAllRooms() {
    return rooms;
}
