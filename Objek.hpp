#include <iostream>
#include "Aquarium.hpp"
#include "Point.hpp"
using namespace std;

#ifndef _OBJEK_
#define _OBJEK_

class Objek{
    protected:
        int price;
    public:
        Objek();
        Objek(int);
        virtual move(Aquarium) = 0;
}

#endif