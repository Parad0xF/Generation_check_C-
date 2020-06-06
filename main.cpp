//
//  main.cpp
//  ARM_Project1
//
//  Created by Baron on 3/24/19.
//  Copyright © 2019 Baron. All rights reserved.
//

#include <iostream>
#include "Generation.h"
using namespace std;

int main() {

    Generation<int> a;

    a._getGenCoficient();
    a._DisplayArray();
    a._lostGen();
    a._greastGen();
    a._bbBoomer();
    a._genX();
    a._genY();
    a._genZ();
    a._OutOfRange();

    return 0;
};
