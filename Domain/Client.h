#ifndef CLIENT_H
#define CLIENT_H

#include "User.h"

class Client : public User {
public:
    Client(int id, const std::string& name);
    void menu() override;
};

#endif
