#include <iostream>
#include "Field.hpp"
#include "Robot.hpp"

int main() {
    
    using namespace std;
    
    Fiend fiend(10);
    Robot robot(&fiend);
    
    for (unsigned int i = 0; i < fiend.getSize() - 1; i++)
    {
        robot.paintOver();
        robot.goDown();
        robot.goRight();
        robot.paintOver();
    }
    
    for (unsigned int i = 0; i < fiend.getSize() - 1; i++)
    {
        robot.goUp();
    }
    
    for (unsigned int i = 0; i < fiend.getSize() - 1; i++)
    {
        robot.paintOver();
        robot.goDown();
        robot.goLeft();
        robot.paintOver();
    }
    
    
    cout << fiend;
    
    return 0;
}

