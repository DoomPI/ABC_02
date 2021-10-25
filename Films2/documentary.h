#ifndef __documentary__
#define __documentary__

//------------------------------------------------------------------------------
// documentary.h - содержит описание документального фильма и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rndInt.h"
#include "film.h"

//------------------------------------------------------------------------------
// документальный фильм
class Documentary : public Film {
public:
    virtual ~Documentary() {};
    // ¬вод параметров документального фильма из файла
    virtual void In(ifstream& ifst);
    // —лучайный ввод параметров документального фильма
    virtual void InRnd();
    // ¬ывод параметров документального фильма в форматируемый поток
    virtual void Out(ofstream& ofst);
private:
    int length; // длительность фильма
};


#endif //__documentary__
