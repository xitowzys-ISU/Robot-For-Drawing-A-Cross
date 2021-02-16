//
//  Robot.hpp
//  test
//
//  Created by RAIDEMOT on 09.02.2021.
//

#ifndef Robot_hpp
#define Robot_hpp

#include <iostream>
#include "Field.hpp"

#endif /* Robot_hpp */

class Robot
{
private:
    // Указатель на поле
    Fiend *fiend;
    
    // Координаты робота
    unsigned int x;
    unsigned int y;
    
public:
    
    Robot(Fiend *ptrFiend);
    
    ~Robot();
    
    void goUp();
    void goRight();
    void goLeft();
    void goDown();
    
    void goStartPoint();
    
    void paintOver();
    
    // Debug
    void printCoordinates();
    
};
