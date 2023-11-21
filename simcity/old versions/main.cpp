#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream f;
    string line;
    string name;
    int timeLimit;
    int refreshRate;
    int i = 0;
    
    string config;
    cout << "Enter config file name: ";
    getline(cin, config);

    f.open(config);
    while(!f.eof())
    {
        f.ignore(999, ':'); //ignores everything up to the 'i'
        getline(f, line); 
        if(i == 0)
        {
            name = line; //sets region name to variable name
        } else if(i == 1)
        {
            timeLimit = stoi(line); //sets time limit by converting line variable to an integer
        } else if(i == 2)
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

    inputfile.open(name);          //opens the file necessary to be read

    cout << "Region layout: " << name << endl;
    cout << "Time Limit: " << timeLimit << endl;
    cout << "Refresh Rate: " << refreshRate << endl;

    while (!inputfile.eof())                //reads until the end of the file
    {
        string letter;                      //chose a string instead of character because i didnt want some of characters to display weird
        getline(inputfile, letter, ',');    //reads in until end of line, added ',' which is necessary for the string to ignore the commas
        cout << letter;                     //test to outputs the letters/symbols in the file

    }

    cout << "Available Workers: " << numWorkers << endl;
    cout << "Available Goods: " << numGoods << endl;

    inputfile.close();


    return 0;
}
