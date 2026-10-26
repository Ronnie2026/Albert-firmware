/* Firmware entry: 0x481603ec */

int FUN_ram_481603ec(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_48 = (param_3 & 0x1ffff) << 9 | (param_2 & 7) << 0x1c | param_4 | 0x88000000;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_24 = 0x1c00;
  uStack_4c = 0x34;
  iVar1 = FUN_ram_4816272a(param_1,&uStack_4c);
  if (iVar1 == 0) {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = (char)uStack_44;
    }
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_io","E (%lu) %s: %s: sdmmc_io_rw_direct (write 0x%lu) returned 0x%x\n",
                   uVar2,"sdmmc_io","sdmmc_io_write_byte",param_3,iVar1);
  return iVar1;
}


