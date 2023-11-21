#include "FunctionHeader.h"

void DisplayCity(vector<vector<Region> > regionIn)
{    
    for(int r = 0; r < regionIn.size(); r++)
    {
        for(int c = 0; c < regionIn[r].size(); c++)
        {
            if(regionIn[r][c].GetPop() == 0)
            {
                cout << regionIn[r][c].GetCell();
            } else {
                cout << regionIn[r][c].GetPop();
            }
            if(c != regionIn[r].size() - 1)
            {
                cout << ",";
            }
        }
        cout << endl;
    }
}