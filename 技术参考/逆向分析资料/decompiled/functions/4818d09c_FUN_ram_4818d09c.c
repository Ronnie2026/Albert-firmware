/* Firmware entry: 0x4818d09c */

undefined4 FUN_ram_4818d09c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0xc0);
  if (iVar2 == 0) {
    return 0xfffffff4;
  }
  if (*param_2 == 0) {
    iVar2 = FUN_ram_48158d16(iVar2,param_2[1],*(undefined2 *)((int)param_2 + 10),param_2);
  }
  else {
    iVar1 = FUN_ram_4813ad9a(0,(short)param_2[2],0x280);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    FUN_ram_4813b37c(iVar1,param_2);
    iVar2 = FUN_ram_48158d16(iVar2,*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 10),iVar1);
    FUN_ram_4813ac74(iVar1);
  }
  if (iVar2 == 0x102) {
    return 0xfffffff0;
  }
  if (0x102 < iVar2) {
    if (iVar2 != 0x500e) {
      return 0xfffffff4;
    }
    return 0xfffffffe;
  }
  if (iVar2 != 0) {
    if (iVar2 == 0x101) {
      return 0xffffffff;
    }
    return 0xfffffff4;
  }
  return 0;
}


