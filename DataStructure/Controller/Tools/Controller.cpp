//
//  Controller.cpp
//  DataStructure
//
//  Created by Martinson, Branton on 1/31/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#include "Controller.hpp"


using namespace std;

void Controller :: start()
{
    findMaxAndMin();
    
    
}

void Controller::findMaxAndMin()
{
    Timer searchTimer;
    searchTimer .startTimer();
    vector<CrimeData myData = FileController :: readCrimeDataToVector("/Users/bmar8200/Documents/AfternoonC++/DataStructure/DataStructure/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if(myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        
        if (myData [maxIndex] myData[index])
        {
            maxIndex = index;
        }
    }
}
