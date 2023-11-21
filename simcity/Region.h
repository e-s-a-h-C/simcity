#ifndef REGION_H
#define REGION_H
#include <iostream>
#include <string>

using namespace std;

class Region
{
    private:
        char letter;
        int cellPop;

    public:
        Region();
        void SetCell(char l);
        char GetCell();
        void SetPop(int p);
        int GetPop();

};

#endif
