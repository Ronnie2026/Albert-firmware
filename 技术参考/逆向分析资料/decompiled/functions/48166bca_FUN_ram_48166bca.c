/* Firmware entry: 0x48166bca */

int FUN_ram_48166bca(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
  puVar1 = (undefined4 *)FUN_ram_4819bf88();
  *puVar1 = 0;
  iVar2 = FUN_ram_48193310(*(undefined4 *)(param_1 + 0x1c),*puVar3,*(undefined4 *)(param_1 + 0x8c),
                           *(undefined4 *)(param_1 + 0x88));
  if ((-1 < iVar2) && ((*(char *)(param_1 + 0xc4) == '\0' || (iVar2 != 0)))) {
    FUN_ram_4818d63e(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),*puVar3,iVar2);
  }
  return iVar2;
}


