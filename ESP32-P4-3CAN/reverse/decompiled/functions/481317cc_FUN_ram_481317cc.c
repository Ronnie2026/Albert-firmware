/* Firmware entry: 0x481317cc */

void FUN_ram_481317cc(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff2cffa();
  iVar2 = FUN_ram_4ff31f12(0x6f,1,4,4,0);
  uVar3 = FUN_ram_4ff31f12(0x6f,1,9,7,0);
  iVar4 = FUN_ram_4ff31f12(0x6f,1,8,7,0);
  iVar5 = FUN_ram_4ff31f12(0x6f,1,7,5,0);
  uVar6 = (iVar5 + 4) * 0x10000 | iVar4 << 8 | uVar3;
  uVar3 = uVar6 * uVar1;
  __udivdi3(uVar3 * 1000000,
            (int)((ulonglong)uVar6 * (ulonglong)uVar1 >> 0x20) * 1000000 +
            (int)((ulonglong)uVar3 * 1000000 >> 0x20),(iVar2 + 2) * 0x20000,0);
  return;
}


