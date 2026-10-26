/* Firmware entry: 0x4818a76e */

int FUN_ram_4818a76e(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_1c;
  undefined1 uStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = 0;
  uStack_18 = 0;
  iStack_14 = 0;
  iVar1 = FUN_ram_4817f620(param_1,param_2,&uStack_1c);
  if (iVar1 != 0) {
    return iVar1 + -0x2500;
  }
  if (uStack_1c != 0) {
    *param_3 = 0;
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3 + 1;
      uVar2 = uVar2 | (uint)*(byte *)(iStack_14 + uVar3) << ((uVar3 & 3) << 3);
      *param_3 = uVar2;
      if (uStack_1c == uVar4) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      uVar3 = uVar4;
    } while (uVar4 != 4);
    return 0;
  }
  *param_3 = 0;
  return 0;
}


