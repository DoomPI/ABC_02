#ifndef __rndInt__
#define __rndInt__

#include <stdlib.h>
#include <ctime>   // для функции time()

//------------------------------------------------------------------------------
// rndInt.h - содержит генератор случайных чисел в диапазоне от 1 до 20
//------------------------------------------------------------------------------

class RandomInt {
public:
    RandomInt(int f, int l) {
        if (f <= l) {
            first = f;
            last = l;
        } else {
            first = l;
            last = f;
        }
        // системные часы в качестве инициализатора
        srand(static_cast<unsigned int>(time(0)));
    }
    // Генерация случайного числа в заданном диапазоне
    int Get() {
        return rand() % (last - first + 1) + first;
    }
private:
    int first;
    int last;
};


#endif //__rndInt__


