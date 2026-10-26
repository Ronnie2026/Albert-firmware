/* Firmware entry: 0x4ff37582 */

void FUN_ram_4ff37582(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1 >> 0x1f;
  iVar3 = param_1 / 10 + iVar2;
  if (iVar3 == iVar2) {
    FUN_ram_4ff3732e(0x20);
    FUN_ram_4ff37386(0x20);
  }
  else {
    uVar1 = (iVar3 - iVar2) + 0x30U & 0xff;
    FUN_ram_4ff3732e(uVar1);
    FUN_ram_4ff37386(uVar1);
  }
  uVar1 = param_1 + (iVar3 - iVar2) * -10 + 0x30U & 0xff;
  FUN_ram_4ff3732e(uVar1);
  FUN_ram_4ff37386(uVar1);
  return;
}


