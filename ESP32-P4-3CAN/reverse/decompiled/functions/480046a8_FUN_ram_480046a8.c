/* Firmware entry: 0x480046a8 */

undefined4 FUN_ram_480046a8(uint param_1,int *param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 < 0x40) && (param_2 != (int *)0x0)) && (*param_2 != 0)) {
    uVar1 = FUN_ram_48003c56();
    return uVar1;
  }
  return 0x102;
}


