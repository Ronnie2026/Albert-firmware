/* Firmware entry: 0x4815b238 */

int FUN_ram_4815b238(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                    uint param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iStack_74;
  byte bStack_6e;
  ushort auStack_58 [2];
  int iStack_54;
  undefined1 auStack_50 [36];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x110b;
  }
  iVar1 = FUN_ram_4815af12();
  if (iVar1 == 0) {
    if (((param_3 - 0x41 & 0xff) < 2) || (param_3 == 0x21)) {
      if (param_6 < auStack_58[0]) {
        return 0x110c;
      }
      iVar1 = FUN_ram_4815d6a8(param_5,(uint)auStack_58[0],0);
      if (iVar1 == iStack_54) {
        uVar7 = 1;
        uVar6 = (uint)auStack_58[0];
        if (1 < bStack_6e) {
          do {
            if (0x7d < uVar7) {
              return -1;
            }
            pcVar4 = *(code **)(**(int **)(param_1 + 0x50) + 0x10);
            iVar1 = (*pcVar4)(*(int **)(param_1 + 0x50),uVar7 * 0x20 + *(int *)(param_1 + 8) + 0x40,
                              auStack_50,0x20,pcVar4);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar5 = uVar6;
            if (0x20 < uVar6) {
              uVar5 = 0x20;
            }
            iVar1 = FUN_ram_4ff4511a(param_5,auStack_50,uVar5);
            if (iVar1 != 0) {
              return 0x1118;
            }
            piVar3 = (int *)0x0;
            if (uVar7 != 1) {
              piVar3 = &iStack_74;
            }
            iStack_74 = FUN_ram_4815d6a8(auStack_50,uVar5,piVar3);
            uVar7 = uVar7 + 1;
            uVar6 = uVar6 - uVar5;
            param_5 = param_5 + uVar5;
          } while (uVar7 < bStack_6e);
        }
        if (iStack_54 == iStack_74) {
          return 0;
        }
      }
      return 0x1118;
    }
    if (param_6 == (param_3 & 0xf)) {
      iVar2 = FUN_ram_4ff4511a(param_5,auStack_58,param_6);
      if (iVar2 != 0) {
        return 0x1118;
      }
    }
    else {
      iVar1 = 0x1103;
    }
  }
  return iVar1;
}


