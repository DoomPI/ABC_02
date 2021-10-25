#ifndef __gaming__
#define __gaming__

//------------------------------------------------------------------------------
// gaming.h - �������� �������� �������� ������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rndInt.h"
#include "film.h"

//------------------------------------------------------------------------------
// ������� �����
class Gaming : public Film {
public:
    virtual ~Gaming() {};
    // ���� ���������� �������� ������ �� �����
    virtual void In(ifstream& ifst);
    // ��������� ���� ���������� �������� ������
    virtual void InRnd();
    // ����� ���������� �������� ������ � ������������� �����
    virtual void Out(ofstream& ofst);
private:
    string director; // �������
};


#endif //__gaming__

