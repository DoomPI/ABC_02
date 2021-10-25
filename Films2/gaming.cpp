//------------------------------------------------------------------------------
// gaming.cpp - содержит функции обработки данных игрового фильма
//------------------------------------------------------------------------------

#include "gaming.h";

//------------------------------------------------------------------------------
// Ввод параметров данных игрового фильма
void Gaming::In(ifstream& ifst) {
    ifst >> name >> year >> director;
}

// Случайный ввод данных игрового фильма
void Gaming::InRnd() {
    name = Film::rnd_film_name.Get();
    year = Film::rnd2000.Get();
    director = Film::rnd_director_name.Get();
}

//------------------------------------------------------------------------------
// Вывод данных игрового фильма в поток
void Gaming::Out(ofstream& ofst) {
    ofst << "This is a film named \"" << name << "\". It was produced in "
        << year << " year.\nIt is a gaming film. Director: " << director << ".\nThe quotient equals " << Quotient() << ".\n";
}