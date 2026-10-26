/* Firmware entry: 0x48000378 */

undefined4 FUN_ram_48000378(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar1 = FUN_ram_4800031a();
    return uVar1;
  }
  return 0x102;
}


