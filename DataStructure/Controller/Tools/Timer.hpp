//
//  Timer.hpp
//  DataStructure
//
//  Created by Martinson, Branton on 1/31/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <iostream>
#include <time.h>
#include <assert.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
