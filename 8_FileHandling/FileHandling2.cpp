#include <fstream>
#include <iostream>
int main(){
    std::ifstream f_in;
    char ch;
    f_in.open("file.txt");
    ch = f_in.get();
    while(!(f_in.eof())){
        std::cout << ch;
        ch = f_in.get();
    }
    f_in.close();
    return 0;
}
