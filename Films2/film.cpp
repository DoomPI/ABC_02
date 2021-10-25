//------------------------------------------------------------------------------
// film.cpp - �������� ���������, ��������� � ���������� ������ ������
//------------------------------------------------------------------------------

#include "cartoon.h"
#include "documentary.h"
#include "gaming.h"

//------------------------------------------------------------------------------
RandomInt Film::rnd3(1, 3);
RandomInt Film::rnd2000(1, 2000);
RandomInt Film::rnd180(60, 180);
RandomString Film::rnd_film_name("film name");
RandomString Film::rnd_director_name("director name");
//------------------------------------------------------------------------------
// ���� ������ ������
Film* Film::StaticIn(ifstream& ifst) {
    int k;
    ifst >> k;
    Film* fp = nullptr;
    switch (k) {
    case 1:
        fp = new Cartoon;
        break;
    case 2:
        fp = new Documentary;
        break;
    case 3:
        fp = new Gaming;
        break;
    default:
        return 0;
    }
    
    fp->In(ifst);
    return fp;
}

// ��������� ���� ������ ������
Film* Film::StaticInRnd() {
    auto k = Film::rnd3.Get();
    Film* fp = nullptr;
    switch (k) {
    case 1:
        fp = new Cartoon;
        break;
    case 2:
        fp = new Documentary;
        break;
    case 3:
        fp = new Gaming;
        break;
    }
    fp->InRnd();
    return fp;
}

//------------------------------------------------------------------------------
// ���������� �������� �� ������� ����
// ������ ������ �� ���������� ��������
// � ��� ��������

double Film::Quotient() {
    return year / name.length();
}
