#include <streamio>

int main(){
  int x;
  std::cout << "Enter Number:";
  std::cin >> x;
  if(x%2==0){
    std::cout << "Even Number\n";
  }
  else{
    std::cout << "Odd Number\n";
  }
  return 0;
}
