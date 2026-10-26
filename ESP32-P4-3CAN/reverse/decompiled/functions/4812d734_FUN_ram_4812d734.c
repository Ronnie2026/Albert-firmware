/* Firmware entry: 0x4812d734 */

void FUN_ram_4812d734(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int aiStack_50 [8];
  undefined1 auStack_30 [36];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4812ce04(aiStack_50);
  if (iVar2 != 0) {
    iVar2 = 0x10;
    while (iVar3 = FUN_ram_4812e1d6(0,iVar2,0), iVar3 != 0) {
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x21) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("esp_ota_ops.c",0x222,"esp_ota_get_app_partition_count",
                         "ota_app_count < 16 && \"must erase the partition before writing to it\"");
      }
    }
    iVar3 = FUN_ram_4812ea04(aiStack_50);
    if (((iVar3 == 0) || (iVar3 = FUN_ram_4812ea04(auStack_30), iVar3 == 0)) &&
       (uVar1 = iVar2 - 0x10U & 0xffff, uVar1 != 0)) {
      iVar2 = FUN_ram_4812ea5a(aiStack_50);
      if (iVar2 != -1) {
        FUN_ram_4812e1d6(0,(aiStack_50[iVar2 * 8] - 1U) % uVar1 + 0x10,0);
        return;
      }
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_ota_ops",
                       "E (%lu) %s: ota data invalid, no current app. Assuming factory\n",uVar4,
                       "esp_ota_ops");
    }
    FUN_ram_4812cec8();
  }
  return;
}


