/* Firmware entry: 0x481a7138 */

undefined4 FUN_ram_481a7138(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_2) {
    return 0x102;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f28,0xffffffff);
  piVar3 = (int *)(&DAT_ram_4ff6c43c + param_2 * 0x20);
  iVar2 = 0;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar1 == 0) {
      *(undefined4 *)(&DAT_ram_4ff6c43c + (param_2 * 8 + iVar2) * 4) = param_1;
      FUN_ram_4ff3ee10(&DAT_ram_4ff47f28);
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f28);
  return 0x101;
}


