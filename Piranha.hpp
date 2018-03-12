#ifndef _PIRANHA_
#define _PIRANHA_

#include "Ikan.hpp"
#include "Point.hpp"


class Piranha : public Ikan{
    public:
        Piranha();
        void searchMakanan();
        void makan();
        void produce();
        void levelUp();
        void operator++();
        void operator--();
}

#endif
