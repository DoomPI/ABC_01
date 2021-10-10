//------------------------------------------------------------------------------
// container.cpp - �������� ������� ��������� ����������
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// ������������� ����������
void Init(container& c) {
    c.length = 0;
}

//------------------------------------------------------------------------------
// ������� ���������� �� ��������� (������������ ������)
void Clear(container& c) {
    for (int i = 0; i < c.length; i++) {
        delete c.cont[i];
    }
    c.length = 0;
}

//------------------------------------------------------------------------------
// ���� ����������� ���������� �� ���������� ������
void In(container& c, ifstream& ifst) {
    while (!ifst.eof()) {
        if ((c.cont[c.length] = In(ifst)) != 0) {
            c.length++;
        }
    }
}

//------------------------------------------------------------------------------
// ��������� ���� ����������� ����������
void InRnd(container& c, int size) {
    while (c.length < size) {
        if ((c.cont[c.length] = InRnd()) != nullptr) {
            c.length++;
        }
    }
}

//------------------------------------------------------------------------------
// ����� ����������� ���������� � ��������� �����
void Out(container& c, ofstream& ofst) {
    ofst << "The container has " << c.length << " elements." << endl;
    for (int i = 0; i < c.length; i++) {
        ofst << i << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

//------------------------------------------------------------------------------
// ���������� ����� ���������� ���� ����� � ����������
double Average(container& c) {
    double average = 0.0;
    for (int i = 0; i < c.length; i++) {
        average += Quotient(*(c.cont[i]));
    }
    return average / c.length;
}
