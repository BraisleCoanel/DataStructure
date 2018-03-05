//
//  RecursionTest.hpp
//  DataStructure
//
//  Created by Martinson, Branton on 3/5/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#ifndef RecursionTest_hpp
#define RecursionTest_hpp

#include <iostream>
#include <string>
#include "../Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecursionNumbers();
    void textRecursionString();
};

#endif /* RecursionTest_hpp */
