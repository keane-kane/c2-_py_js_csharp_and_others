#include <iostream>
#include <limits>
#include <memory>
 /*
 template <typename T>
 T sum(T a , T b ){
     return a+b;
 }
 [](auto a, auto b ){return a+b;}
   // std::cout<< std::numeric_limits<int>::max() << std::endl;
   auto sum{[](auto a, auto b ){return a + b ; }};
   std::cout<<sum(78, 7) <<std::endl;
  
   int a  =  19;
 int *p{nullptr};
  p= &a;
 std::cout<< *p <<std::endl;
 */

int main()
{
    std::unique_ptr<int> pnu{std::make_unique<int>(78)};
    std::cout << *pnu;
    return 0;
}