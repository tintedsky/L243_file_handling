//
//  main.cpp
//  L243_File_Handling
//
//  Created by Hongbo Niu on 2022-11-27.
//

#include <iostream>
#include <fstream>
#include <string>
void fwrite()
{
    std::ofstream ofs("MyText.txt", std::ios::app);
    ofs<<"Hello"<<std::endl;
    ofs<<255<<std::endl;
    ofs.close();
    return;
}

void fread()
{
    std::ifstream ifs;
    ifs.open("MyText.txt");
    if(!ifs.is_open())
    {
        std::cout<<"File cannot be opened"<<std::endl;
    }
    
    std::string str;
    while(!ifs.eof())
    {
        ifs>>str;
        std::cout<<str<<std::endl;
    }
    
    std::cout<<"end of file"<<std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    fwrite();
    fread();
    return 0;
}
