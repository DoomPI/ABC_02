#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - ???????? ??? ??????,
// ?????????????? ?????????
//------------------------------------------------------------------------------

#include "film.h"

//------------------------------------------------------------------------------
// ?????????? ????????? ?? ?????? ??????????? ???????
class Container {
public:
    Container();
    ~Container();

    // ???? ??????????? ?????????? ?? ?????????? ??????
    void In(ifstream& ifst);
    // ????????? ???? ??????????? ??????????
    void InRnd(int size);
    // ????? ??????????? ?????????? ? ????????? ?????
    void Out(ofstream& ofst);
    // ??????? ???????? ????????
    double AverageQuotient();
    // ?????????? ??????????
    void Sort();
private:
    void Clear();    // ??????? ?????????? ?? ??????
    int length;   // ??????? ?????
    Film* storage[10000];
    double average_quotient;
};

#endif //__container__