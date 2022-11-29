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
    std::ifstream ifs("MyTextss.txt");
    if(!ifs)
    {
        std::cout<<"The file does not exist!"<<std::endl;
        return;
    }
    
    std::string str;
    int x;
    ifs>>str>>x;
    ifs.close();
    
    std::cout<<"String:"<<str<<" Number:"<<x<<std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    fwrite();
    fread();
    return 0;
}
