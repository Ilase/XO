
#include "node.hpp"

int main(){
  kf keymap =
  {{'O','?','X'},
   {'?','X','?'},
   {'X','O','X'}};

  std::cout << search_position(X_CHAR, keymap) << std::endl;
  return 0;
}
