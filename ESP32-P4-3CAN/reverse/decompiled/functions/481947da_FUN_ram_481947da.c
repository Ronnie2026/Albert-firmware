/* Firmware entry: 0x481947da */

undefined4 FUN_ram_481947da(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  if (*param_1 == 0) {
    return 0x102;
  }
  iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6e2c8,DAT_ram_4ff6e2c4);
  if (iVar2 == 1) {
    uVar1 = *(ushort *)((int)param_1 + 6);
    DAT_ram_4ff6e2cc = (int *)*param_1;
    DAT_ram_4ff47fa8 = (uint)*(byte *)(param_1 + 1);
    iVar3 = FUN_ram_4ff3057c();
    iVar2 = (uVar1 >> 5) - 1;
    if (iVar3 == 0) {
      if (*DAT_ram_4ff6e2cc != iVar2) {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"ESP_DS_COMMON","E (%lu) %s: RSA length mismatch %u, %u\n",uVar4,
                         "ESP_DS_COMMON",*DAT_ram_4ff6e2cc,iVar2);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x102;
      }
    }
    else {
      *DAT_ram_4ff6e2cc = iVar2;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"ESP_DS_COMMON",
                     "E (%lu) %s: ds_lock could not be obtained in specified time\n",uVar4,
                     "ESP_DS_COMMON");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


