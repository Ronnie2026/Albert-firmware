/* Firmware entry: 0x48170a3a */

undefined4 FUN_ram_48170a3a(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_3 + 4;
  *(uint *)(param_1 + 0xb8) = uVar2;
  if (*(int *)(param_1 + 0xb4) == 0x16) {
    if (((**(char **)(param_1 + 0xb0) == '\0') || (*(int *)(param_1 + 0x40) != 0)) &&
       (uVar2 < 0x1001)) {
      (*(char **)(param_1 + 0xb0))[1] = (char)((uint)param_3 >> 0x10);
      *(char *)(*(int *)(param_1 + 0xb0) + 2) = (char)((uint)param_3 >> 8);
      *(char *)(*(int *)(param_1 + 0xb0) + 3) = (char)param_3;
      uVar1 = FUN_ram_48170748(param_1,0);
      return uVar1;
    }
  }
  else if (((*(int *)(param_1 + 0xb4) == 0x14) && (*(int *)(param_1 + 0x40) != 0)) &&
          (uVar2 < 0x1001)) {
    uVar1 = FUN_ram_48170748(param_1,0);
    return uVar1;
  }
  return 0xffff9400;
}


