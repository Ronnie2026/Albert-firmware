/* Firmware entry: 0x4817b33e */

int FUN_ram_4817b33e(int param_1,int param_2,uint param_3,undefined4 param_4,byte *param_5,
                    byte *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  byte local_40 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 - 0x10 < 0xfffff1) {
    iVar3 = FUN_ram_4817b620(param_1 + 0x22,1,param_4,&local_60);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar11 = param_3 >> 4;
    param_3 = param_3 & 0xf;
    do {
      pbVar10 = param_6;
      uVar11 = uVar11 - 1;
      if ((param_3 != 0) && (param_2 == 0 && uVar11 == 0)) {
        local_50 = local_60;
        uStack_4c = uStack_5c;
        uStack_48 = uStack_58;
        uStack_44 = uStack_54;
        FUN_ram_4817b13a(&local_60,&local_60);
      }
      pbVar9 = local_40;
      pbVar4 = (byte *)&local_60;
      pbVar5 = param_5;
      pbVar7 = pbVar9;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        *pbVar7 = bVar1 ^ bVar2;
        pbVar7 = pbVar7 + 1;
      } while ((byte *)&local_50 != pbVar4);
      iVar3 = FUN_ram_4817b620(param_1,param_2,local_40);
      if (iVar3 != 0) {
        return iVar3;
      }
      pbVar7 = local_40;
      pbVar4 = pbVar10;
      pbVar5 = (byte *)&local_60;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        pbVar5 = pbVar5 + 1;
        *pbVar4 = bVar2 ^ bVar1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar7 != &stack0xffffffd0);
      FUN_ram_4817b13a(&local_60,&local_60);
      param_5 = param_5 + 0x10;
      param_6 = pbVar10 + 0x10;
    } while (uVar11 != 0);
    iVar3 = 0;
    if (param_3 != 0) {
      pbVar4 = (byte *)&local_60;
      if (param_2 == 0) {
        pbVar4 = (byte *)&local_50;
      }
      uVar11 = 0;
      pbVar5 = local_40;
      do {
        pbVar6 = param_5 + uVar11;
        (pbVar10 + 0x10)[uVar11] = pbVar10[uVar11];
        pbVar7 = pbVar4 + uVar11;
        uVar11 = uVar11 + 1;
        *pbVar5 = *pbVar6 ^ *pbVar7;
        pbVar5 = pbVar5 + 1;
      } while (param_3 != uVar11);
      pbVar7 = pbVar10 + param_3;
      pbVar6 = pbVar4 + param_3;
      pbVar5 = local_40 + param_3;
      do {
        bVar1 = *pbVar7;
        pbVar8 = pbVar5 + 1;
        pbVar7 = pbVar7 + 1;
        *pbVar5 = bVar1 ^ *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar8;
      } while (&stack0xffffffd0 != pbVar8);
      iVar3 = FUN_ram_4817b620(param_1,param_2,local_40);
      if (iVar3 == 0) {
        do {
          bVar1 = *pbVar9;
          bVar2 = *pbVar4;
          pbVar9 = pbVar9 + 1;
          pbVar4 = pbVar4 + 1;
          *pbVar10 = bVar1 ^ bVar2;
          pbVar10 = pbVar10 + 1;
          iVar3 = 0;
        } while (&stack0xffffffd0 != pbVar9);
      }
    }
  }
  else {
    iVar3 = -0x22;
  }
  return iVar3;
}


