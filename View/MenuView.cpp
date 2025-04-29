#include <iostream>
#include "../Controllers/MovieController.h"
#include "../Controllers/BookingController.h"
#include "../Controllers/UserController.h"
#include "../Domain/Admin.h"
#include "../Domain/Client.h"
#include "../Repository/Repository.h"

using namespace std;

class MenuView {
private:
    UserRepo& userRepo;
    MovieController& movieCtrl;
    BookingController& bookingCtrl;

public:
    MenuView(UserRepo& u, MovieController& m, BookingController& b)
        : userRepo(u), movieCtrl(m), bookingCtrl(b) {}

    void run() {
        while (true) {
            cout << "\n=== CINEMATOGRAF APP ===\n";
            cout << "1. Login ca admin\n";
            cout << "2. Login ca client\n";
            cout << "3. Iesire\n";
            cout << "Alege optiunea: ";
            int opt;
            cin >> opt;

            if (opt == 1)
                adminMenu();
            else if (opt == 2)
                clientMenu();
            else if (opt == 3)
                break;
            else
                cout << "Optiune invalida!\n";
        }
    }

private:
    void adminMenu() {
        int opt;
        do {
            cout << "\n=== MENIU ADMIN ===\n";
            cout << "1. Adauga film\n";
            cout << "2. Sterge film\n";
            cout << "3. Editeaza film\n";
            cout << "4. Afiseaza toate filmele\n";
            cout << "5. Vezi rezervari\n";
            cout << "0. Logout\n";
            cout << "Optiune: ";
            cin >> opt;

            switch (opt) {
                case 1: movieCtrl.addMovie(); break;
                case 2: movieCtrl.removeMovie(); break;
                case 3: movieCtrl.updateMovie(); break;
                case 4: movieCtrl.showAllMovies(); break;
                case 5: bookingCtrl.showAllBookings(); break;
                case 0: cout << "Logout admin...\n"; break;
                default: cout << "Optiune invalida!\n";
            }
        } while (opt != 0);
    }

    void clientMenu() {
        int opt;
        do {
            cout << "\n=== MENIU CLIENT ===\n";
            cout << "1. Afiseaza toate filmele\n";
            cout << "2. Fa o rezervare\n";
            cout << "3. Vezi rezervarile mele\n";
            cout << "0. Logout\n";
            cout << "Optiune: ";
            cin >> opt;

            switch (opt) {
                case 1: movieCtrl.showAllMovies(); break;
                case 2: bookingCtrl.addBooking(); break;
                case 3: bookingCtrl.showBookingsForUser(); break;
                case 0: cout << "Logout client...\n"; break;
                default: cout << "Optiune invalida!\n";
            }
        } while (opt != 0);
    }
};
