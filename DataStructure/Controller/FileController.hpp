//
//  FileController.hpp
//  DataStructure
//
//  Created by Martinson, Branton on 2/2/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include "/Users/bmar8200/Documents/AfternoonC++/DataStructure/DataStructure/Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};

#endif /* FileController_hpp */
