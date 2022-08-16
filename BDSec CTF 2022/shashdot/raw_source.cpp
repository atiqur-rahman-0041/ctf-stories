#include<bits/stdc++.h>
using namespace std;

void __stack_chk_fail(){
    cout << "Stack overflow" << endl;
    exit(0);
}

void cneodc(int param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    while (0 < (param_3 / 3) * 3) {
      *(long *)(long)param_2 = 8;
    }
  }
  return;
}


void rrqqq(void)

{
  long in_FS_OFFSET;
  int local_4c;
  char local_48 [32];
  char local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  puts(local_48);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void mainFlag(int param_1)

{
  int iVar1;
  void *pvVar2;
  int local_14;
  
  pvVar2 = malloc((long)(param_1 + 1));
  for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
    iVar1 = rand();
    *(char *)((long)pvVar2 + (long)local_14) = (char)iVar1 + (char)(iVar1 / 0x5e) * -0x5e + ' ';
  }
  *(long *)((long)pvVar2 + (long)local_14) = 0;
  printf("Flag:{%s}\n",pvVar2);
  return;
}

void flag(int param_1)

{
  malloc(0x400);
  if (param_1 == 10) {
    printf("You just Learn How to patch program.................");
  }
  else {
    puts("A simple Patch, can\'t done by you..!!!!!!!!!!!!!!!!!!");
  }
  return;
}


bool sum(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_6 + param_1 + param_2 + param_3 + param_4 + param_5 == 0x8b;
}


int main(void)
{
  char cVar1;
  int local_c;
  
  cVar1 = sum(10,1,1,4,0xc,0x6f);
  if (cVar1 != '\0') {
    if (local_c == 1) {
      flag(5);
    }
    printf("Patch Me");
  }
  return 0;
}

