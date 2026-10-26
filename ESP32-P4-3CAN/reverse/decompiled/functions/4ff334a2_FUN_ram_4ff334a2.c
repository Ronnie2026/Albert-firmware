/* Firmware entry: 0x4ff334a2 */

undefined4 FUN_ram_4ff334a2(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    uVar1 = __udivdi3(0x12000000,0x7a,param_1,0);
    return uVar1;
  }
  return 0;
}


