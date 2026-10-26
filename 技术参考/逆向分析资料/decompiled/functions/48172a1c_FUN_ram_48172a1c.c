/* Firmware entry: 0x48172a1c */

int FUN_ram_48172a1c(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0x48) != 0)) {
    iVar3 = param_1 + 0xa4;
    iVar1 = FUN_ram_48172558(param_1 + 0xc,iVar3,param_1 + 0x8c,param_1 + 0x6c);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = FUN_ram_48180076(iVar3);
    if (uVar2 <= param_4) {
      *param_2 = (uint)((*(uint *)(param_1 + 0x48) & 7) != 0) + (*(uint *)(param_1 + 0x48) >> 3);
      iVar1 = FUN_ram_48173f28(param_1 + 0xc);
      if (iVar1 == 2) {
        iVar1 = FUN_ram_48180126(iVar3,param_3,*param_2);
        return iVar1;
      }
      iVar1 = FUN_ram_48180138(iVar3);
      return iVar1;
    }
  }
  return -0x4f80;
}


