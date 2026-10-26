/* Firmware entry: 0x4815b176 */

int FUN_ram_4815b176(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6)

{
  int iVar1;
  undefined1 auStack_40 [24];
  ushort auStack_28 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x110b;
  }
  iVar1 = FUN_ram_4815af12();
  if (iVar1 == 0) {
    if (((param_3 - 0x41 & 0xff) < 2) || (param_3 == 0x21)) {
      iVar1 = 0x110c;
      if (auStack_28[0] <= param_6) {
        iVar1 = FUN_ram_4815ae24(param_1,auStack_40,0,param_5);
        return iVar1;
      }
    }
    else if (param_6 == (param_3 & 0xf)) {
      FUN_ram_4ff45158(param_5,auStack_28,param_6);
    }
    else {
      iVar1 = 0x1103;
    }
  }
  return iVar1;
}


