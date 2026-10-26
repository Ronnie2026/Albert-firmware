/* Firmware entry: 0x48009b7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48009b7a(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar1,
                     &DAT_ram_481b4c88,"uart_get_baudrate",0x192);
    return -1;
  }
  if (param_1 == 3) {
    uVar5 = _DAT_ram_500e60c4 >> 0x10 & 1;
    uVar3 = _DAT_ram_500e601c >> 10 & 1;
    uVar4 = _DAT_ram_500e6018 >> 0x15 & 1;
LAB_ram_48009c1e:
    if ((uVar5 != 0) || (uVar3 == 0)) goto LAB_ram_48009bb4;
  }
  else {
    if (param_1 < 4) {
      if (param_1 == 1) {
        uVar5 = _DAT_ram_500e60c4 >> 0xe & 1;
        uVar3 = _DAT_ram_500e601c >> 8 & 1;
        uVar4 = _DAT_ram_500e6018 >> 0x13 & 1;
      }
      else if (param_1 == 2) {
        uVar5 = _DAT_ram_500e60c4 >> 0xf & 1;
        uVar3 = _DAT_ram_500e601c >> 9 & 1;
        uVar4 = _DAT_ram_500e6018 >> 0x14 & 1;
      }
      else {
        uVar5 = _DAT_ram_500e60c4 >> 0xd & 1;
        uVar3 = _DAT_ram_500e601c >> 7 & 1;
        uVar4 = _DAT_ram_500e6018 >> 0x12 & 1;
      }
      goto LAB_ram_48009c1e;
    }
    if (param_1 == 4) {
      uVar5 = _DAT_ram_500e60c4 >> 0x11 & 1;
      uVar3 = _DAT_ram_500e601c >> 0xb & 1;
      uVar4 = _DAT_ram_500e6018 >> 0x16 & 1;
      goto LAB_ram_48009c1e;
    }
    uVar4 = _DAT_ram_50120000 >> 0x1d & 1;
    if (_DAT_ram_50120008 << 3 < 0) goto LAB_ram_48009bb4;
  }
  if (uVar4 != 0) {
    FUN_ram_48131882(&DAT_ram_4ff48228 + param_1 * 0x38,&uStack_28);
    iVar2 = FUN_ram_481a4bb6(uStack_28,0,auStack_24);
    if (iVar2 == 0) {
      iVar2 = param_1 * 0x38 + 0x4ff48230;
      FUN_ram_4ff3ec14(iVar2,0xffffffff);
      FUN_ram_48131958(&DAT_ram_4ff48228 + param_1 * 0x38,param_2,auStack_24[0]);
      FUN_ram_4ff3ee10(iVar2);
      return 0;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): Invalid src_clk\n",uVar1,
                     &DAT_ram_481b4c88,"uart_get_baudrate",0x199);
    return iVar2;
  }
LAB_ram_48009bb4:
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,
                   "E (%lu) %s: %s(%d): uart port not enabled, unable to get register values\n",
                   uVar1,&DAT_ram_481b4c88,"uart_get_baudrate",0x193);
  return -1;
}


