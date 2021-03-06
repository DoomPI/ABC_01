#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - ???????? ??? ??????,
// ?????????????? ?????????
//------------------------------------------------------------------------------

#include "film.h"

//------------------------------------------------------------------------------
// ?????????? ????????? ?? ?????? ??????????? ???????
struct container {
    enum { MAX_LENGTH = 10000 }; // ???????????? ?????
    int length; // ??????? ?????
    film* cont[MAX_LENGTH];
};

// ????????????? ??????????
void Init(container& c);

// ??????? ?????????? ?? ????????? (???????????? ??????)
void Clear(container& c);

// ???? ??????????? ?????????? ?? ?????????? ??????
void In(container& c, ifstream& ifst);

// ????????? ???? ??????????? ??????????
void InRnd(container& c, int size);

// ????? ??????????? ?????????? ? ????????? ?????
void Out(container& c, ofstream& ofst);

// ??????? ???????? ????????
double Average(container& c);
#endif //__container__
