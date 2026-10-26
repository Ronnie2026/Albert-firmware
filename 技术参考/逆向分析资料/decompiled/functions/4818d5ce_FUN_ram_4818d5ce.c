/* Firmware entry: 0x4818d5ce */

bool FUN_ram_4818d5ce(uint *param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *param_1;
  uVar4 = uVar3 >> 2;
  if (((short)param_1[4] == 0) || (*(short *)((int)param_1 + 0x12) == 0)) {
    if ((uVar4 & 2) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return false;
    }
    if ((uVar3 & 3) == 0) {
      return true;
    }
  }
  else {
    if ((uVar4 & 4) != 0) {
      return false;
    }
    if ((uVar3 & 3) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return true;
    }
  }
  bVar2 = true;
  sVar1 = (short)param_1[5];
  if ((((99 < (ushort)(sVar1 - 100U)) && (sVar1 != 0xcc)) && (sVar1 != 0x130)) &&
     ((uVar4 & 0x41) == 0)) {
    bVar2 = (param_1[2] & param_1[3]) != 0xffffffff;
  }
  return bVar2;
}


