//------------------------------------------------------------------------------
// main.cpp - содержит главную функцию, 
// обеспечивающую тестирование
//------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <ctime>   
#include <cstring>

#include "container.h"

void errMessage1() {
    cout << "Incorrect command line!\n"
        "  Waited:\n"
        "     command -f infile outfile01 outfile02\n"
        "  Or:\n"
        "     command -n number outfile01 outfile02\n";
}

void errMessage2() {
    cout << "Incorrect qualifier value!\n"
        "  Waited:\n"
        "     command -f infile outfile01 outfile02\n"
        "  Or:\n"
        "     command -n number outfile01 outfile02\n";
}

//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    if (argc != 5) {
        errMessage1();
        return 1;
    }

    cout << "Start" << endl;
    unsigned int start_time = clock(); // начальное время
    // здесь должен быть фрагмент кода, время выполнения которого нужно измерить


    Container* c = new Container;

    if (!strcmp(argv[1], "-f")) {
        ifstream ifst(argv[2]);
        c->In(ifst);
    }
    else if (!strcmp(argv[1], "-n")) {
        auto size = atoi(argv[2]);
        if ((size < 1) || (size > 10000)) {
            cout << "Incorrect numer of films = "
                << size
                << ". Set 0 < number <= 10000\n";
            return 3;
        }
        // системные часы в качестве инициализатора
        srand(static_cast<unsigned int>(time(0)));
        // Заполнение контейнера генератором случайных чисел
        c->InRnd(size);
    }
    else {
        errMessage2();
        return 2;
    }

    // Вывод содержимого контейнера в файл
    ofstream ofst1(argv[3]);
    ofst1 << "Filled container:\n";
    c->Out(ofst1);

    // Сортировка контейнера
    ofstream ofst2(argv[4]);
    c->Sort();
    ofst2 << "Filled container:\n";
    c->Out(ofst2);

    cout << "Stop" << endl;
    unsigned int end_time = clock(); // конечное время
    cout << end_time - start_time; // искомое время
    return 0;
}
