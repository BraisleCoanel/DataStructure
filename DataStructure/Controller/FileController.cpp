//
//  FileController.cpp
//  DataStructure
//
//  Created by Martinson, Branton on 2/2/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if (dataFile.is_open())
    {
        //Keep reading til you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from yhe CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Extend header row
            if (rowCount !=0)
            {
                //create a CrimeData instacnce from the line. Exclude a blank line (usually if opened separatley)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}
