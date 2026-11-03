#include<iostream>

int main(){
  const double pi = 3.141596;
  const int light_speed = 299792458;
  const int width = 1920;
  const int height = 1080;
    
    double radius = 10;
    double circumference = 2*pi*radius;

    std::cout << "light_speed="<< light_speed  <<" "<< "pi="<< pi <<" " <<" "<<"width="<<width<<" "<<"height="<<height <<" "<< "cm";
    return 0;
}
