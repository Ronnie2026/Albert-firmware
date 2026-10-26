/* Firmware entry: 0x48007fb6 */

undefined4 FUN_ram_48007fb6(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1 * 0x38;
  auStack_24[0] = 0;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(iVar1 + 0x4ff48230,0xffffffff);
  if (*(int *)(*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) + 0xc) == 1) {
    iVar2 = *(int *)(&DAT_ram_4ff48228 + iVar1);
    *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) & 0xffdfffff;
    *(uint *)(iVar2 + 0x98) = *(uint *)(iVar2 + 0x98) | 1;
    do {
    } while ((*(uint *)(iVar2 + 0x98) & 1) != 0);
    *(undefined4 *)(iVar2 + 0x10) = 0x4000;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x4000;
  }
  FUN_ram_4ff43138(&DAT_ram_4ff48228 + iVar1,param_2,param_3,auStack_24);
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(iVar1 + 0x4ff48230);
  return auStack_24[0];
}


