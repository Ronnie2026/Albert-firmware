/* Firmware entry: 0x4819474a */

void FUN_ram_4819474a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e2c8 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"ESP_DS_COMMON","E (%lu) %s: s_ds_lock is NULL, cannot release lock\n",uVar3,
                     "ESP_DS_COMMON");
    return;
  }
  iVar1 = FUN_ram_4ff3ae5a();
  iVar2 = FUN_ram_4ff3d9a8();
  if (iVar1 != iVar2) {
    return;
  }
  FUN_ram_4ff3afa2(DAT_ram_4ff6e2c8,0,0,0);
  return;
}


