//------------------------------------------------------------------------------
// documentary.cpp - содержит функции обработки данных документального фильма
//------------------------------------------------------------------------------

#include "documentary.h";

//------------------------------------------------------------------------------
// Ввод параметров данных документального фильма
void Documentary::In(ifstream& ifst) {
    ifst >> name >> year >> length;
}

// Случайный ввод данных документального фильма
void Documentary::InRnd() {
    name = Film::rnd_film_name.Get();
    year = Film::rnd2000.Get();
    length = Film::rnd180.Get();
}

//------------------------------------------------------------------------------
// Вывод данных документального фильма в поток
void Documentary::Out(ofstream& ofst) {
    ofst << "This is a film named \"" << name << "\". It was produced in "
        << year << " year.\nIt is a documentary. Length: " << length << " minutes.\nThe quotient equals " << Quotient() << ".\n";
}