#include "RegionNode.h"
void readSimConfig(string fileName){
string line = "";
string temp = "";
ifstream file(fileName);
if(file.is_open()){
while(!file.eof()){
getline(file, line);
temp = line.substr(line.find(':'));
}
}
else{
    cout << "The file name is wrong or does not exist";
}
}
