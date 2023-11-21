#include "FunctionHeader.h"

void Residential(vector<vector<Region> >& regionIn, int& workers)
{
    int adjCount; //keeps track of adjacent tile count
    for(int r = 0; r < regionIn.size(); r++)
    {
        for(int c = 0; c < regionIn[r].size(); c++)
        {
            if(regionIn[r][c].GetCell() == 'R')
            {
                if(regionIn[r][c].GetPop() == 0)
                {
                    if(regionIn[r-1][c-1].GetCell() == 'T' || regionIn[r-1][c-1].GetCell() == '#' || regionIn[r-1][c-1].GetPop() >= 1)
                    {
                        regionIn[r][c].SetPop(1);
                        workers++;
                    }
                    else if(regionIn[r-1][c].GetCell() == 'T' || regionIn[r-1][c].GetCell() == '#' || regionIn[r-1][c].GetPop() >= 1)
                    {
                        regionIn[r][c].SetPop(1);
                        workers++;
                    }
                    else if(regionIn[r-1][c+1].GetCell() == 'T' || regionIn[r-1][c+1].GetCell() == '#' || regionIn[r-1][c+1].GetPop() >= 1)
                    {
                        regionIn[r][c].SetPop(1);
                        workers++;
                    }
                    else if(regionIn[r][c-1].GetCell() == 'T' || regionIn[r][c-1].GetCell() == '#' || regionIn[r][c-1].GetPop() >= 1)
                    {
                        regionIn[r][c].SetPop(1);
                        workers++;
                    }
                    else if(regionIn[r][c+1].GetCell() == 'T' || regionIn[r][c+1].GetCell() == '#' || regionIn[r][c+1].GetPop() >= 1)
                    {
                        regionIn[r][c].SetPop(1);
                        workers++;
                    }
                    else if(regionIn[r+1][c-1].GetCell() == 'T' || regionIn[r+1][c-1].GetCell() == '#' || regionIn[r+1][c-1].GetPop() >= 1)
                    {
                        regionIn[r][c].SetPop(1);
                        workers++;
                    }
                    else if(regionIn[r+1][c].GetCell() == 'T' || regionIn[r+1][c].GetCell() == '#' || regionIn[r+1][c].GetPop() >= 1)
                    {
                        regionIn[r][c].SetPop(1);
                        workers++;
                    }
                    else if(regionIn[r+1][c+1].GetCell() == 'T' || regionIn[r+1][c+1].GetCell() == '#' || regionIn[r+1][c+1].GetPop() >= 1)
                    {
                        regionIn[r][c].SetPop(1);
                        workers++;
                    }
                }

                if(regionIn[r][c].GetPop() == 1)
                {
                    adjCount = 0;
                    if(regionIn[r-1][c-1].GetPop() >= 1)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r-1][c].GetPop() >= 1)
                    {
                        adjCount++;;
                    }
                    else if(regionIn[r-1][c+1].GetPop() >= 1)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r][c-1].GetPop() >= 1)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r][c+1].GetPop() >= 1)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c-1].GetPop() >= 1)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c].GetPop() >= 1)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c+1].GetPop() >= 1)
                    {
                        adjCount++;
                    }

                    if(adjCount >= 2)
                    {
                        regionIn[r][c].SetPop(2);
                        workers++;
                    } 
                }

                if(regionIn[r][c].GetPop() == 2)
                {
                    adjCount = 0;
                    if(regionIn[r-1][c-1].GetPop() >= 2)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r-1][c].GetPop() >= 2)
                    {
                        adjCount++;;
                    }
                    else if(regionIn[r-1][c+1].GetPop() >= 2)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r][c-1].GetPop() >= 2)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r][c+1].GetPop() >= 2)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c-1].GetPop() >= 2)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c].GetPop() >= 2)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c+1].GetPop() >= 2)
                    {
                        adjCount++;
                    }

                    if(adjCount >= 4)
                    {
                        regionIn[r][c].SetPop(3);
                        workers++;
                    }
                }

                if(regionIn[r][c].GetPop() == 3)
                {
                    adjCount = 0;
                    if(regionIn[r-1][c-1].GetPop() >= 3)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r-1][c].GetPop() >= 3)
                    {
                        adjCount++;;
                    }
                    else if(regionIn[r-1][c+1].GetPop() >= 3)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r][c-1].GetPop() >= 3)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r][c+1].GetPop() >= 3)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c-1].GetPop() >= 3)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c].GetPop() >= 3)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c+1].GetPop() >= 3)
                    {
                        adjCount++;
                    }

                    if(adjCount >= 6)
                    {
                        regionIn[r][c].SetPop(4);
                        workers++;
                    }
                }

                if(regionIn[r][c].GetPop() == 4)
                {
                    adjCount = 0;
                    if(regionIn[r-1][c-1].GetPop() >= 4)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r-1][c].GetPop() >= 4)
                    {
                        adjCount++;;
                    }
                    else if(regionIn[r-1][c+1].GetPop() >= 4)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r][c-1].GetPop() >= 4)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r][c+1].GetPop() >= 4)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c-1].GetPop() >= 4)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c].GetPop() >= 4)
                    {
                        adjCount++;
                    }
                    else if(regionIn[r+1][c+1].GetPop() >= 4)
                    {
                        adjCount++;
                    }

                    if(adjCount >= 8)
                    {
                        regionIn[r][c].SetPop(5);
                        workers++;
                    }
                }    
            }
        }
    }
}