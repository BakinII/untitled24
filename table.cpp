//
// Created by иван on 11.01.2023.
//

#include "table.h"
void Tree::insert(std::string a, std::string b,std::string c,std::string d,bool e){
    count++;
    if(!root) root=new Node(a,b,c,d,e);
    else root->insert(a,b,c,d,e);
}

void Tree::print(){
    root->print();
}
void Tree::delldata(std::string a) {
    root->delldata(a);
}
void Tree::searchrub(std::string a){
    root->searchrub(a);
}