/* Firmware entry: 0x4ff2b13a */

void FUN_ram_4ff2b13a(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid != 1) {
    DAT_ram_4ff5079c = DAT_ram_4ff5079c + 1;
    return;
  }
  if (param_1 == 2) {
    puVar2 = &DAT_ram_4ff50f44;
    uVar1 = DAT_ram_4ff50f4c;
  }
  else {
    if (param_1 == 4) {
      puVar2 = &DAT_ram_4ff50f5c;
    }
    else {
      if (param_1 != 1) {
        return;
      }
      puVar2 = &DAT_ram_4ff50f2c;
    }
    uVar1 = puVar2[2];
  }
  if ((uVar1 & 0x80) == 0) {
    if (puVar2[5] == -1) {
      return;
    }
    puVar2[5] = puVar2[5] + 1;
    return;
  }
  FUN_ram_4ff2a25e(param_1,param_3,param_2,2,0,param_4 != 0);
  return;
}


