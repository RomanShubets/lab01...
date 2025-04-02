#ifndef MONEY_H
#define MONEY_H

struct Money {
    int grn;  
    short int kop; 
};

void mult(Money &a, int col);
void sum(Money &a, Money &b);
void m_round(Money &m);
void printMoney(Money a);

#endif 
