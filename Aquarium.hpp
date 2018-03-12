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
        void addObject(Objek A);
        void moveObject(Objek A);
        void printMatrix()
}