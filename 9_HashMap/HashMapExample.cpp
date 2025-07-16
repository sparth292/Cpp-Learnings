#include <iostream>
#include <unordered_map>
#include <string>
int main(){
    std::cout << "HashMap" << std::endl;
    
    std::unordered_map<int,std::string> mapp = 
    {{1,"Parth"},{2,"Jay"}};

    for(auto i : mapp){
        std::cout << "Roll No : " << i.first << std::endl;
        std::cout << "Name : " << i.second << std::endl;
        
    }
    
}
