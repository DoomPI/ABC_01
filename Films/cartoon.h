#ifndef __cartoon__
#define __cartoon__

//------------------------------------------------------------------------------
// catroon.h - �������� �������� �����������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

// ����������
struct cartoon {
    enum type { DRAWN, STOP_MOTION, PLASTICINE, COMPUTER };
    type t;
};

// ���� ���������� ����������� �� �����
void In(cartoon& c, ifstream& ifst);

// ��������� ���� ���������� �����������
void InRnd(cartoon& c);

// ����� ���������� ����������� � ������������� �����
void Out(cartoon& c, ofstream& ofst);

#endif //__cartoon__
