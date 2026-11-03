#include<iostream>

namespace first{
    int x =1;
}
namespace second{
    int x = 2;
}

int main(){
  int x= 0;

  std::cout<<first::x<<'\n';
  std::cout<<second::x<<'\n';
  std::cout<<x<<std::endl;
  return 0;
}

/*
namespace second{
    int x = 2;
}

int main(){

using namespace second;

  std::cout<<x<<'\n';
   the output will be 2 
  return 0;
}
*/