/* Firmware entry: 0x4818297c */

int FUN_ram_4818297c(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auStack_24 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(uint *)(param_1 + 0x7c);
  if ((uVar3 & 0x10) == 0) {
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else if ((uVar3 & 8) == 0) {
      uVar2 = *(uint *)(param_1 + 0x24);
      if ((uVar3 & 4) == 0) {
        if (param_3 <= uVar2) {
          iVar4 = *(int *)(param_1 + 0x2c);
          *(uint *)(param_1 + 0x7c) = uVar3 | 4;
          *param_1 = *param_1 ^ (byte)(uVar2 >> 8);
          param_1[1] = (byte)uVar2 ^ param_1[1];
LAB_ram_481829d6:
          do {
            while( true ) {
              uVar2 = iVar4 + 2U & 0xf;
              uVar3 = 0x10 - uVar2;
              if (param_3 < 0x10 - uVar2) {
                uVar3 = param_3;
              }
              pbVar5 = param_1 + uVar2;
              pbVar7 = param_2;
              do {
                bVar1 = *pbVar7;
                pbVar6 = pbVar5 + 1;
                pbVar7 = pbVar7 + 1;
                *pbVar5 = *pbVar5 ^ bVar1;
                pbVar5 = pbVar6;
              } while (param_1 + uVar2 + uVar3 != pbVar6);
              param_3 = param_3 - uVar3;
              iVar4 = *(int *)(param_1 + 0x2c) + uVar3;
              *(int *)(param_1 + 0x2c) = iVar4;
              param_2 = param_2 + uVar3;
              if ((uVar2 + uVar3 == 0x10) || (iVar4 == *(int *)(param_1 + 0x24))) break;
              if (param_3 == 0) goto LAB_ram_48182a30;
            }
            iVar4 = FUN_ram_48171b10(param_1 + 0x38,param_1,0x10,param_1,auStack_24);
            if (iVar4 != 0) {
              *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x10;
              return iVar4;
            }
            iVar4 = *(int *)(param_1 + 0x2c);
          } while (param_3 != 0);
LAB_ram_48182a30:
          if (*(int *)(param_1 + 0x24) == iVar4) {
            param_1[0x2c] = 0;
            param_1[0x2d] = 0;
            param_1[0x2e] = 0;
            param_1[0x2f] = 0;
            *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 8;
          }
          return 0;
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x2c);
        if (iVar4 + param_3 <= uVar2) goto LAB_ram_481829d6;
      }
      iVar4 = -0xd;
    }
    else {
      iVar4 = -0xd;
    }
  }
  else {
    iVar4 = -0xd;
  }
  return iVar4;
}


