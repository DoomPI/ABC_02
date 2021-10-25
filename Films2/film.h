#ifndef __film__
#define __film__

//------------------------------------------------------------------------------
// film.h - содержит общее описание фильма
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rndInt.h"
#include "rndString.h"

//------------------------------------------------------------------------------
// структура, обобщающая все фильмы
class Film {
protected:
    int year;
    string name;
    static RandomInt rnd3;
    static RandomInt rnd2000;
    static RandomInt rnd180;
    static RandomString rnd_film_name;
    static RandomString rnd_director_name;
public:
    virtual ~Film() {};
    // Ввод данных фильма
    static Film* StaticIn(ifstream& ifst);
    // Витртуальный метод ввода данных фильма
    virtual void In(ifstream& ifst) = 0;
    // Ввод случайных данных фильма
    static Film* StaticInRnd();
    // Виртуальный метод ввода случайных данных фильма
    virtual void InRnd() = 0;
    // Вывод данных фильма
    virtual void Out(ofstream& ofst) = 0;
    // Вычисление частного от деления года
    // выхода фильма на количество символов
    // в его названии
    double Quotient();
};

#endif //__film__