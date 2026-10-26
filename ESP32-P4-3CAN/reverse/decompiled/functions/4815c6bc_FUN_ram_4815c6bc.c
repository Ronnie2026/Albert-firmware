/* Firmware entry: 0x4815c6bc */

int FUN_ram_4815c6bc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_54;
  undefined1 auStack_50 [3];
  byte bStack_4d;
  uint uStack_38;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0x1102;
    }
    uStack_54 = 0;
    iVar2 = FUN_ram_4815af12(iVar1,param_2,0x48,param_3,&uStack_54,auStack_50,0xff);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (uStack_38 != param_5) {
    return 0x1118;
  }
  uVar5 = 0;
  iVar1 = 0;
  if ((uStack_34 & 0xff) != 0) {
    uVar4 = uStack_34 >> 8 & 0xff;
    uVar5 = 0;
    uVar6 = (uStack_34 & 0xff) + uVar4;
    do {
      iVar1 = *(int *)(param_1 + 0x10);
      while( true ) {
        if (iVar1 == 0) {
          iVar1 = 0x1102;
          goto LAB_ram_4815c79a;
        }
        uStack_54 = 0;
        iVar2 = FUN_ram_4815af12(iVar1,param_2,0x42,param_3,&uStack_54,auStack_50,uVar4 & 0xff,0xff)
        ;
        if (iVar2 == 0) break;
        iVar1 = *(int *)(iVar1 + 4);
      }
      if ((param_5 - uVar5 < (uStack_38 & 0xffff)) ||
         (uVar3 = FUN_ram_4815d6a8(param_4,uStack_38 & 0xffff,0), uVar3 != uStack_34)) {
        return 0x1118;
      }
      iVar1 = FUN_ram_4815b238(iVar1,param_2,0x42,param_3,param_4 + uVar5,uStack_38 & 0xffff,
                               uVar4 & 0xff,0xff);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (bStack_4d != uVar4) goto LAB_ram_4815c7fc;
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + (uStack_38 & 0xffff);
    } while (uVar6 != uVar4);
    iVar1 = 0;
  }
LAB_ram_4815c79a:
  if (param_5 != uVar5) {
LAB_ram_4815c7fc:
    iVar1 = -1;
  }
  return iVar1;
}


