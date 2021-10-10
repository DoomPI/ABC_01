#ifndef __cartoon__
#define __cartoon__

//------------------------------------------------------------------------------
// catroon.h - содержит описание мультфильма  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

// мультфильм
struct cartoon {
    enum type { DRAWN, STOP_MOTION, PLASTICINE, COMPUTER };
    type t;
};

// Ввод параметров мультфильма из файла
void In(cartoon& c, ifstream& ifst);

// Случайный ввод параметров мультфильма
void InRnd(cartoon& c);

// Вывод параметров мультфильма в форматируемый поток
void Out(cartoon& c, ofstream& ofst);

#endif //__cartoon__
