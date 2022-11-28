//@author: Efraim Nabil

#include <iostream>
#include "cube.h"

namespace uiuc{
    cube::cube(double length){
        length_ = length;
    }
    double cube::getLength() const{
        return length_;
    }
    double cube::getVolume() const{
        return length_*length_*length_;
    }
    double cube::getSurfaceArea(){
        return 6*length_*length_;
    }
    void cube::setLength(double length){
        length_ = length;
    }
}
