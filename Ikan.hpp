#include <iostream>
#include "Point.hpp"
using namespace std;

#ifndef _IKAN_
#define _IKAN_
class Ikan(){
    protected :
        int price, coin, level, hp;
        char diet, status;      
        Point P;
    public :
        //Constructor Default Ikan
        Ikan();
        //User Defined Constructor Ikan
        Ikan(int h, char f, Point PP, int c, int l, int h, char s);
        //Method Makan (Pure Virtual) sesuai dengan jenis ikannya
        virtual void makan() = 0;
        //Method mengeluarkan Koin/Kristal
        virtual void produce() = 0;
        //Method menghadap
        void turn(char dir);
        //Method Gerak dengan parameter arah
        virtual void move(char dir);
        //Method Mati
        virtual void die();
        //Getter Point
        Point getCoordinate();
        //getter Harga
        int getPrice();
        //getter Jenis Makanan
        char getDiet();
        //getter nilai koin
        int getCoin();
        //getter Level
        int getLevel();
        //getter Health
        int getHealth();
        //getter Status
        char getStat();
        //setter koin
        void setCoin(int c);
        //setter level
        void setLevel(int l);
        //setter HP
        void setHealth(int h);
        //setter Status
        void setStat();
        //setter koordinat awal
        void setCoordinate(Point PP);
        //setter Harga
        void setPrice(int h);
        //setter Makanan
        void setDiet(int f);
        //Method mencari makanan terdekat (Pure Virtual)
        virtual void searchMakanan() = 0;      
};

#endif _IKAN_
