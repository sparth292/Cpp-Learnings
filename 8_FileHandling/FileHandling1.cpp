    #include <iostream>
    #include <fstream>
    #include <string>
    using namespace std;
    int main(){
    ofstream f_out;
    f_out.open("name.txt");
    f_out << "Hii ! \n";
    f_out << "I am Parth\n";
    f_out.close();
    return 0;
    }
