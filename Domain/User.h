#pragma once
#include <string>
#include <iostream>
using namespace std;

class User {
protected:
    int id;
    string username;
    string password;

public:
    User();
    User(int id, const string& username, const string& password);
    virtual ~User() {}

    int getId() const;
    string getUsername() const;
    string getPassword() const;

    void setId(int id);
    void setUsername(const string& username);
    void setPassword(const string& password);

    virtual string getRole() const = 0;  // funcție abstractă
    virtual void showMenu() const = 0;   // meniu specific pentru Client/Admin

    friend ostream& operator<<(ostream& os, const User& user);
};
