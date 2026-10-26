/* Firmware entry: 0x48005e98 */

void FUN_ram_48005e98(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff216d6(&DAT_ram_4ff6da84);
  if (DAT_ram_4ff6da90 != 0 || DAT_ram_4ff6da94 != 0) {
    FUN_ram_48005d3a();
    DAT_ram_4ff6da90 = 0;
    DAT_ram_4ff6da94 = 0;
  }
  FUN_ram_4ff216e2(&DAT_ram_4ff6da84);
  uVar5 = *param_1;
  uVar4 = param_1[1];
  uVar1 = param_1[2];
  uVar6 = uVar5 * 1000000;
  uVar2 = uVar1 + uVar6;
  uVar7 = FUN_ram_481a9d86();
  uVar3 = uVar2 - (int)uVar7;
  FUN_ram_4ff45040(uVar3,(((uint)(uVar2 < uVar6) +
                          uVar4 * 1000000 + (int)((ulonglong)uVar5 * 1000000 >> 0x20) +
                          ((int)uVar1 >> 0x1f)) - (int)((ulonglong)uVar7 >> 0x20)) -
                         (uint)(uVar2 < uVar3));
  return;
}


