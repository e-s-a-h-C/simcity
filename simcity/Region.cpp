#include "Region.h"

Region::Region()
{
    letter = ' ';
    cellPop = 0;
}

void Region::SetCell(char l)
{
    letter = l;
}
char Region::GetCell()
{
    return letter;
}

void Region::SetPop(int p)
{
    cellPop = p;
}
int Region::GetPop()
{
    return cellPop;
}