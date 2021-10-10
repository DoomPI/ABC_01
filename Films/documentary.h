#ifndef __documentary__
#define __documentary__

//------------------------------------------------------------------------------
// documentary.h - содержит описание документального фильма  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"

// документальный фильм
struct documentary {
    int length; // длительность фильма
};

// Ввод параметров документального фильма из файла
void In(documentary& d, ifstream& ifst);

// Случайный ввод параметров прямоугольника
void InRnd(documentary& d);

// Вывод параметров прямоугольника в форматируемый поток
void Out(documentary& d, ofstream& ofst);

#endif //__documentary__
