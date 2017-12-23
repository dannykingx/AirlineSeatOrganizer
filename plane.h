#pragma once
#ifndef PLANE_H
#define PLANE_H

#include <iostream>
using namespace std;

// THIS STRUCT GOES OUTSIDE THE CLASS
struct Seat
{
    // STATUS IS NOT A FUNCTION
//    char status();
//    bool isBooked();
    char status;
    bool isBooked()
    {
        return status == 'x';
    };
};

class Plane
{
private:
    Seat ** firstClass;
    Seat ** economy;
    int firstClassRows, firstClassCols, econRows, econCols;
public:
    Plane();
    Plane(int fcr,int fcc, int er, int ec);
    void displaySeats();
    void bookSeat();
    void checkSeat();
    void clearSeat();
    void clearAllSeats();

};
#endif //PLANE_H
