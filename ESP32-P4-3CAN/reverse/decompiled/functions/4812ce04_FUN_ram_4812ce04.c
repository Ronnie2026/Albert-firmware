/* Firmware entry: 0x4812ce04 */

int FUN_ram_4812ce04(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4812e1d6(1,0,0);
  if (iVar2 == 0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_ota_ops","E (%lu) %s: not found otadata\n",uVar4,"esp_ota_ops");
    iVar2 = 0;
  }
  else {
    iStack_14 = 0;
    iVar3 = FUN_ram_4812e68a(iVar2,0,*(undefined4 *)(iVar2 + 0x10),0,&iStack_14,&uStack_18);
    iVar1 = iStack_14;
    if (iVar3 == 0) {
      FUN_ram_4ff45158(param_1,iStack_14,0x20);
      FUN_ram_4ff45158(param_1 + 0x20,*(int *)(iVar2 + 0x14) + iVar1,0x20);
      thunk_FUN_ram_4812fb50(uStack_18);
    }
    else {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_ota_ops","E (%lu) %s: mmap otadata filed. Err=0x%8x\n",uVar4,
                       "esp_ota_ops",iVar3);
      iVar2 = 0;
    }
  }
  return iVar2;
}


