/* Firmware entry: 0x4800983e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4800983e(uint param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar6,
                     &DAT_ram_481b4c88,"uart_set_baudrate",0x177);
    return -1;
  }
  iVar1 = param_1 * 0x38;
  FUN_ram_48131882(&DAT_ram_4ff48228 + iVar1,&uStack_3c);
  iVar4 = FUN_ram_481a4bb6(uStack_3c,0,&iStack_38);
  if (iVar4 != 0) {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): invalid src_clk\n",uVar6,
                     &DAT_ram_481b4c88,"uart_set_baudrate",0x17d);
    return iVar4;
  }
  iVar7 = iVar1 + 0x4ff48230;
  FUN_ram_4ff3ec14(iVar7,0xffffffff);
  iVar4 = DAT_ram_4ff48340;
  if (param_1 == 5) {
    if (param_2 != 0) {
      param_2 = (uint)(iStack_38 << 4) / param_2;
      uVar5 = param_2 >> 4;
      if (uVar5 < 0x1000) {
        *(uint *)(DAT_ram_4ff48340 + 0x14) =
             uVar5 & 0xfff | *(uint *)(DAT_ram_4ff48340 + 0x14) & 0xfffff000;
        *(uint *)(iVar4 + 0x14) = (param_2 & 0xf) << 0x14 | *(uint *)(iVar4 + 0x14) & 0xff0fffff;
        *(uint *)(iVar4 + 0x98) = *(uint *)(iVar4 + 0x98) | 1;
        do {
        } while ((*(uint *)(iVar4 + 0x98) & 1) != 0);
LAB_ram_4800999c:
        FUN_ram_4ff3ee10(iVar7);
        return 0;
      }
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff48348);
  }
  else {
    FUN_ram_4ff3122a();
    puVar2 = *(undefined1 **)(&DAT_ram_4ff48228 + iVar1);
    if (puVar2 == (undefined1 *)0x50121000) {
LAB_ram_48009b72:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    if (param_2 != 0) {
      uVar5 = (iStack_38 - 1U) + param_2 * 0xfff;
      iVar1 = __udivdi3(uVar5,(((param_2 >> 0x14) - (uint)(param_2 * 0x1000 < param_2 * 0xfff)) -
                              (uint)(iStack_38 == 0)) + (uint)(uVar5 < iStack_38 - 1U));
      uVar5 = iVar1 - 1;
      if (uVar5 < 0x100) {
        uVar3 = (uint)(iStack_38 << 4) / (param_2 * iVar1);
        *(uint *)(puVar2 + 0x14) = *(uint *)(puVar2 + 0x14) & 0xfffff000 | (uVar3 & 0xffff) >> 4;
        *(uint *)(puVar2 + 0x14) = *(uint *)(puVar2 + 0x14) & 0xff0fffff | (uVar3 & 0xf) << 0x14;
        if (puVar2 == &DAT_ram_500ca000) {
          _DAT_ram_500e606c = _DAT_ram_500e606c & 0xffffff00 | uVar5 & 0xff;
          uStack_34 = _DAT_ram_500e606c;
        }
        else if (puVar2 == &DAT_ram_500cb000) {
          _DAT_ram_500e6070 = _DAT_ram_500e6070 & 0xffffff00 | uVar5 & 0xff;
          uStack_30 = _DAT_ram_500e6070;
        }
        else if (puVar2 == &DAT_ram_500cc000) {
          _DAT_ram_500e6074 = _DAT_ram_500e6074 & 0xffffff00 | uVar5 & 0xff;
          uStack_2c = _DAT_ram_500e6074;
        }
        else if (puVar2 == &DAT_ram_500cd000) {
          _DAT_ram_500e6078 = _DAT_ram_500e6078 & 0xffffff00 | uVar5 & 0xff;
          uStack_28 = _DAT_ram_500e6078;
        }
        else {
          if (puVar2 != &DAT_ram_500ce000) goto LAB_ram_48009b72;
          _DAT_ram_500e607c = _DAT_ram_500e607c & 0xffffff00 | uVar5 & 0xff;
          uStack_24 = _DAT_ram_500e607c;
        }
        *(uint *)(puVar2 + 0x98) = *(uint *)(puVar2 + 0x98) | 1;
        do {
        } while ((*(uint *)(puVar2 + 0x98) & 1) != 0);
        FUN_ram_4ff31240();
        goto LAB_ram_4800999c;
      }
    }
    FUN_ram_4ff31240();
    FUN_ram_4ff3ee10(iVar7);
  }
  uVar6 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): baud rate unachievable\n",uVar6,
                   &DAT_ram_481b4c88,"uart_set_baudrate",0x18c);
  return -1;
}


