//
//  LinkedListTester.hpp
//  DataStructure
//
//  Created by Martinson, Branton on 2/22/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp

#include <iostream>
#include "../Model/Node/Linear/List.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"

class LinkedListTester
{
public:
    void testListBasics();
    void testListWithData();
};


#endif /* LinkedListTester_hpp */

void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
}
