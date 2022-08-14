#include<bits/stdc++.h>
using namespace std;

#define ulong unsigned long

int SEXT48(int val)
{
    return 0;
}

int main(void)

{
  char cVar1;
  size_t sVar2;
  char bVar3;
  ulong uVar4;
  int local_128 [4];
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  char local_98 [104];
  int local_30;
  int local_2c;
  char local_26;
  char local_25;
  int local_24;
  int local_20;
  char local_19;
  
  local_25 = 'A';
  local_26 = '?';
  local_24 = 0;
  local_128[0] = 0x6d;
  local_128[1] = 0x6f;
  local_128[2] = 0x7e;
  local_128[3] = 0x70;
  local_118 = 0x6e;
  local_114 = 0x80;
  local_110 = 0x77;
  local_10c = 0x74;
  local_108 = 0x6e;
  local_104 = 0x70;
  local_100 = 0x79;
  local_fc = 0x3a;
  local_f8 = 0x38;
  local_f4 = 100;
  local_f0 = 0x6e;
  local_ec = 0x73;
  local_e8 = 0x70;
  local_e4 = 0x6e;
  local_e0 = 0x76;
  local_dc = 0x38;
  local_d8 = 0x7d;
  local_d4 = 100;
  local_d0 = 0x35;
  local_cc = 0x69;
  local_c8 = 0x35;
  local_c4 = 0x37;
  local_c0 = 100;
  local_bc = 0x37;
  local_b8 = 0x35;
  local_b4 = 0x37;
  local_b0 = 0x37;
  local_ac = 100;
  local_a8 = 0x79;
  local_a4 = 0x3a;
  local_a0 = 0x82;
  puts("\t----------------------------");
  puts("\t BDSEC License Checker 0x02");
  puts("\t----------------------------\n");
  printf("Please enter your license to continue : ");
  gets(local_98);
  sVar2 = strlen(local_98);
  if (sVar2 == 0x23) {
    for (local_20 = 0; local_98[local_20] != '\0'; local_20 = local_20 + 1) {
      if (('`' < local_98[local_20]) && (local_98[local_20] < '{')) {
        local_98[local_20] = local_98[local_20] + -0x20;
      }
    }
    for (local_20 = 0; local_98[local_20] != '\0'; local_20 = local_20 + 1) {
      if (('@' < local_98[local_20]) && (local_98[local_20] < '[')) {
        local_98[local_20] = local_98[local_20] + ' ';
      }
    }
    for (local_20 = 0; local_98[local_20] != '\0'; local_20 = local_20 + 1) {
      local_19 = local_98[local_20];
      if ((local_19 < 'a') || ('z' < local_19)) {
        if (('@' < local_19) && (local_19 < '[')) {
          local_30 = (int)(local_26 % '\n');
          local_19 = local_19 + local_26 % '\n';
          if ('Z' < local_19) {
            local_19 = local_19 + -0x1a;
          }
          local_98[local_20] = local_19;
        }
      }
      else {
        local_30 = (int)(local_25 % '\n');
        local_19 = local_19 + local_25 % '\n';
        if ('z' < local_19) {
          local_19 = local_19 + -0x1a;
        }
        local_98[local_20] = local_19;
      }
    }
    for (local_20 = 0; local_98[local_20] != '\0'; local_20 = local_20 + 1) {
      local_19 = local_98[local_20];
      if ((local_19 < 'a') || ('z' < local_19)) {
        if (('@' < local_19) && (local_19 < '[')) {
          bVar3 = (char)(local_26 >> 7) >> 6;
          cVar1 = (local_26 + bVar3 & 3) - bVar3;
          local_30 = (int)cVar1;
          local_19 = local_19 + cVar1;
          if ('Z' < local_19) {
            local_19 = local_19 + -0x1a;
          }
          local_98[local_20] = local_19;
        }
      }
      else {
        bVar3 = (char)(local_25 >> 7) >> 6;
        cVar1 = (local_25 + bVar3 & 3) - bVar3;
        local_30 = (int)cVar1;
        local_19 = local_19 + cVar1;
        if ('z' < local_19) {
          local_19 = local_19 + -0x1a;
        }
        local_98[local_20] = local_19;
      }
    }
    local_20 = 0;
    while( true ) {
      uVar4 = SEXT48(local_20);
      sVar2 = strlen(local_98);
      if (sVar2 <= uVar4) break;
      local_2c = (int)local_98[local_20];
      if (local_128[local_20] != local_98[local_20] + 5) {
        local_24 = 0;
        break;
      }
      local_24 = 1;
      local_20 = local_20 + 1;
    }
    if (local_24 == 1) {
      puts(
          "Congratulations for finding the right license key. I wish I had premium service for you :P But you can get points by submitting the license key."
          );
    }
    else {
      puts("Invalid license key. Please try again.");
    }
  }
  else {
    puts("Invalid license key. Please try again.");
  }
  return 0;
}

