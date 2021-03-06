//
//  RecursionTest.cpp
//  DataStructure
//
//  Created by Martinson, Branton on 3/5/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if (number == 0 || number == 1) //If the number isn't 0 or 1 it goes to else
    {
        return 1;
    }
    else
    {
        cout << "Reached a recursion case with: " << number - 1 << " and " << number - 2 << endl;
        return fib (number - 1) + fib (number - 2);
    }
}

//string RecursionTester :: mystery(string word)
//{
//
//}

void RecursionTester :: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "Testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

//void RecursionTester :: testRacursionString()
//{
//
//}

