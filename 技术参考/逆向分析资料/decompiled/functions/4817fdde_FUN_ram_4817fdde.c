/* Firmware entry: 0x4817fdde */

undefined4 FUN_ram_4817fdde(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (10000 < param_2) {
    return 0xfffffff0;
  }
  if (*(ushort *)((int)param_1 + 6) <= param_2) {
    uVar1 = FUN_ram_4817fbba();
    return uVar1;
  }
  iVar2 = *(ushort *)((int)param_1 + 6) - 1;
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 * 4 + *param_1) != 0) {
        uVar3 = iVar2 + 1;
        goto LAB_ram_4817fe16;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar3 = 1;
LAB_ram_4817fe16:
  if (param_2 < uVar3) {
    param_2 = uVar3;
  }
  iVar2 = thunk_FUN_ram_4817b126(param_2,4);
  if (iVar2 == 0) {
    uVar1 = 0xfffffff0;
  }
  else {
    if (*param_1 != 0) {
      FUN_ram_4ff45158(iVar2,*param_1,param_2 << 2);
      FUN_ram_48178b14(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
    }
    *(short *)((int)param_1 + 6) = (short)param_2;
    *param_1 = iVar2;
    uVar1 = 0;
  }
  return uVar1;
}


