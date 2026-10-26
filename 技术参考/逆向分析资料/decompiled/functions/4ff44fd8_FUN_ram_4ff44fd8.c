/* Firmware entry: 0x4ff44fd8 */

void FUN_ram_4ff44fd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff2fe04();
  uVar2 = FUN_ram_4ff219c4();
  DAT_ram_4ff6daa0 = (uint)uVar1 - (int)uVar2;
  DAT_ram_4ff6daa4 =
       ((int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20)) -
       (uint)((uint)uVar1 < DAT_ram_4ff6daa0);
  return;
}


