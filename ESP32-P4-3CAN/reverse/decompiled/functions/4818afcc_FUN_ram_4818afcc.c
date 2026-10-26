/* Firmware entry: 0x4818afcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818afcc(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0x30) {
    _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffff3 | 8;
    FUN_ram_4818acb2();
  }
  else {
    _DAT_ram_5009301c = (uint)(param_3 == 0x20) << 2 | _DAT_ram_5009301c & 0xfffffff3;
    FUN_ram_4818acb2();
    if (param_3 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + iVar3);
    puVar2 = (undefined4 *)(iVar3 + 0x50093130);
    iVar3 = iVar3 + 4;
    *puVar2 = *puVar1;
  } while (iVar3 < param_3);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(param_2 + iVar3);
    puVar2 = (undefined4 *)(iVar3 + 0x50093160);
    iVar3 = iVar3 + 4;
    *puVar2 = *puVar1;
  } while (iVar3 < param_3);
  return;
}


