#ifndef __cartoon__
#define __cartoon__

//------------------------------------------------------------------------------
// catroon.h - �������� �������� �����������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rndInt.h"
#include "film.h"

//------------------------------------------------------------------------------
// ����������
class Cartoon : public Film {
public:
    virtual ~Cartoon() {};
    // ���� ���������� ����������� �� �����
    virtual void In(ifstream& ifst);
    // ��������� ���� ���������� �����������
    virtual void InRnd();
    // ����� ���������� ����������� � ������������� �����
    virtual void Out(ofstream& ofst);
private:
    enum Types { DRAWN = 1, STOP_MOTION, PLASTICINE};
    Types type;
};

#endif //__cartoon__

