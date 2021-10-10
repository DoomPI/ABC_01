//------------------------------------------------------------------------------
// cartoon.cpp - �������� ������� ��������� ������ �����������
//------------------------------------------------------------------------------

#include "cartoon.h";

//------------------------------------------------------------------------------
// ���� ���������� ������ �����������
void In(cartoon& c, ifstream& ifst) {
    int value;
    ifst >> value;
    switch (value) {
    case 1:
        c.t = cartoon::DRAWN;
    case 2:
        c.t = cartoon::PLASTICINE;
    case 3:
        c.t = cartoon::STOP_MOTION;
    default:
        c.t = cartoon::COMPUTER;
    }
}

// ��������� ���� ������ �����������
void InRnd(cartoon& c) {
    int value = RandomType();
    switch (value) {
    case 1:
        c.t = cartoon::DRAWN;
    case 2:
        c.t = cartoon::PLASTICINE;
    case 3:
        c.t = cartoon::STOP_MOTION;
    default:
        c.t = cartoon::COMPUTER;
    }
}

//------------------------------------------------------------------------------
// ����� ������ ����������� � �����
void Out(cartoon& c, ofstream& ofst) {
    switch (c.t) {
    case 0:
        ofst << "It is a cartoon. It was created by using drawn method.\n";
    case 1:
        ofst << "It is a cartoon. It was created by using plasticine method.\n";
    case 2:
        ofst << "It is a cartoon. It was created by using stop motion method.\n";
    default:
        ofst << "It is a cartoon. It was created by using computer method.\n";
    }
}
