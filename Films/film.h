#ifndef __film__
#define __film__

//------------------------------------------------------------------------------
// film.h - содержит общее описание фильма
//------------------------------------------------------------------------------

#include "cartoon.h"
#include "documentary.h"
#include "gaming.h"

//------------------------------------------------------------------------------
// структура, обобщающая все фильмы
struct film {
    film() {}
    film(string name, int year) {
        this->name = name;
        this->year = year;
    }
    ~film() {}
    string name;
    int year;
    // значения ключей для каждого жанра
    enum jenre { CARTOON, DOCUMENTARY, GAMING };
    jenre j; // ключ
    // используемые альтернативы
    union { 
        cartoon c;
        documentary d;
        gaming g;
    };

};

// Ввод данных фильма
film* In(ifstream& ifdt);

// Случайный ввод данных фильма
film* InRnd();

// Вывод данных фильма
void Out(film& f, ofstream& ofst);

// Вычисление частного от деления года
// выхода фильма на количество символов
// в его названии
double Quotient(film& f);

#endif //__film__
