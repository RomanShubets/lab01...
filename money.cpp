#include "money.h"
#include <iostream>

void mult(Money &a, int col, Money &result) {
    result.grn = a.grn * col;
    result.kop = a.kop * col;

    // Логіка для коригування копійок, якщо їх більше 100
    result.grn += result.kop / 100;
    result.kop %= 100;
}

void sum(Money &a, Money &b) {
    a.grn += b.grn;
    a.kop += b.kop;
    if (a.kop >= 100) {
        a.grn += a.kop / 100;
        a.kop %= 100;
    }
}

// округлення до найближчих 10 копійок
void m_round(Money &m) {
    int totalKop = m.grn * 100 + m.kop;  // Переводимо всю суму в копійки

   // Округлення до найближчих 10 копійок
   int roundedTotalKop = (totalKop + 5) / 10 * 10; 

   // Якщо залишок менше 5, округляємо до 0
   if (totalKop % 10 < 5) {
       roundedTotalKop = totalKop / 10 * 10;
    }

    m.grn = roundedTotalKop / 100;    
    m.kop = roundedTotalKop % 100;   

}

void printMoney(Money a) {
    std::cout << a.grn << " UAH " << a.kop << " kop" << std::endl;
}
