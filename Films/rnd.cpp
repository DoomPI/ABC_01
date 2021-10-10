//------------------------------------------------------------------------------
// rnd.cpp - содержит функции генерации случайных значений.
//------------------------------------------------------------------------------

#include "rnd.h"

int RandomLength() {
    return rand() % 120 + 1;
}

int RandomYear() {
    return rand() % 2000 + 1;
}

int RandomType() {
    return rand() % 4;
}

int RandomName() {
    return rand();
}
