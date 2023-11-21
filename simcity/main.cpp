/*
Group: Group 9 section 002
Instructor: Prof. Chambers
Date: November 4, 2022
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Region.h"
#include "FunctionHeader.h"

using namespace std;

void DisplayGroup();        //function declaration of class and group information  

int main()
{
    DisplayGroup();
    ifstream f;
    string line;
    string name;
    int timeLimit;
    int refreshRate;
    int i = 0;
    
    string config;
    cout << "Starting simulation" << endl;
    cout << "Enter the configuration file name: ";
    getline(cin, config);

    f.open(config);
    while(!f.eof())
    {
        f.ignore(999, ':'); //ignores everything up to the 'i'
        getline(f, line); 
        if(i == 0)
        {
            name = line; //sets region name to variable name
        } 
        else if(i == 1)
        {
            timeLimit = stoi(line); //sets time limit by converting line variable to an integer
        } 
        else if(i == 2)
        {
            refreshRate = stoi(line); //sets refresh rate by converting line variable to integer
        }
        i++; //used to check line in config file

    }
    f.close();

    int numWorkers = 0;
    int numGoods = 0;
    int pollutionCount = 0;

    int iterationCount = 0; //keeps track iterations through simulation

    ifstream inputfile;
    vector<vector<Region> >region;

    i = 0;
    int j = 0;
    
    inputfile.open(name);          //opens the file necessary to be read

    cout << "Region layout: " << name << endl;
    cout << "Time Limit: " << timeLimit << endl;
    cout << "Refresh Rate: " << refreshRate << endl;

    string letters;

    while (getline(inputfile, letters))
    {                     
        vector<Region> regions;
        Region r;

        for(char &c : letters)
        {
            if(c != ',')
            {
                r.SetCell(c);
                regions.push_back(r);
            }
        }

        region.push_back(regions);

        //cout << letter << ",";                     //test to outputs the letters/symbols in the file

    }
    inputfile.close();

    DisplayCity(region); //displays initial city

    cout << "\nAvailable Workers: " << numWorkers << endl;
    cout << "Available Goods: " << numGoods << endl;
    cout << "Total Pollution: " << pollutionCount << endl;

    int x = 0; //counts iterations through program
    int y; //counts along with refreshRate

    while(x < timeLimit)
    {
        for(y = 0; y < refreshRate; y++)
        {
            Residential(region, numWorkers);
            Commercial();
            Industrial();
            x++;
        }
        DisplayCity(region); //dispalys city after iterations in refreshRate
        cout << "Available Workers: " << numWorkers << endl;
        cout << "Available Goods: " << numGoods << endl;
        cout << "Total Pollution: " << pollutionCount << endl;
    }

    return 0;
}



void DisplayGroup()         //function definition; displays the group members and class information
{
    cout << "+-----------------------------------------------------------------+" << endl;
    cout << "|                    Computer Science and Engineering             |" << endl;
    cout << "|               CSCE 2110 - Foundations of Data Structures        |" << endl;
    cout << "|                          Project #1 SimCity                     |" << endl;
    cout << "|                                                                 |" << endl;
    cout << "|                          Section 211 Group 9                    |" << endl;
    cout << "|               Angel Montenegro angelmontenegro@my.unt.edu       |" << endl;
    cout << "|               Chase Nuemann    chaseneumann@my.unt.edu          |" << endl;
    cout << "|               Aaron Jones      aaronjones8@my.unt.edu           |" << endl;
    cout << "+-----------------------------------------------------------------+" << endl;
}