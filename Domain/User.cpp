#include "User.h"

User::User() : id(0), username(""), password("") {}

User::User(int id, const string& username, const string& password)
    : id(id), username(username), password(password) {}

int User::getId() const { return id; }
string User::getUsername() const { return username; }
string User::getPassword() const { return password; }

void User::setId(int id) { this->id = id; }
void User::setUsername(const string& username) { this->username = username; }
void User::setPassword(const string& password) { this->password = password; }

ostream& operator<<(ostream& os, const User& user) {
    os << "ID: " << user.id << ", Username: " << user.username << ", Role: " << user.getRole();
    return os;
}
