//
//  Controller.cpp
//  SampleProject
//
//  Created by Runyan, Jacob on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    
}

void Controller :: start()
{
    cout << "This is inside the start method? Cooleroo :D" << endl;
    int size = 101;
    int position = simpleHash("The quick brown fox jumped over the lazy dog!") % size;
    cout << position << endl;
}

long Controller :: simpleHash(string word)
{
    long hash = 0;
    for(int index = 0; index < word.length(); index++)
    {
        hash += (int)(word[index]);
    }
    return hash;
}
