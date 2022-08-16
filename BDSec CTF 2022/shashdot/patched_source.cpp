#include<bits/stdc++.h>
using namespace std;

void rrqqq(void)
{
  long in_FS_OFFSET;
  int local_4c;
  char local_48 [32];
  char local_28 [24];
  long local_10;

  local_28[0] = '\x01';
  local_28[1] = 3;
  local_28[2] = 0x12;
  local_28[3] = 4;
  local_28[4] = 2;
  local_28[5] = 0x3a;
  local_28[6] = 0x28;
  local_28[7] = 0x1e;
  local_28[8] = 0xff;
  local_28[9] = 0xc;
  local_28[10] = 0x1e;
  local_28[11] = 0xff;
  local_28[12] = 0x1e;
  local_28[13] = 0x11;
  local_28[14] = 4;
  local_28[15] = 0x1e;
  local_28[16] = 0x2d;
  local_28[17] = 0xef;
  local_28[18] = 0xef;
  local_28[19] = 0x21;
  local_28[20] = 0x3c;
  memset(local_48,0x41,0x15);
  for (local_4c = 0; local_4c < 0x15; local_4c = local_4c + 1) {
    local_48[local_4c] = local_48[local_4c] + local_28[local_4c];
  }
  local_48[local_4c] = '\0';
  puts(local_48);
  return;
}

int main(void)
{
  rrqqq();
  return 0;
}

