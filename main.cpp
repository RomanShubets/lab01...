#include <iostream>
#include <fstream>
#include <string>
#include "money.h"  

using namespace std;

int main() {
    ifstream pfile("test.txt");
    if (!pfile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    
    string str;
    Money summ = {0, 0};

    while (getline(pfile, str)) {
        cout << str << endl;
        
        size_t pos1 = str.find(",");
        size_t pos2 = str.find(",", pos1 + 1);
        
        if (pos1 == string::npos || pos2 == string::npos) {
            continue;
        }
        
        Money a;
        a.grn = stoi(str.substr(0, pos1));
        a.kop = stoi(str.substr(pos1 + 1, pos2 - pos1 - 1));
        int col = stoi(str.substr(pos2 + 1));

        mult(a, col);  
        sum(summ, a);   
    }
    
    cout << "\nGeneral sum: ";
    printMoney(summ);
    cout << "Need to pay: ";
    m_round(summ);   // округлення
    printMoney(summ); 

    pfile.close();
    return 0;
}
