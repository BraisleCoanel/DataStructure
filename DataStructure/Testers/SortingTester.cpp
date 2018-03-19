//
//  SortingTester.cpp
//  DataStructure
//
//  Created by Martinson, Branton on 3/15/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#include "SortingTester.hpp"
void SortingTester :: quickSort(vector<CrimeData> & data, int low, int high)
{
    if (low<high)
    {
        int partitionPoint = partition(data, low, high);
        quickSort(data, low, partitionPoint - 1);
        quickSort(data, partitionPoint + 1, high);
    }
}
