#ifndef __rndInt__
#define __rndInt__

#include <stdlib.h>
#include <ctime>   // ��� ������� time()

//------------------------------------------------------------------------------
// rndInt.h - �������� ��������� ��������� ����� � ��������� �� 1 �� 20
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
        // ��������� ���� � �������� ��������������
        srand(static_cast<unsigned int>(time(0)));
    }
    // ��������� ���������� ����� � �������� ���������
    int Get() {
        return rand() % (last - first + 1) + first;
    }
private:
    int first;
    int last;
};


#endif //__rndInt__


