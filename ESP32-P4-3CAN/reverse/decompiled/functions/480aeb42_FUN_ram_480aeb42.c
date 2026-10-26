/* Firmware entry: 0x480aeb42 */

undefined4 FUN_ram_480aeb42(void)

{
  undefined4 uVar1;
  void *pvVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de38 == (void *)0x0) {
    pvVar2 = (void *)FUN_ram_4ff206d8(0x47e0,0x404);
    if (pvVar2 != (void *)0x0) {
      memset(pvVar2,0,0x47e0);
      FUN_ram_480ae8ba(pvVar2);
      DAT_ram_4ff6de38 = pvVar2;
      goto LAB_ram_480aeb52;
    }
LAB_ram_480aebc4:
    uVar1 = 0;
  }
  else {
LAB_ram_480aeb52:
    if (DAT_ram_4ff6de34 == (void *)0x0) {
      pvVar2 = (void *)FUN_ram_4ff206d8(0x4000,0x404);
      if (pvVar2 == (void *)0x0) goto LAB_ram_480aebc4;
      memset(pvVar2,0,0x4000);
      DAT_ram_4ff6de34 = pvVar2;
    }
    uVar1 = 1;
  }
  return uVar1;
}


