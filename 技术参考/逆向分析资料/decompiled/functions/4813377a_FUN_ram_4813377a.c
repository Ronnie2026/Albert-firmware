/* Firmware entry: 0x4813377a */

undefined4 FUN_ram_4813377a(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e168 == 0) {
    return 0x103;
  }
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_2 == (int *)0x0) {
      uVar2 = 0x102;
    }
    else {
      if (param_1[2] != 0) {
        return 0x102;
      }
      iVar1 = FUN_ram_4ff2091a(1,0x20,0x804);
      if (iVar1 == 0) {
        uVar2 = 0x101;
      }
      else {
        iVar3 = *param_1;
        iVar4 = param_1[1];
        *(char *)(iVar1 + 0xf) = param_1[2] != 0 | (char)param_1[4] << 1;
        *(int *)(iVar1 + 0x10) = iVar3;
        *(int *)(iVar1 + 0x14) = iVar4;
        *param_2 = iVar1;
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  return 0x102;
}


