#include<bits/stdc++.h>
using namespace std;

/* WARNING: Unknown calling convention yet parameter storage is locked */
/* ox() */

int ox(void)

{
  basic_ostream *pbVar1;
  
  pbVar1 = std::operator<<((basic_ostream *)std::cout,'B');
  pbVar1 = std::operator<<(pbVar1,'D');
  pbVar1 = std::operator<<(pbVar1,'S');
  pbVar1 = std::operator<<(pbVar1,'E');
  pbVar1 = std::operator<<(pbVar1,'C');
  pbVar1 = std::operator<<(pbVar1,'{');
  pbVar1 = std::operator<<(pbVar1,'H');
  pbVar1 = std::operator<<(pbVar1,'u');
  pbVar1 = std::operator<<(pbVar1,'r');
  pbVar1 = std::operator<<(pbVar1,'r');
  pbVar1 = std::operator<<(pbVar1,'a');
  pbVar1 = std::operator<<(pbVar1,'h');
  pbVar1 = std::operator<<(pbVar1,'_');
  pbVar1 = std::operator<<(pbVar1,'U');
  pbVar1 = std::operator<<(pbVar1,'_');
  pbVar1 = std::operator<<(pbVar1,'g');
  pbVar1 = std::operator<<(pbVar1,'0');
  pbVar1 = std::operator<<(pbVar1,'t');
  pbVar1 = std::operator<<(pbVar1,'_');
  pbVar1 = std::operator<<(pbVar1,'i');
  pbVar1 = std::operator<<(pbVar1,'t');
  pbVar1 = std::operator<<(pbVar1,'_');
  pbVar1 = std::operator<<(pbVar1,'b');
  pbVar1 = std::operator<<(pbVar1,'u');
  pbVar1 = std::operator<<(pbVar1,'d');
  pbVar1 = std::operator<<(pbVar1,'d');
  pbVar1 = std::operator<<(pbVar1,'y');
  std::operator<<(pbVar1,'}');
  return 0;
}


int main(void)

{
  basic_ostream *this;
  int aiStack72 [11];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0x159fd8;
  local_c = 1;
  std::operator__((basic_ostream *)std::cout,
                  "\nWelcome to Flag-Box!\n\nPlease enter your 8 digit code to grab the flag:");
  std::basic_istream<char,std::char_traits<char>>::operator__
            ((basic_istream_char_std__char_traits_char__ *)std::cin,&local_1c);
  for (local_10 = 8; -1 < local_10; local_10 = local_10 + -1) {
    aiStack72[local_10] = local_1c % 10;
    local_1c = local_1c / 10;
  }
  for (local_14 = 1; local_14 < 9; local_14 = local_14 + 1) {
    local_c = aiStack72[local_14] * local_c;
  }
  if (local_c == local_18) {
    this = std::operator__((basic_ostream *)std::cout," ");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)this,
               std::endl_char_std__char_traits_char__);
    ox();
  }
  else {
    std::operator__((basic_ostream *)std::cout,"\nSorry, wrong Code!\n\nBetter luck next time!");
  }
  return 0;
}

