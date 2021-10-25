//------------------------------------------------------------------------------
// container.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Конструктор контейнера
Container::Container() : length{ 0 } { }

//------------------------------------------------------------------------------
// Деструктор контейнера
Container::~Container() {
    Clear();
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Container::Clear() {
    for (int i = 0; i < length; i++) {
        delete storage[i];
    }
    length = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void Container::In(ifstream& ifst) {
    while (!ifst.eof()) {
        if ((storage[length] = Film::StaticIn(ifst)) != 0) {
            length++;
        }
    }
    average_quotient = AverageQuotient();
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void Container::InRnd(int size) {
    while (length < size) {
        if ((storage[length] = Film::StaticInRnd()) != nullptr) {
            length++;
        }
    }
    average_quotient = AverageQuotient();
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Container::Out(ofstream& ofst) {
    ofst << "The container has " << length << " elements.\n";
    for (int i = 0; i < length; i++) {
        ofst << i + 1 << ": ";
        storage[i]->Out(ofst);
    }
}

//------------------------------------------------------------------------------
// Подсчёт среднего частного
double Container::AverageQuotient() {
    double average = 0.0;
    for (int i = 0; i < length; i++) {
        average += storage[i]->Quotient();
    }
    return average / length;
}

//------------------------------------------------------------------------------
// Сортировка контейнера методом выбора
void Container::Sort() {
    for (int i = length - 1; i > - 1; i--) {
        if (storage[i]->Quotient() > average_quotient) {
            for (int j = i; j < length - 1; j++) {
                swap(storage[j], storage[j + 1]);
            }
        }
    }
}