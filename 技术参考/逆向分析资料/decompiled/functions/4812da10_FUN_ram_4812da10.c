/* Firmware entry: 0x4812da10 */

int FUN_ram_4812da10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 auStack_60 [6];
  int aiStack_48 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4812ce04(auStack_60);
  if (iVar2 == 0) {
    return 0x105;
  }
  uVar3 = FUN_ram_4812ea5a(auStack_60);
  iVar1 = 0x10;
  if (uVar3 != 0xffffffff) {
    while (iVar4 = FUN_ram_4812e1d6(0,iVar1,0), iVar4 != 0) {
      iVar1 = iVar1 + 1;
      if (iVar1 == 0x21) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("esp_ota_ops.c",0x222,"esp_ota_get_app_partition_count",
                         "ota_app_count < 16 && \"must erase the partition before writing to it\"");
      }
    }
    if ((iVar1 - 0x10U & 0xffff) != 0) {
      if (param_1 == 0) {
        iVar1 = FUN_ram_4812d8ec();
        if (iVar1 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp_ota_ops",
                           "E (%lu) %s: Rollback is not possible, do not have any suitable apps in slots\n"
                           ,uVar5,"esp_ota_ops");
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0x1505;
        }
        aiStack_48[uVar3 * 8] = 3;
        if ((uVar3 & 0xff) < 2) {
          iVar2 = FUN_ram_4812cf4c(auStack_60,auStack_60[uVar3 * 8],uVar3 & 0xff,iVar2);
          if (iVar2 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"esp_ota_ops",
                             "I (%lu) %s: Rollback to previously worked partition.\n",uVar5,
                             "esp_ota_ops");
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0;
          }
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar2;
        }
      }
      else {
        if (aiStack_48[uVar3 * 8] == 2) {
          return 0;
        }
        aiStack_48[uVar3 * 8] = 2;
        if ((uVar3 & 0xff) < 2) {
          iVar2 = FUN_ram_4812cf4c(auStack_60,auStack_60[uVar3 * 8],uVar3 & 0xff,iVar2);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar2;
        }
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x102;
    }
  }
  uVar5 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"esp_ota_ops","E (%lu) %s: Running firmware is factory\n",uVar5,"esp_ota_ops");
  return -1;
}


