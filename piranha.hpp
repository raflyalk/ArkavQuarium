#include "ikan.hpp"
#include "point.hpp"

#ifndef _PIRANHA_
#define _PIRANHA_

class Piranha : public Ikan{
    public :
        Piranha();
        void searchMakanan();
        void makan();
        void produce();
        void levelUp();
        void operator++();
        void operator--();
}

#endif _PIRANHA_