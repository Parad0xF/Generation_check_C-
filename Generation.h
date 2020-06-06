//
//  Generation.h
//  ARM_Project1
//
//  Created by Baron on 3/24/19.
//  Copyright © 2019 Baron. All rights reserved.
//

#ifndef Generation_h
#define Generation_h

template<class T>
class Generation{
    
private:
    static const int _sizeArray = 3;
    int _arry[_sizeArray];
    
public:
    ~Generation();
    int _getGenCoficient();
    void _DisplayArray()const;
    void _lostGen()const;
    void _greastGen()const;
    void _bbBoomer()const;
    void _genX()const;
    void _genY() const;
    void _genZ()const;
    void _OutOfRange()const;
    
    
};
#include "1.cpp"
#endif /* Generation_h */
