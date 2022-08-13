#include<bits/stdc++.h>
using namespace std;

#define ulong unsigned long

void __stack_chk_fail()
{
    cout << "Stack Overflow" << endl;
    exit(0);
}


int ns_1(int param_1)

{
  int local_14;
  int local_10;

  local_10 = 0;
  for (local_14 = param_1; local_14 != 0; local_14 = local_14 / 10) {
    local_10 = local_14 % 10 + local_10 * 10;
  }
  return local_10;
}


void ns_2(char *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  int local_b0;
  int local_a8 [4];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  long local_20;

  local_20 = *(long *)(in_FS_OFFSET + 0x28);
	
  sVar3 = strlen(param_1);
  if (sVar3 < 0x20) {
    sVar3 = strlen(param_1);
    if (0x1e < sVar3) {
      local_a8[0] = 0x47;
      local_a8[1] = 0x5b;
      local_a8[2] = 0x2b;
      local_a8[3] = 0x65;
      local_98 = 0x51;
      local_94 = 0x146;
      local_90 = 0x326;
      local_8c = 99;
      local_88 = 0x68;
      local_84 = 0x14;
      local_80 = 0x10;
      local_7c = 0x28;
      local_78 = 0x14;
      local_74 = 0x40;
      local_70 = 0x68;
      local_6c = 0x196;
      local_68 = 0x14;
      local_64 = 0x68;
      local_60 = 0x2c2;
      local_5c = 0x14;
      local_58 = 0x1a0;
      local_54 = 0x40;
      local_50 = 0x59;
      local_4c = 0x1a;
      local_48 = 99;
      local_44 = 0x40;
      local_40 = 10;
      local_3c = 0x59;
      local_38 = 10;
      local_34 = 10;
      local_30 = 0x20e;
      bVar1 = false;
      bool overflow = false;
      bool flag = false;
      local_b0 = 0;

      int idx = 0;
      int inc = 1;

      while( true ) {
        sVar3 = strlen(param_1);
        if (sVar3 <= (ulong)(long)idx) break;
        iVar2 = ns_1((int)param_1[idx++]);

        if (iVar2 + 5 != *(local_a8 + local_b0)) {
          bVar1 = false;

					/////////////////////////////

					/* 
					
					weird print segment so that the memory locations of the variables are of correct values as they should be.
					I have no idea why this is necessary. But for my compiler to work, I have to access the addresses at least once.
					Otherwise it keeps giving me garbage values idk why. If anyone can point out the reason, I would be very grateful.
					
					*/
					
					printf("address of local_a8: %d\n", local_a8);
					printf("address of local_98: %d\n", &local_98);
					printf("address of local_94: %d\n", &local_94);
					printf("address of local_90: %d\n", &local_90);
					printf("address of local_8c: %d\n", &local_8c);
					printf("address of local_88: %d\n", &local_88);
					printf("address of local_84: %d\n", &local_84);
					printf("address of local_80: %d\n", &local_80);
					printf("address of local_7c: %d\n", &local_7c);
					printf("address of local_78: %d\n", &local_78);
					printf("address of local_74: %d\n", &local_74);
					printf("address of local_70: %d\n", &local_70);
					printf("address of local_6c: %d\n", &local_6c);
					printf("address of local_68: %d\n", &local_68);
					printf("address of local_64: %d\n", &local_64);
					printf("address of local_60: %d\n", &local_60);
					printf("address of local_5c: %d\n", &local_5c);
					printf("address of local_58: %d\n", &local_58);
					printf("address of local_54: %d\n", &local_54);
					printf("address of local_50: %d\n", &local_50);
					printf("address of local_4c: %d\n", &local_4c);
					printf("address of local_48: %d\n", &local_48);
					printf("address of local_44: %d\n", &local_44);
					printf("address of local_40: %d\n", &local_40);
					printf("address of local_3c: %d\n", &local_3c);
					printf("address of local_38: %d\n", &local_38);
					printf("address of local_34: %d\n", &local_34);
					printf("address of local_30: %d\n", &local_30);
					printf("address of local_20: %d\n", &local_20);

					/////////////////////////////
					
          break;
        }

        bVar1 = true;

        local_b0 = local_b0 + inc;

        if(local_b0 > 3 && !overflow){
          overflow = true;
          local_b0 = -1;
          inc = -1;
        }
      }
      if (bVar1) {
        puts("Congrats ! You found the right license key.");
      }
      else {
        puts("Invalid license key. Please try again. 1");
      }
      goto code_r0x0010141a;
    }
  }
  puts("Invalid license key. Please try again. 2");
code_r0x0010141a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

int main(void)

{
  long in_FS_OFFSET;
  char local_58[72];
  long local_10;

  puts("\t----------------------------");
  puts("\t BDSEC License Checker 0x01");
  puts("\t----------------------------\n");
  printf("Please enter your license to continue : ");
  gets(local_58);
  ns_2(local_58);

  return 0;
}

