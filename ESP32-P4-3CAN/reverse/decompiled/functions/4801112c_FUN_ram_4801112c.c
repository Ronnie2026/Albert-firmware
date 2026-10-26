/* Firmware entry: 0x4801112c */

int FUN_ram_4801112c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (*(char *)(param_1 + 0xc) != '\x01')) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: serial invalid interface for write\n",uVar4,
                     "serial_ll");
    iVar1 = -1;
  }
  else if ((param_2 == 0) || (param_3 == 0)) {
    iVar1 = -1;
  }
  else if (param_3 < 0x2001) {
    uVar6 = 0;
    iVar5 = 0;
    uVar4 = 0;
    do {
      uVar2 = param_3;
      if (0x5f4 < param_3) {
        uVar2 = 0x5f4;
      }
      uVar2 = uVar2 & 0xffff;
      if (param_3 < 0x5f5) {
        uVar4 = *(undefined4 *)(PTR_PTR_ram_4ff47e40 + 0x10);
        iVar5 = param_2;
      }
      bVar3 = param_3 >= 0x5f5;
      iVar1 = FUN_ram_48022e0e(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5),
                               param_2 + uVar6,uVar2,0,iVar5,uVar4,bVar3);
      param_3 = param_3 - uVar2 & 0xffff;
      if (iVar1 != 0) {
        if ((bVar3) && (*(code **)(PTR_PTR_ram_4ff47e40 + 0x10) != (code *)0x0)) {
          (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_2);
        }
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: esp_hosted_tx failed at offset=%u len=%u\n",
                         uVar4,"serial_ll",uVar6,uVar2);
        return iVar1;
      }
      uVar6 = uVar2 + uVar6 & 0xffff;
      iVar1 = 0;
    } while (param_3 != 0);
  }
  else {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: Payload too large: %u bytes (max allowed: %u)\n",
                     uVar4,"serial_ll",param_3,0x2000);
    iVar1 = -1;
  }
  return iVar1;
}


