#include "CaesarCipher.hpp"

#include <iostream>
#include <string>

int main(int argc, const char** argv)
{
  if(argc != 2)
  {
    std::cerr << "usage: " << argv[0] << ": <shift> <<< input" << '\n';
    return -1;
  }

  int shift = std::stoi(argv[1]);

  std::string buf;
  while(std::cin >> buf)
  {
    CaesarCipher(buf, shift);
    std::cout << buf;
  }

  return 0;
}
