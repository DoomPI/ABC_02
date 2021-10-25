//------------------------------------------------------------------------------
// documentary.cpp - �������� ������� ��������� ������ ��������������� ������
//------------------------------------------------------------------------------

#include "documentary.h";

//------------------------------------------------------------------------------
// ���� ���������� ������ ��������������� ������
void Documentary::In(ifstream& ifst) {
    ifst >> name >> year >> length;
}

// ��������� ���� ������ ��������������� ������
void Documentary::InRnd() {
    name = Film::rnd_film_name.Get();
    year = Film::rnd2000.Get();
    length = Film::rnd180.Get();
}

//------------------------------------------------------------------------------
// ����� ������ ��������������� ������ � �����
void Documentary::Out(ofstream& ofst) {
    ofst << "This is a film named \"" << name << "\". It was produced in "
        << year << " year.\nIt is a documentary. Length: " << length << " minutes.\nThe quotient equals " << Quotient() << ".\n";
}