#ifndef __cartoon__
#define __cartoon__

//------------------------------------------------------------------------------
// catroon.h - содержит описание мультфильма  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rndInt.h"
#include "film.h"

//------------------------------------------------------------------------------
// мультфильм
class Cartoon : public Film {
public:
    virtual ~Cartoon() {};
    // Ввод параметров мультфильма из файла
    virtual void In(ifstream& ifst);
    // Случайный ввод параметров мультфильма
    virtual void InRnd();
    // Вывод параметров мультфильма в форматируемый поток
    virtual void Out(ofstream& ofst);
private:
    enum Types { DRAWN = 1, STOP_MOTION, PLASTICINE};
    Types type;
};

#endif //__cartoon__

