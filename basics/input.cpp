#include<iostream>
#include<string>

int main(){
    std::string name;
    int age;

    std::cout<<"whats your name:";
    std::getline(std::cin>>std::ws,name);

    std::cout<<"whats your age";
    std::cin>>age;

    std::cout<<"hello "<<name<<'\n';
    std::cout<<"you are "<<age<<" years old ";

    return 0;

}