#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    int id;
    std::string name;
public:
    User(int id, const std::string& name);
    virtual void menu() = 0;
    virtual ~User() {}
};

#endif
