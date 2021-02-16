//
//  Field.cpp
//  test
//
//  Created by RAIDEMOT on 09.02.2021.
//

#include "Field.hpp"

Fiend::Fiend(unsigned int size)
{
    this->size = size;
    
    ptrFiend = new char* [this->size];
    
    for (int count = 0; count < size; count++)
        ptrFiend[count] = new char [this->size];
    
    initializeField();
}

Fiend::~Fiend()
{
    for(int i = 0; i < size; ++i)
        delete[] ptrFiend[i];
    delete[] ptrFiend;
}

void Fiend::initializeField()
{
    for (int countRow = 0; countRow < size; countRow++)
            for (int countColumn = 0; countColumn < size; countColumn++)
                ptrFiend[countRow][countColumn] = '#';
}

void Fiend::paintOver(unsigned int x, unsigned int y)
{
    ptrFiend[y][x] = '.';
}

unsigned int Fiend::getSize()
{
    return size;
}

std::ostream& operator << (std::ostream& out, const Fiend& fiend) {
    for (unsigned int count_row = 0; count_row < fiend.size; count_row++)
    {
        for (unsigned int count_column = 0; count_column < fiend.size; count_column++)
            out << std::setw(4) << std::setprecision(2) << fiend.ptrFiend[count_row][count_column] << "   ";
        out << "\n";
    }
    
    return out;
}

