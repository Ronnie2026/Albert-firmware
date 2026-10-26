/* Firmware entry: 0x48130196 */

undefined4 FUN_ram_48130196(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
    return 0x102;
  }
  iVar3 = param_1 * 4;
  if (*(int *)(&DAT_ram_4ff6e104 + iVar3) == 0) {
    uVar2 = 0x102;
  }
  else {
    if ((param_1 == mhartid) && (iVar1 = FUN_ram_4ff3d9d2(), iVar1 != 2)) {
      return 0x103;
    }
    iVar1 = FUN_ram_4ff2fb38(&DAT_ram_4ff6e0d4 + iVar3,0,param_2);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      *(undefined4 *)(&DAT_ram_4ff6e0c8 + iVar3) = param_3;
      (&DAT_ram_4ff6e0d0)[param_1] = 1;
      iVar1 = FUN_ram_4ff3eb8c();
      uVar2 = *(undefined4 *)(&DAT_ram_4ff6e104 + iVar3);
      if (iVar1 == 0) {
        FUN_ram_4ff3c43c(uVar2,0x18);
        FUN_ram_4ff3e004(*(undefined4 *)(&DAT_ram_4ff6e104 + iVar3),0,0,2,0);
        uVar2 = 0;
      }
      else {
        FUN_ram_4ff3e1d8(uVar2,0,0);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


