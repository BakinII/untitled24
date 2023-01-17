//#include <iostream>
#include "table.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Tree dict;
//формат даты год.месяц.день
    dict.insert("22.05.11", "продам гараж","недвижемость","89235555555",1);
    dict.insert("22.05.12","куплю доски","материалы","89235556789",0);
    dict.insert("22.07.10", "продам гараж","недвижемость","89235551234",1);
    dict.insert("22.06.05", "куплю машину","транспорт","89235555789",0);
    dict.print();
    std::cout<<dict.count<<std::endl;
    dict.delldata("22.05.11");
    dict.print();
    return 0;

}
