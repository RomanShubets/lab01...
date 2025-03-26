#include "money.h"
#include <iostream>

void mult(Money &a, int col) {
    a.grn *= col;
    a.kop *= col;

}


void sum(Money &a, Money &b) {
    a.grn += b.grn;
    a.kop += b.kop;
    
}

void m_round(Money &m) {
    int totalKop = m.grn * 100 + m.kop;  

   int roundedTotalKop = (totalKop + 5) / 10 * 10; 

    m.grn = roundedTotalKop / 100;    
    m.kop = roundedTotalKop % 100;   

}

void printMoney(Money a) {
    std::cout << a.grn << " UAH " << a.kop << " kop" << std::endl;
}
