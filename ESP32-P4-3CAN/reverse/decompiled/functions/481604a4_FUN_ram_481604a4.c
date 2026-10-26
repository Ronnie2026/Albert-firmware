/* Firmware entry: 0x481604a4 */

int FUN_ram_481604a4(int param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_3c = param_6 + 3 & 0xfffffffc;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_34 = 0x1c00;
  uStack_5c = 0x35;
  uStack_38 = 0x200;
  iStack_44 = param_5;
  uStack_40 = param_6;
  iVar1 = (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 4),param_5,uStack_3c);
  if (param_6 == 0) {
    if ((int)(param_4 << 4) < 0) goto LAB_ram_48160508;
LAB_ram_4816058e:
    uStack_58 = param_6;
    uStack_38 = param_6;
LAB_ram_4816051a:
    uStack_58 = (param_2 & 7) << 0x1c | param_4 | (param_3 & 0x1ffff) << 9 | uStack_58;
    if ((int)uStack_58 < 0) {
      iVar1 = FUN_ram_4816272a(param_1,&uStack_5c);
    }
    else {
      uStack_34 = uStack_34 | 0x40;
      iVar1 = FUN_ram_4816272a(param_1,&uStack_5c);
      if ((param_6 != 0) && (iStack_44 == *(int *)(param_1 + 0x54))) {
        if (0x200 < param_6) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("sdmmc_io.c",0x175,"sdmmc_io_rw_extended",
                           "datalen <= SDMMC_IO_BLOCK_SIZE");
        }
        FUN_ram_4ff45158(param_5,iStack_44,param_6);
      }
    }
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_io","E (%lu) %s: %s: sdmmc_send_cmd returned 0x%x\n",uVar2,
                       "sdmmc_io","sdmmc_io_rw_extended",iVar1);
    }
  }
  else {
    if (iVar1 == 0) {
      if ((0x200 < param_6) || (*(void **)(param_1 + 0x54) == (void *)0x0)) {
        return 0x102;
      }
      memset(*(void **)(param_1 + 0x54),0xcc,0x200);
      if ((int)param_4 < 0) {
        FUN_ram_4ff45158(*(undefined4 *)(param_1 + 0x54),param_5,param_6);
      }
      iStack_44 = *(int *)(param_1 + 0x54);
      uStack_3c = 0x200;
      if (-1 < (int)(param_4 << 4)) {
LAB_ram_48160584:
        uStack_58 = 0;
        uStack_38 = param_6;
        if (param_6 != 0x200) goto LAB_ram_4816058e;
        goto LAB_ram_4816051a;
      }
LAB_ram_48160508:
      if (uStack_40 % uStack_38 == 0) {
        uStack_58 = uStack_40 / uStack_38 & 0x1ff;
        goto LAB_ram_4816051a;
      }
    }
    else {
      if ((int)(param_4 << 4) < 0) goto LAB_ram_48160508;
      if (param_6 < 0x201) goto LAB_ram_48160584;
    }
    iVar1 = 0x104;
  }
  return iVar1;
}


