//
//  Field.hpp
//  test
//
//  Created by RAIDEMOT on 09.02.2021.
//

#ifndef Field_hpp
#define Field_hpp

#include <iostream>
#include <iomanip>

class Fiend
{
private:
    unsigned int size;
    char **ptrFiend;
    
    void initializeField();
    
public:
    Fiend(unsigned int size);
    ~Fiend();
    
    void paintOver(unsigned int x, unsigned int y);
    
    unsigned int getSize();
    
    friend std::ostream& operator << (std::ostream&, const Fiend&);
};


#endif /* Field_hpp */
