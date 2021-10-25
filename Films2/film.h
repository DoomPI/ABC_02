#ifndef __film__
#define __film__

//------------------------------------------------------------------------------
// film.h - �������� ����� �������� ������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rndInt.h"
#include "rndString.h"

//------------------------------------------------------------------------------
// ���������, ���������� ��� ������
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
    // ���� ������ ������
    static Film* StaticIn(ifstream& ifst);
    // ������������ ����� ����� ������ ������
    virtual void In(ifstream& ifst) = 0;
    // ���� ��������� ������ ������
    static Film* StaticInRnd();
    // ����������� ����� ����� ��������� ������ ������
    virtual void InRnd() = 0;
    // ����� ������ ������
    virtual void Out(ofstream& ofst) = 0;
    // ���������� �������� �� ������� ����
    // ������ ������ �� ���������� ��������
    // � ��� ��������
    double Quotient();
};

#endif //__film__