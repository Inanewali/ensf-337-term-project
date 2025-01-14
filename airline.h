#ifndef MY_AIRLINE_CLASS
#define MY_AIRLINE_CLASS
#include <iostream>
#include <vector>
#include <string>
#include "flight.h"
#include "passenger.h"
#include "seat.h"

class Airline
{
private:
    string name;
    vector <Flight> flights;
    int num_flights;
public:
    Airline();
    ~Airline();
    Airline(Airline &src);

    string get_name() const;
    int get_numflights() const;
    
    void set_name(string name);
    void set_num_flights(int num_flights);

};

Airline::Airline(/* args */)
{
}

Airline::~Airline()
{
}


#endif