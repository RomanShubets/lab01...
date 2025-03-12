#ifndef MONEY_H
#define MONEY_H

// Оголошення структури Money та функцій
struct Money {
    int grn;
    int kop;
};

void mult(Money a, int col);
void sum(Money a, Money b);
void m_round(Money a);
void printMoney(Money a);

#endif // MONEY_H
