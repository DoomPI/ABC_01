#ifndef __documentary__
#define __documentary__

//------------------------------------------------------------------------------
// documentary.h - �������� �������� ��������������� ������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"

// �������������� �����
struct documentary {
    int length; // ������������ ������
};

// ���� ���������� ��������������� ������ �� �����
void In(documentary& d, ifstream& ifst);

// ��������� ���� ���������� ��������������
void InRnd(documentary& d);

// ����� ���������� �������������� � ������������� �����
void Out(documentary& d, ofstream& ofst);

#endif //__documentary__
