/* Firmware entry: 0x4ff46a12 */

undefined4 FUN_ram_4ff46a12(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0x105;
  if (((param_2 >> 0x10 == 200) && (uVar1 = 0, (param_2 & 0xdf00) != 0x4000)) &&
     (uVar1 = 0x105, (param_2 & 0xff00) == 0x4300)) {
    uVar1 = 0;
  }
  return uVar1;
}


