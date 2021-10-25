#ifndef __documentary__
#define __documentary__

//------------------------------------------------------------------------------
// documentary.h - �������� �������� ��������������� ������ � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rndInt.h"
#include "film.h"

//------------------------------------------------------------------------------
// �������������� �����
class Documentary : public Film {
public:
    virtual ~Documentary() {};
    // ���� ���������� ��������������� ������ �� �����
    virtual void In(ifstream& ifst);
    // ��������� ���� ���������� ��������������� ������
    virtual void InRnd();
    // ����� ���������� ��������������� ������ � ������������� �����
    virtual void Out(ofstream& ofst);
private:
    int length; // ������������ ������
};


#endif //__documentary__
