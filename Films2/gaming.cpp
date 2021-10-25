//------------------------------------------------------------------------------
// gaming.cpp - �������� ������� ��������� ������ �������� ������
//------------------------------------------------------------------------------

#include "gaming.h";

//------------------------------------------------------------------------------
// ���� ���������� ������ �������� ������
void Gaming::In(ifstream& ifst) {
    ifst >> name >> year >> director;
}

// ��������� ���� ������ �������� ������
void Gaming::InRnd() {
    name = Film::rnd_film_name.Get();
    year = Film::rnd2000.Get();
    director = Film::rnd_director_name.Get();
}

//------------------------------------------------------------------------------
// ����� ������ �������� ������ � �����
void Gaming::Out(ofstream& ofst) {
    ofst << "This is a film named \"" << name << "\". It was produced in "
        << year << " year.\nIt is a gaming film. Director: " << director << ".\nThe quotient equals " << Quotient() << ".\n";
}