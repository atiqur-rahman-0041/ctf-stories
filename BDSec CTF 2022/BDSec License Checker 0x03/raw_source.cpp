#include<bits/stdc++.h>
using namespace std;

#define ulong unsigned long

void __stack_chk_fail() {
    cout << "Stack Overflow" << endl;
    exit(0);
}

int main(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  char local_143;
  int local_140;
  int local_138;
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
  int local_9c;
  int local_98;
  int local_94;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = false;
  local_128[0] = 0x7d;
  local_128[1] = 0x78;
  local_128[2] = 0x54;
  local_128[3] = 0x6e;
  local_118 = 0x53;
  local_114 = 0x77;
  local_110 = 0x5f;
  local_10c = 0x54;
  local_108 = 0x54;
  local_104 = 0x6d;
  local_100 = 0x57;
  local_fc = 0x6f;
  local_f8 = 0x5f;
  local_f4 = 0x6d;
  local_f0 = 0x54;
  local_ec = 0xffffff80;
  local_e8 = 0x52;
  local_e4 = 0x7a;
  local_e0 = 0x57;
  local_dc = 0x78;
  local_d8 = 0x5f;
  local_d4 = 0x54;
  local_d0 = 0x6e;
  local_cc = 0x69;
  local_c8 = 0x54;
  local_c4 = 0x78;
  local_c0 = 0x58;
  local_bc = 0xffffff81;
  local_b8 = 0x5f;
  local_b4 = 0x6e;
  local_b0 = 0x49;
  local_ac = 100;
  local_a8 = 0x7b;
  local_a4 = 0x52;
  local_a0 = 0x54;
  local_9c = 0x48;
  local_98 = 0x53;
  local_94 = 0x51;
  puts("\t----------------------------");
  puts("\t BDSEC License Checker 0x03");
  puts("\t----------------------------\n");
  printf("Please enter your license to continue : ");
  gets(local_88);
  sVar4 = strlen(local_88);
  if (sVar4 == 0x26) {
    local_138 = 0;
    while( true ) {
      sVar4 = strlen(local_88);
      if (sVar4 <= (ulong)(long)local_138) break;
      if ((local_88[local_138] < 'A') || ('Z' < local_88[local_138])) {
        if (('`' < local_88[local_138]) && (local_88[local_138] < '{')) {
          if ((local_88[local_138] < 'a') || ('m' < local_88[local_138])) {
            local_88[local_138] = local_88[local_138] + -0xd;
          }
          else {
            local_88[local_138] = local_88[local_138] + '\r';
          }
        }
      }
      else {
        if ((local_88[local_138] < '@') || ('M' < local_88[local_138])) {
          local_88[local_138] = local_88[local_138] + -0xd;
        }
        else {
          local_88[local_138] = local_88[local_138] + '\r';
        }
      }
      local_138 = local_138 + 1;
    }
    sVar4 = strlen(local_88);
    iVar3 = (int)sVar4;
    for (local_140 = 0; local_140 < iVar3 / 2; local_140 = local_140 + 1) {
      cVar1 = local_88[local_140];
      local_88[local_140] = local_88[(iVar3 - local_140) + -1];
      local_88[(iVar3 - local_140) + -1] = cVar1;
    }
    for (local_140 = 0; local_88[local_140] != '\0'; local_140 = local_140 + 1) {
      cVar1 = local_88[local_140];
      if ((cVar1 < 'a') || ('z' < cVar1)) {
        if (('@' < cVar1) && (cVar1 < '[')) {
          local_143 = cVar1 + '\x02';
          if ('Z' < local_143) {
            local_143 = cVar1 + -0x18;
          }
          local_88[local_140] = local_143;
        }
      }
      else {
        local_143 = cVar1 + '\b';
        if ('z' < local_143) {
          local_143 = cVar1 + -0x12;
        }
        local_88[local_140] = local_143;
      }
    }
    local_140 = 0;
    while( true ) {
      sVar4 = strlen(local_88);
      if (sVar4 <= (ulong)(long)local_140) break;
      if ((int)local_88[local_140] != local_128[local_140]) {
        bVar2 = false;
        break;
      }
      bVar2 = true;
      local_140 = local_140 + 1;
    }
    if (bVar2) {
      puts(
          "Congratulations for finding the right license key. I wish I had premium service for you :P But you can get points by submitting the license key."
          );
    }
    else {
      puts("Invalid license key. Please try again. 1");
    }
  }
  else {
    puts("Invalid license key. Please try again. 2");
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

