/* Firmware entry: 0x4ff3732e */

void FUN_ram_4ff3732e(undefined1 param_1)

{
  undefined1 auStack_21 [9];
  undefined4 uStack_18;
  uint uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = 0;
  do {
    while (uStack_14 = *(uint *)(DAT_ram_4ff47d94 + 0x1c), DAT_ram_4ff47d94 == 0x50121000) {
      if ((uStack_14 >> 0x13 & 0x1f) != 0x10) goto LAB_ram_4ff37360;
    }
  } while ((uStack_14 >> 0x10 & 0xff) == 0x80);
LAB_ram_4ff37360:
  auStack_21[0] = param_1;
  FUN_ram_4ff43138(&DAT_ram_4ff47d94,auStack_21,1,&uStack_18);
  return;
}


