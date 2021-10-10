//------------------------------------------------------------------------------
// film.cpp - содержит процедуры, связанные с обработкой данных фильма
//------------------------------------------------------------------------------

#include "film.h"

//------------------------------------------------------------------------------
// Ввод данных фильма
film* In(ifstream& ifst) {
    film* f;
    string name;
    int year;
    int j;
    ifst >> name >> year >> j;
    switch (j) {
    case 1:
        f = new film(name, year);
        f->j = film::CARTOON;
        In(f->c, ifst);
        return f;
    case 2:
        f = new film(name, year);
        f->j = film::DOCUMENTARY;
        In(f->d, ifst);
        return f;
    case 3:
        f = new film(name, year);
        f->j = film::GAMING;
        In(f->g, ifst);
        return f;
    default:
        return 0;
    }
}

// Случайный ввод данных фильма
film* InRnd() {
    film* f;
    string name = "Warcraft";
    int year = RandomYear();
    auto j = RandomType() + 1;
    switch (j) {
    case 1:
        f = new film(name, year);
        f->j = film::CARTOON;
        InRnd(f->c);
        return f;
    case 2:
        f = new film(name, year);
        f->j = film::DOCUMENTARY;
        InRnd(f->d);
        return f;
    case 3:
        f = new film(name, year);
        f->j = film::GAMING;
        InRnd(f->g);
        return f;
    default:
        return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод данных фильма в поток
void Out(film& f, ofstream& ofst) {
    ofst << "This is a film named \"" << f.name << "\". It was produced in "
        << f.year << " year.\n";
    switch (f.j) {
    case film::CARTOON:
        Out(f.c, ofst);      
        break;
    case film::DOCUMENTARY:
        Out(f.d, ofst);
        break;
    case film::GAMING:
        Out(f.g, ofst);
        break;
    default:
        ofst << "Unknown jenre data." << endl;
    }
    ofst << "The quotient equals " << Quotient(f) << ".\n";
}

//------------------------------------------------------------------------------
// Вычисление частного от деления года
// выхода фильма на количество символов
// в его названии

double Quotient(film& f) {
    return f.year / f.name.length();
}
