/* Firmware entry: 0x4812dbe2 */

undefined4 FUN_ram_4812dbe2(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_60 [6];
  int aiStack_48 [9];
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  if ((*(int *)(param_1 + 4) != 0) || (0xf < *(int *)(param_1 + 8) - 0x10U)) {
    return 0x106;
  }
  iVar2 = 0x10;
  while (iVar4 = FUN_ram_4812e1d6(0,iVar2,0), iVar4 != 0) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x21) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_ota_ops.c",0x222,"esp_ota_get_app_partition_count",
                       "ota_app_count < 16 && \"must erase the partition before writing to it\"");
    }
  }
  iVar4 = FUN_ram_4812ce04(local_60);
  if ((iVar4 != 0) && (uVar3 = iVar2 - 0x10U & 0xffff, uVar3 != 0)) {
    uVar1 = *(int *)(param_1 + 8) - 0x10;
    if ((uVar1 == (local_60[0] - 1U) % uVar3) &&
       (iVar2 = FUN_ram_4812e9f6(local_60), aiStack_48[1] == iVar2)) {
      iVar2 = 0;
LAB_ram_4812dc9e:
      *param_2 = aiStack_48[iVar2 * 8];
      return 0;
    }
    if (uVar1 == (aiStack_48[2] - 1U) % uVar3) {
      iVar4 = FUN_ram_4812e9f6(aiStack_48 + 2);
      iVar2 = 1;
      if (iStack_24 == iVar4) goto LAB_ram_4812dc9e;
    }
  }
  return 0x105;
}


