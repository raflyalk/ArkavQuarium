#include <iostream>
#include "objek.hpp"


class Aquarium{
    protected:
        Objek** Matriks;
        int MaxX, MaxY;
    public:
        Aquarium();
        Aquarium(int, int);
        Aquarium(const Aquarium&);
        ~Aquarium();
               

}