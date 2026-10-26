/* Firmware entry: 0x48151ee6 */

void FUN_ram_48151ee6(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if ((*(byte *)(iVar1 + 0x22) & 4) != 0) {
    *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) & 0xfb;
    FUN_ram_48151d04(iVar1,0x21);
  }
  FUN_ram_4814d00a(iVar1,0,0,0);
  FUN_ram_4814d05a(iVar1);
  FUN_ram_4814cf3a(iVar1,*(undefined4 *)(iVar1 + 0x121c),*(undefined4 *)(iVar1 + 0x1250));
  FUN_ram_4814cfa4(iVar1,*(undefined4 *)(iVar1 + 0x1224),*(undefined4 *)(iVar1 + 0x1228));
  return;
}


