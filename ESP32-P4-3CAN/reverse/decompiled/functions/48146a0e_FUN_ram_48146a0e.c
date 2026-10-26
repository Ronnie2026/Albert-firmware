/* Firmware entry: 0x48146a0e */

void FUN_ram_48146a0e(int param_1,uint param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 9) != '\x02') &&
     ((*(char *)(param_1 + 9) != '\x01' ||
      ((*(ushort *)(param_1 + 10) != 0 && (*(ushort *)(param_1 + 10) <= param_2)))))) {
    return;
  }
  if (2 < param_2) {
    uVar1 = FUN_ram_4ff2d260();
    *(short *)(param_1 + 10) = (short)(uVar1 % param_2);
    if (uVar1 % param_2 != 0) goto LAB_ram_48146a42;
  }
  *(undefined2 *)(param_1 + 10) = 1;
LAB_ram_48146a42:
  if (DAT_ram_4ff6e219 == '\0') {
    FUN_ram_48142636(100,&LAB_ram_4814704e,0);
    DAT_ram_4ff6e219 = '\x01';
  }
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}


