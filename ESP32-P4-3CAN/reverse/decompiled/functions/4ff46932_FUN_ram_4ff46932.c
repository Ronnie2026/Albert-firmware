/* Firmware entry: 0x4ff46932 */

undefined4 FUN_ram_4ff46932(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 + -0x13fc0000 < (undefined4 *)0xc0000 || param_1 + -0xc040000 < (undefined4 *)0x2000)
     || (param_1 + -0x14042000 < (undefined4 *)0x8000)) {
    if (*(int *)(param_2 + 0x20) == 0) {
      *param_1 = &PTR_LAB_ram_4ff42a3e_ram_4ff5319c;
      uVar1 = FUN_ram_48131390();
      return uVar1;
    }
  }
  else if (*(int *)(param_2 + 0x20) == 0) {
    return 0x102;
  }
  *param_1 = &PTR_LAB_ram_4ff41914_ram_4ff587b8;
  uVar1 = FUN_ram_48131390();
  return uVar1;
}


