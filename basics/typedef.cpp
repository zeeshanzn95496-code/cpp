#include<iostream>
#include<vector>

//    typedef std::vector<std::pair<std::string, int>>pairlist_t;  //_t is last to define its type as typedef

typedef std::string text_t;
typedef int number_t;

int main(){

   text_t firstname = "shaikh";
   number_t age = 19;

   std::cout<<firstname<<'\n';
   std::cout<<age<<'\n';
    return 0;
}