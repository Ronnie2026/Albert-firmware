/* Firmware entry: 0x48172830 */

int FUN_ram_48172830(undefined1 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_3) {
    return -0x4f80;
  }
  iVar1 = *param_2;
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 8) = 1;
    *param_1 = 0;
    *(int *)(param_1 + 4) = iVar1;
    FUN_ram_48173f5c(param_1 + 0xc);
    FUN_ram_4817fb86(param_1 + 0x6c);
    FUN_ram_48173f3a(param_1 + 0x74);
    FUN_ram_48173f3a(param_1 + 0x8c);
    FUN_ram_4817fb86(param_1 + 0xa4);
    iVar1 = FUN_ram_48176468(param_1 + 0xc,iVar1);
    if (iVar1 != 0) {
      return -0x4e80;
    }
  }
  else if (*(int *)(param_1 + 4) != iVar1) {
    return -0x4f80;
  }
  if (*(int *)(param_1 + 8) != 1) {
    return -0x4f80;
  }
  if (param_3 == 1) {
    iVar1 = FUN_ram_481740fa(param_1 + 0x8c,param_2 + 0x1a);
    return iVar1;
  }
  iVar1 = FUN_ram_481740fa(param_1 + 0x74,param_2 + 0x1a);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4817fe72(param_1 + 0x6c,param_2 + 0x18);
    return iVar1;
  }
  return iVar1;
}


