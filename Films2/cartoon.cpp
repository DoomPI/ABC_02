//------------------------------------------------------------------------------
// cartoon.cpp - содержит функции обработки данных мультфильма
//------------------------------------------------------------------------------

#include "cartoon.h";

//------------------------------------------------------------------------------
// Ввод параметров данных мультфильма
void Cartoon::In(ifstream& ifst) {
    int t;
    ifst >> name >> year >> t;
    switch (t) {
    case 1:
        type = DRAWN;
        break;
    case 2:
        type = STOP_MOTION;
        break;
    case 3:
        type = PLASTICINE;
        break;
    }
}

// Случайный ввод данных мультфильма
void Cartoon::InRnd() {
    name = Film::rnd_film_name.Get();
    year = Film::rnd2000.Get();
    auto t = Film::rnd3.Get();
    switch (t) {
    case 1:
        type = DRAWN;
        break;
    case 2:
        type = STOP_MOTION;
        break;
    case 3:
        type = PLASTICINE;
        break;
    }
}

//------------------------------------------------------------------------------
// Вывод данных мультфильма в поток
void Cartoon::Out(ofstream& ofst) {
    ofst << "This is a film named \"" << name << "\". It was produced in "
        << year << " year.\n";
    switch (type) {
    case 1:
        ofst << "It is a cartoon. It was created by using drawn method.\n";
        break;
    case 2:
        ofst << "It is a cartoon. It was created by using plasticine method.\n";
        break;
    case 3:
        ofst << "It is a cartoon. It was created by using stop motion method.\n";
        break;
    }
    ofst << "The quotient equals " << Quotient() << ".\n";
}

