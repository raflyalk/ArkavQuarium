#include "Ikan.hpp"
#include "Point.hpp"

#ifndef _GUPPY_
#define _GUPPY_

class Guppy : public Ikan{
    public :
        Guppy();
        void searchMakanan();
        void makan();
        void produce();
        void levelUp();
        void operator++();
        void operator--();
}

#endif _GUPPY_