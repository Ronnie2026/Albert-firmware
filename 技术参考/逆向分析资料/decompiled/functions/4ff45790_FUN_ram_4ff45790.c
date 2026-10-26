/* Firmware entry: 0x4ff45790 */

undefined4 FUN_ram_4ff45790(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_ram_4ff6e0b8;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == 0) {
    *param_1 = DAT_ram_4ff6e0b8;
    if (iVar1 == 0) {
      return 0x6003;
    }
  }
  iVar1 = FUN_ram_4ff45788();
  if (iVar1 != 0) {
    return 0;
  }
  return 0x6003;
}


