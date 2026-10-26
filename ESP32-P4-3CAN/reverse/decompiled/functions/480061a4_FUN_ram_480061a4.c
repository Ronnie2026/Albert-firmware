/* Firmware entry: 0x480061a4 */

/* WARNING: Removing unreachable block (ram,0x4800621a) */

undefined4 FUN_ram_480061a4(uint param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (999 < param_1) {
    uVar4 = thunk_FUN_ram_4ff219c4();
    uVar1 = uVar4 + param_1;
    uVar2 = (uint)uVar1 + 999;
    do {
      uVar3 = uVar2 - (int)uVar4;
      __udivdi3(uVar3,(((uint)(uVar2 < (uint)uVar1) + (int)(uVar1 >> 0x20)) - (int)(uVar4 >> 0x20))
                      - (uint)(uVar2 < uVar3),1000,0);
      FUN_ram_4ff3c2b6();
      uVar4 = thunk_FUN_ram_4ff219c4();
    } while (uVar4 < uVar1);
    return 0;
  }
  ets_delay_us();
  return 0;
}


