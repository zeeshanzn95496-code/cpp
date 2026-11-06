#include<iostream>

int main(){
    int age;
    std::cout<<"enter your age: ";
    std::cin>>age;

    if(age>=18){
        std::cout<<"welcome to hte site";
    }
    else if(age<=0){
        std::cout<<"is this funny!!";
    }
    else if(age>100){
        std::cout<<"you are too old ";
    }
    else{
        std::cout<<"sorry your'e not old enough to accesss our site";
    }
    return 0;
}