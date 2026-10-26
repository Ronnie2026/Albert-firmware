/* Firmware entry: 0x4815c572 */

int FUN_ram_4815c572(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_54;
  undefined1 auStack_50 [3];
  byte bStack_4d;
  uint uStack_38;
  byte bStack_34;
  byte bStack_33;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar2 == 0) {
      return 0x1102;
    }
    uStack_54 = 0;
    iVar1 = FUN_ram_4815af12(iVar2,param_2,0x48,param_3,&uStack_54,auStack_50,0xff);
    if (iVar1 == 0) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  uVar3 = (uint)bStack_33;
  if (uStack_38 == param_5) {
    uVar4 = 0;
    uVar5 = bStack_34 + uVar3;
    iVar2 = 0;
    if (bStack_34 != 0) {
      do {
        iVar2 = *(int *)(param_1 + 0x10);
        while( true ) {
          if (iVar2 == 0) {
            iVar2 = 0x1102;
            goto LAB_ram_4815c67a;
          }
          uStack_54 = 0;
          iVar1 = FUN_ram_4815af12(iVar2,param_2,0x42,param_3,&uStack_54,auStack_50,uVar3 & 0xff,
                                   0xff);
          if (iVar1 == 0) break;
          iVar2 = *(int *)(iVar2 + 4);
        }
        if (param_5 - uVar4 < (uStack_38 & 0xffff)) {
          iVar2 = 0x110c;
LAB_ram_4815c67a:
          if (*(int *)(param_1 + 100) == 1) {
            FUN_ram_4815bb98(param_1,param_2,param_3,0xff);
          }
          break;
        }
        iVar2 = FUN_ram_4815ae24(iVar2,auStack_50,uStack_54,param_4 + uVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (bStack_4d != uVar3) {
          return -1;
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + (uStack_38 & 0xffff);
        iVar2 = 0;
      } while (uVar5 != uVar3);
    }
    if (param_5 == uVar4) {
      return iVar2;
    }
  }
  return -1;
}


