/* Firmware entry: 0x481a71c0 */

undefined4 FUN_ram_481a71c0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < mhartid) {
    return 0x102;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f28,0xffffffff);
  piVar4 = (int *)(&DAT_ram_4ff6c43c + uVar1 * 0x20);
  iVar3 = 0;
  do {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    if (iVar2 == 0) {
      *(undefined4 *)(&DAT_ram_4ff6c43c + (uVar1 * 8 + iVar3) * 4) = param_1;
      FUN_ram_4ff3ee10(&DAT_ram_4ff47f28);
      return 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f28);
  return 0x101;
}


