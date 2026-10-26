/* Firmware entry: 0x4818aebe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818aebe(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0x30) {
    _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffff3 | 8;
    FUN_ram_4818acb2();
  }
  else {
    _DAT_ram_5009301c = (uint)(param_4 == 0x20) << 2 | _DAT_ram_5009301c & 0xfffffff3;
    FUN_ram_4818acb2();
    if (param_4 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  iVar2 = 0;
  do {
    puVar3 = (undefined4 *)(param_1 + iVar2);
    puVar1 = (undefined4 *)(iVar2 + 0x50093100);
    iVar2 = iVar2 + 4;
    *puVar1 = *puVar3;
  } while (iVar2 < param_4);
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_2 + iVar2);
    puVar3 = (undefined4 *)(iVar2 + 0x50093130);
    iVar2 = iVar2 + 4;
    *puVar3 = *puVar1;
  } while (iVar2 < param_4);
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_3 + iVar2);
    puVar3 = (undefined4 *)(iVar2 + 0x50093160);
    iVar2 = iVar2 + 4;
    *puVar3 = *puVar1;
  } while (iVar2 < param_4);
  return;
}


