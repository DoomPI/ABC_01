#ifndef __film__
#define __film__

//------------------------------------------------------------------------------
// film.h - �������� ����� �������� ������
//------------------------------------------------------------------------------

#include "cartoon.h"
#include "documentary.h"
#include "gaming.h"

//------------------------------------------------------------------------------
// ���������, ���������� ��� ������
struct film {
    film() {}
    film(string name, int year) {
        this->name = name;
        this->year = year;
    }
    ~film() {}
    string name;
    int year;
    // �������� ������ ��� ������� �����
    enum jenre { CARTOON, DOCUMENTARY, GAMING };
    jenre j; // ����
    // ������������ ������������
    union { 
        cartoon c;
        documentary d;
        gaming g;
    };

};

// ���� ������ ������
film* In(ifstream& ifdt);

// ��������� ���� ������ ������
film* InRnd();

// ����� ������ ������
void Out(film& f, ofstream& ofst);

// ���������� �������� �� ������� ����
// ������ ������ �� ���������� ��������
// � ��� ��������
double Quotient(film& f);

#endif //__film__
