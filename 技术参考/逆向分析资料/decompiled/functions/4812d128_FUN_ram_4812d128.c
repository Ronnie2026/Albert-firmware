/* Firmware entry: 0x4812d128 */

int FUN_ram_4812d128(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int aiStack_60 [7];
  int aiStack_44 [10];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4812ce04(aiStack_60);
  if (iVar3 != 0) {
    uVar4 = FUN_ram_4812ea5a(aiStack_60);
    iVar1 = 0x10;
    while (iVar5 = FUN_ram_4812e1d6(0,iVar1,0), iVar5 != 0) {
      iVar1 = iVar1 + 1;
      if (iVar1 == 0x21) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("esp_ota_ops.c",0x222,"esp_ota_get_app_partition_count",
                         "ota_app_count < 16 && \"must erase the partition before writing to it\"");
      }
    }
    if ((((uVar4 != 0xffffffff) && (uVar2 = iVar1 - 0x10U & 0xffff, uVar2 != 0)) &&
        (uVar4 = ~uVar4 & 1, aiStack_60[uVar4 * 8] != -1)) &&
       ((iVar5 = aiStack_44[uVar4 * 8], iVar1 = FUN_ram_4812e9f6(aiStack_60 + uVar4 * 8),
        iVar5 == iVar1 &&
        (iVar1 = FUN_ram_4812e1d6(0,(aiStack_60[uVar4 * 8] - 1U) % uVar2 + 0x10,0), iVar1 != 0)))) {
      iVar5 = DAT_ram_4ff6e094;
      if (DAT_ram_4ff6e094 == 0) {
        iVar5 = FUN_ram_4812cfa8();
      }
      if (iVar1 != iVar5) {
        if ((param_1 == 0) &&
           (iVar1 = FUN_ram_4812e61e(iVar1,0,*(undefined4 *)(iVar1 + 0x10)), iVar1 != 0)) {
          return iVar1;
        }
        iVar3 = FUN_ram_4812e61e(iVar3,-uVar4 & *(uint *)(iVar3 + 0x14));
        return iVar3;
      }
    }
  }
  return -1;
}


