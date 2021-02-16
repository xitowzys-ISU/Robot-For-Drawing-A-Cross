//
//  Robot.cpp
//  test
//
//  Created by RAIDEMOT on 09.02.2021.
//

#include "Robot.hpp"

Robot::Robot(Fiend *ptrFiend)
{
    fiend = ptrFiend;
    
    x = 0;
    y = 0;
}

Robot::~Robot()
{
    fiend = nullptr;
}

void Robot::goUp()
{
    y--;
}

void Robot::goDown()
{
    y++;
}

void Robot::goRight()
{
    x++;
}

void Robot::goLeft()
{
    x--;
}

void Robot::goStartPoint()
{
    x = 0;
    y = 0;
}

void Robot::paintOver()
{
    fiend->paintOver(x, y);
}

void Robot::printCoordinates()
{
    std::cout << "x -> " << x << "\n";
    std::cout << "y -> " << y << "\n";
}
