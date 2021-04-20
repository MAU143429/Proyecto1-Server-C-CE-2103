//
// Created by mau14 on 12/4/21.
//

#ifndef PROYECTO_1_DATOS_II_SERVER_C__RECYCLING_MALLOC_H
#define PROYECTO_1_DATOS_II_SERVER_C__RECYCLING_MALLOC_H

#include "SimplyList.h"

template<typename T>
class Recycling_malloc{

private:
    SimplyList<T> Recycling;
public:

    bool Empty(){
        return this->Recycling.getLen() == 0;
    }

    void addAddress(T element){
        this->Recycling.append(element);
    }

    T getFirst(){
        return this->Recycling.getHead()->getValue();
    }

    void delFirst(){
        this->Recycling.delHead();
    }
};

#endif //PROYECTO_1_DATOS_II_SERVER_C__RECYCLING_MALLOC_H