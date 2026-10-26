/* Firmware entry: 0x4800d116 */

undefined4 FUN_ram_4800d116(void)

{
  undefined4 uVar1;
  undefined4 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_14[0] = 0;
  uVar1 = 0;
  if (DAT_ram_4ff6db10 != 0) {
    FUN_ram_4ff36946(*(undefined4 *)(DAT_ram_4ff6db10 + 4),0,0,0,0,auStack_14);
    uVar1 = auStack_14[0];
  }
  return uVar1;
}


