/* Firmware entry: 0x481876e6 */

undefined4 FUN_ram_481876e6(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0x180) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_sha","E (%lu) %s: Invalid t for SHA512/t, t = %u,cannot be 384\n",uVar2,
                     "esp_sha",0x180);
    uVar2 = 0xffffffff;
  }
  else {
    if (param_1 < 10) {
      uVar1 = (param_1 + 0x30) * 0x1000000 | 0x800000;
      uVar2 = 0x48;
    }
    else if (param_1 < 100) {
      uVar2 = 0x50;
      uVar1 = (param_1 % 10 + 0x30) * 0x10000 | (param_1 / 10 + 0x30) * 0x1000000 | 0x8000;
    }
    else {
      if (0x200 < param_1) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_sha",
                         "E (%lu) %s: Invalid t for SHA512/t, t = %u, must equal or less than 512\n"
                         ,uVar2,"esp_sha",param_1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xffffffff;
      }
      uVar2 = 0x58;
      uVar1 = ((param_1 / 10) % 10 + 0x30) * 0x10000 + (param_1 / 100 + 0x30) * 0x1000000 |
              (param_1 % 10 + 0x30) * 0x100 | 0x80;
    }
    FUN_ram_4818b746(uVar1,uVar2);
    uVar2 = 0;
  }
  return uVar2;
}


