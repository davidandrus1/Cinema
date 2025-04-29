#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include "View/MenuView.cpp"
#include "Repository/Repository.h"
using namespace std;

int main() {
    int main() {
        UserRepo userRepo;
        MovieRepo movieRepo;
        BookingRepo bookingRepo;

        MovieController movieCtrl(movieRepo);
        BookingController bookingCtrl(bookingRepo, movieRepo, userRepo);

        MenuView menu(userRepo, movieCtrl, bookingCtrl);
        menu.run();

        return 0;
    }

}