/* Firmware entry: 0x4812dcc8 */

int FUN_ram_4812dcc8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int aiStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0x102;
  }
  iVar1 = FUN_ram_4812e238();
  if (iVar1 == 0) {
    return 0x105;
  }
  if (*(int *)(iVar1 + 4) == 0) {
    if (0xf < *(int *)(iVar1 + 8) - 0x10U) {
      return 0x102;
    }
    iVar2 = DAT_ram_4ff6e094;
    if (DAT_ram_4ff6e094 == 0) {
      iVar2 = FUN_ram_4812cfa8(0x102);
    }
    if (iVar1 == iVar2) {
      return 0x1501;
    }
    iVar2 = FUN_ram_4812dbe2(iVar2,aiStack_24);
    if ((iVar2 == 0) && (aiStack_24[0] == 1)) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_ota_ops",
                       "E (%lu) %s: Running app has not confirmed state (ESP_OTA_IMG_PENDING_VERIFY)\n"
                       ,uVar4,"esp_ota_ops");
      return 0x1506;
    }
  }
  puVar3 = (undefined4 *)FUN_ram_4812cdb0(iVar1);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x101;
  }
  iVar2 = *(int *)(iVar1 + 4);
  *(bool *)(puVar3 + 4) = param_2 == -2;
  *param_3 = *puVar3;
  if (iVar2 == 2) {
    FUN_ram_4812f7e4(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 4);
  }
  if (iVar2 - 2U < 2) {
    FUN_ram_481a9f4e(DAT_ram_4ff6e0b8,0);
  }
  if (param_2 != -2) {
    if (param_2 - 1U < 0xfffffffe) {
      uVar5 = (param_2 - 1U) + *(int *)(iVar1 + 0x14) & -*(int *)(iVar1 + 0x14);
    }
    else {
      uVar5 = *(uint *)(iVar1 + 0x10);
    }
    iVar2 = FUN_ram_4812e61e(iVar1,0,uVar5);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if ((*(int *)(iVar1 + 4) == 0) && (*(int *)(iVar1 + 8) - 0x10U < 0x10)) {
    FUN_ram_4812d128(1);
  }
  return 0;
}


