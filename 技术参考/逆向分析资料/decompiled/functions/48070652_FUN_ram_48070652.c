/* Firmware entry: 0x48070652 */

void FUN_ram_48070652(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = (uint)*(byte *)(param_1 + 0x44c);
  if (uVar3 < 5) {
    uVar2 = 5;
    if (uVar3 < 3) {
      uVar2 = 3;
      if (uVar3 != 1) {
        uVar2 = (uint)(uVar3 == 2) << 2;
      }
    }
  }
  else {
    uVar2 = 7;
    if (uVar3 != 5) {
      uVar2 = -(uint)(uVar3 == 6) & uVar3;
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x898);
  uVar3 = *(uint *)(param_1 + 8);
  uVar7 = FUN_ram_4ff21a0a();
  if (*(char *)(param_1 + 0x44c) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x480) + 5000;
  }
  else if (*(char *)(param_1 + 0x44c) == '\x02') {
    iVar4 = *(int *)(param_1 + 0x484) + 10000;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x480) + 120000;
  }
  if (2 < uVar3) {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x488);
  piVar1 = &DAT_ram_4ff5ced4 + uVar3 * 7;
  *piVar1 = *piVar1 + 1;
  (&DAT_ram_4ff5ced8)[uVar3 * 7] = uVar5;
  (&DAT_ram_4ff5cedc)[uVar3 * 7] = uVar2;
  uVar5 = __divdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  (&DAT_ram_4ff5cee0)[uVar3 * 7] = uVar5;
  (&DAT_ram_4ff5cee4)[uVar3 * 7] = iVar4;
  (&DAT_ram_4ff5cee8)[uVar3 * 7] = uVar6;
  (&DAT_ram_4ff5ceec)[uVar3 * 7] = 0;
  *piVar1 = *piVar1 + 1;
  return;
}


