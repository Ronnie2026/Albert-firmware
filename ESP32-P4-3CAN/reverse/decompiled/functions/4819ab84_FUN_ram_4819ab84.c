/* Firmware entry: 0x4819ab84 */

int FUN_ram_4819ab84(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char **ppcStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  char *pcStack_20;
  size_t sStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sStack_1c = strlen(param_2);
  puStack_18 = &DAT_ram_481df93c;
  uStack_14 = 1;
  iStack_24 = sStack_1c + 1;
  ppcStack_2c = &pcStack_20;
  uStack_28 = 2;
  iVar1 = *(int *)(param_1 + 8);
  pcStack_20 = param_2;
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_ram_4819a44c(param_1);
  }
  if (((*(uint *)(iVar1 + 100) & 1) == 0) && ((*(ushort *)(iVar1 + 0xc) & 0x200) == 0)) {
    FUN_ram_4ff21846(*(undefined4 *)(iVar1 + 0x58));
  }
  iVar2 = FUN_ram_4819a644(param_1,iVar1,&ppcStack_2c);
  if (((*(uint *)(iVar1 + 100) & 1) == 0) && ((*(ushort *)(iVar1 + 0xc) & 0x200) == 0)) {
    FUN_ram_4ff21966(*(undefined4 *)(iVar1 + 0x58));
  }
  return (-(uint)(iVar2 == 0) & 0xb) - 1;
}


