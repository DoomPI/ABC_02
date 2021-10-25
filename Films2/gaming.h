#ifndef __gaming__
#define __gaming__

//------------------------------------------------------------------------------
// gaming.h - содержит описание игрового фильма  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rndInt.h"
#include "film.h"

//------------------------------------------------------------------------------
// игровой фильм
class Gaming : public Film {
public:
    virtual ~Gaming() {};
    // Ввод параметров игрового фильма из файла
    virtual void In(ifstream& ifst);
    // Случайный ввод параметров игрового фильма
    virtual void InRnd();
    // Вывод параметров игрового фильма в форматируемый поток
    virtual void Out(ofstream& ofst);
private:
    string director; // режиссёр
};


#endif //__gaming__

