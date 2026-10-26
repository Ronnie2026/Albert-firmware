/* Firmware entry: 0x4812d5fc */

undefined4 FUN_ram_4812d5fc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint auStack_60 [6];
  undefined4 auStack_48 [13];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  iVar4 = FUN_ram_4812d0f8(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar3 = *(uint *)(param_1 + 8);
      if (uVar3 == 0) {
        iVar4 = FUN_ram_4812e1d6(1,0,0);
        if (iVar4 != 0) {
          uVar5 = FUN_ram_4812e61e(iVar4,0,*(undefined4 *)(iVar4 + 0x10));
          return uVar5;
        }
        return 0x105;
      }
      iVar4 = FUN_ram_4812ce04(auStack_60);
      if (iVar4 == 0) {
        uVar5 = 0x105;
      }
      else {
        iVar1 = 0x10;
        while (iVar6 = FUN_ram_4812e1d6(0,iVar1,0), iVar6 != 0) {
          iVar1 = iVar1 + 1;
          if (iVar1 == 0x21) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("esp_ota_ops.c",0x222,"esp_ota_get_app_partition_count",
                             "ota_app_count < 16 && \"must erase the partition before writing to it\""
                            );
          }
        }
        uVar2 = iVar1 - 0x10U & 0xffff;
        uVar3 = uVar3 & 0xf;
        uVar5 = 0x102;
        if (uVar3 < uVar2) {
          uVar7 = FUN_ram_4812ea5a(auStack_60);
          uVar3 = uVar3 + 1;
          if (uVar7 == 0xffffffff) {
            auStack_48[0] = 0;
            uVar5 = FUN_ram_4812cf4c(auStack_60,uVar3,0,iVar4);
          }
          else {
            for (uVar3 = uVar3 % uVar2; uVar3 < auStack_60[uVar7 * 8]; uVar3 = uVar2 + uVar3) {
            }
            auStack_48[(~uVar7 & 1) * 8] = 0;
            uVar5 = FUN_ram_4812cf4c(auStack_60,uVar3,~uVar7 & 1,iVar4);
          }
        }
      }
    }
    else {
      uVar5 = 0x102;
    }
    return uVar5;
  }
  return 0x1503;
}


