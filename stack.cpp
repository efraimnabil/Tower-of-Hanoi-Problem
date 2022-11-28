// @author : Efraim Nabil
#include "header-files/stack.h"
#include <bits/stdc++.h>
using namespace std;

void Stack::push(const cube & cube){
    cubes_.push_back(cube);
}

cube Stack::pop(){
    cube temp = cubes_.back();
    cubes_.pop_back();
    return temp;
}

cube & Stack::top(){
    return cubes_.back();
}

int Stack::size() const{
    return cubes_.size();
}

ostream & operator<<(ostream & os, const Stack & stack){
    for(int i = 0; i < stack.cubes_.size(); i++){
        os << stack.cubes_[i].getLength() << " ";
    }
    os << endl;
    return os;
}