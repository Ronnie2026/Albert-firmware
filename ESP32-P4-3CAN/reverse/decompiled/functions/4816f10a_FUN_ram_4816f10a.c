/* Firmware entry: 0x4816f10a */

longlong FUN_ram_4816f10a(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_20 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  uStack_14 = 0;
  iVar1 = FUN_ram_4800622e(4,&local_20);
  if (iVar1 == 0) {
    uVar2 = iStack_18 / 1000000 + local_20 * 1000;
    return CONCAT44((uint)(uVar2 < local_20 * 1000) +
                    iStack_1c * 1000 + (int)((ulonglong)local_20 * 1000 >> 0x20) +
                    (iStack_18 / 1000000 >> 0x1f),uVar2);
  }
  lVar3 = FUN_ram_4819b728(0);
  return lVar3 * 1000;
}


