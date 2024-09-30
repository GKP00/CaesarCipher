#include <string>
#include <string_view>

void CaesarCipher(std::string& input, int shift)
{
  char base;
  for(char& c : input)
  {
    if(c >= 'A' && c <= 'Z')
      base = 'A';
    else if(c >= 'a' && c <= 'z')
      base = 'a';
    else
      continue;

    c = base + (((c - base) + shift) % 26);
  }
}

std::string CaesarCipher(std::string_view input, int shift)
{
  std::string output{input};
  CaesarCipher(output, shift);
  return output;
}
