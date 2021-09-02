#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<utility>

int main() {
    std::string str = "hello";
    std::vector<std::string> a;
    a.push_back(str);
    std::cout<<"Before move,  str = "<<str<<std::endl;
    a.push_back(std::move(str));
    std::cout << "after move, str = " <<str <<std::endl;
    std::cout << "a = "<< a[0]<<' '<<a[1] << std::endl;

    return 0;
}