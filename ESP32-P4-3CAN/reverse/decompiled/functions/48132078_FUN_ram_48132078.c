/* Firmware entry: 0x48132078 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48132078(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  _DAT_ram_5011015c = *param_2;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(iVar2 + 0xc) = _DAT_ram_5011015c;
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  *(undefined4 *)(iVar2 + 0x14) = uVar1;
  return;
}


