#include "passenger.h"

// Default Constructor
Passenger::Passenger() : fname(""), lname(""), phone(""), seat(nullptr) {}

// Destructor
Passenger::~Passenger() {
}

// Copy Constructor
Passenger::Passenger(const Passenger& src) : fname(src.fname), lname(src.lname), phone(src.phone), seat(src.seat) {
}

// Getter functions
string Passenger::get_fname() const {
    return fname;
}

string Passenger::get_lname() const {
    return lname;
}

string Passenger::get_phone() const {
    return phone;
}

const Seat* Passenger::get_seat() const {
    return seat;
}

// Setter functions
void Passenger::set_fname(const string& input) {
    fname = input;
}

void Passenger::set_lname(const string& input) {
    lname = input;
}

void Passenger::set_phone(const string& input) {
    phone = input;
}

void Passenger::set_seat(Seat* new_seat) {
    seat = new_seat;
}

void Passenger::display_info() const {
    std::cout << "Passenger Information:\n";
    std::cout << "First Name: " << fname << "\n";
    std::cout << "Last Name: " << lname << "\n";
    std::cout << "Phone Number: " << phone << "\n";

    if (seat) {
        std::cout << "Seat: " << seat->get_row() << seat->get_columns() << "\n";
    } else {
        std::cout << "Seat: Not assigned\n";
    }

    std::cout << "------------------------\n";
}