/* Firmware entry: 0x4812f7e4 */

void FUN_ram_4812f7e4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff47f0c = param_1;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"esp_image",
                   "I (%lu) %s: Bootloader offsets for PRIMARY: 0x%x, Secondary: 0x%lx\n",uVar1,
                   "esp_image",0x2000,DAT_ram_4ff47f0c);
  iVar2 = FUN_ram_480019d8();
  iVar3 = FUN_ram_48001a20();
  if (iVar3 != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"esp_image","I (%lu) %s: Bootloader offset for RECOVERY: 0x%lx\n",uVar1,
                     "esp_image",iVar2);
    return;
  }
  if (iVar2 != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"esp_image","I (%lu) %s: Bootloader offset for RECOVERY: is disabled\n",uVar1
                     ,"esp_image");
    return;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"esp_image",
                   "I (%lu) %s: Bootloader offset for RECOVERY: has not been set yet\n",uVar1,
                   "esp_image");
  return;
}


