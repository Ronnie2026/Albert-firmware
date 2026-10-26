/* Firmware entry: 0x4800aa56 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4800aa56(uint param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar4,
                     &DAT_ram_481b4c88,"uart_param_config",0x3e4);
    return -1;
  }
  if (param_2 == (uint *)0x0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): param null\n",uVar4,&DAT_ram_481b4c88,
                     "uart_param_config",0x3e5);
    return -1;
  }
  bVar5 = 0x10;
  if (param_1 != 5) {
    bVar5 = 0x80;
  }
  if (bVar5 <= (byte)param_2[5]) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): rx flow thresh error\n",uVar4,
                     &DAT_ram_481b4c88,"uart_param_config",0x3e6);
    return -1;
  }
  if (3 < param_2[4]) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): hw_flowctrl mode error\n",uVar4,
                     &DAT_ram_481b4c88,"uart_param_config",999);
    return -1;
  }
  if (3 < param_2[1]) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): data bit error\n",uVar4,
                     &DAT_ram_481b4c88,"uart_param_config",1000);
    return -1;
  }
  FUN_ram_48008e6a(param_1);
  uVar10 = param_2[6];
  if (param_1 == 5) {
    if (uVar10 != 0) goto LAB_ram_4800ac70;
    iVar2 = FUN_ram_481a4bb6(0x11,0,&iStack_58);
    if (iVar2 != 0) goto LAB_ram_4800b0ca;
    FUN_ram_4ff2ff60(0x11,1);
    FUN_ram_48132e46();
    FUN_ram_4ff3ec14(&DAT_ram_4ff48348,0xffffffff);
    FUN_ram_48131cdc(&DAT_ram_4ff48340,5);
    puVar11 = &DAT_ram_4ff48348;
    piVar7 = &DAT_ram_4ff48340;
    iVar2 = 0x28;
LAB_ram_4800ae54:
    FUN_ram_4ff3122a();
    uVar10 = 0x11;
    _DAT_ram_50120004 = _DAT_ram_50120004 & 0x3fffffff;
LAB_ram_4800acf4:
    FUN_ram_4ff31240();
    iVar6 = DAT_ram_4ff48340;
    if (*param_2 != 0) {
      uVar3 = (uint)(iStack_58 << 4) / *param_2;
      uVar12 = uVar3 >> 4;
      if (uVar12 < 0x1000) {
        *(uint *)(DAT_ram_4ff48340 + 0x14) =
             uVar12 & 0xfff | *(uint *)(DAT_ram_4ff48340 + 0x14) & 0xfffff000;
        *(uint *)(iVar6 + 0x14) = (uVar3 & 0xf) << 0x14 | *(uint *)(iVar6 + 0x14) & 0xff0fffff;
        *(uint *)(iVar6 + 0x98) = *(uint *)(iVar6 + 0x98) | 1;
        do {
        } while ((*(uint *)(iVar6 + 0x98) & 1) != 0);
        FUN_ram_48131a98(piVar7,param_2[2]);
        FUN_ram_48131a68(piVar7,param_2[1]);
        FUN_ram_48131a36(piVar7,param_2[3]);
        FUN_ram_48131b7a(piVar7,0);
        FUN_ram_48131ae0(piVar7,param_2[4],(char)param_2[5]);
        FUN_ram_4ff3ee10(puVar11);
        FUN_ram_4ff4309c(piVar7);
        FUN_ram_4ff4305a(piVar7);
        FUN_ram_4ff2ff60(*(undefined4 *)(&DAT_ram_4ff4822c + (iVar2 - param_1) * 8),0);
        goto LAB_ram_4800adc2;
      }
    }
    FUN_ram_48131a98(piVar7,param_2[2]);
    FUN_ram_48131a68(piVar7,param_2[1]);
    FUN_ram_48131a36(piVar7,param_2[3]);
    FUN_ram_48131b7a(piVar7,0);
    FUN_ram_48131ae0(piVar7,param_2[4],(char)param_2[5]);
    FUN_ram_4ff3ee10(puVar11);
    FUN_ram_4ff4309c(piVar7);
    FUN_ram_4ff4305a(piVar7);
    FUN_ram_4ff2ff60(*(undefined4 *)(&DAT_ram_4ff4822c + (iVar2 - param_1) * 8),0);
  }
  else {
    if (uVar10 == 0) {
      iVar2 = FUN_ram_481a4bb6(9,0,&iStack_58);
      if (iVar2 != 0) goto LAB_ram_4800b0ca;
      iVar2 = param_1 * 0x38;
      FUN_ram_4ff2ff60(9,1);
      puVar11 = (undefined *)(iVar2 + 0x4ff48230);
      FUN_ram_4ff3ec14(puVar11,0xffffffff);
      piVar7 = (int *)(&DAT_ram_4ff48228 + iVar2);
      FUN_ram_48131cdc(piVar7,param_1);
      FUN_ram_4ff3122a();
      puVar8 = *(undefined1 **)(&DAT_ram_4ff48228 + iVar2);
      uVar10 = 9;
LAB_ram_4800ab0e:
      iVar6 = 2;
      if (uVar10 != 9) goto LAB_ram_4800b290;
    }
    else {
LAB_ram_4800ac70:
      iVar2 = FUN_ram_481a4bb6(uVar10,0,&iStack_58);
      if (iVar2 != 0) {
LAB_ram_4800b0ca:
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): invalid src_clk\n",uVar4,
                         &DAT_ram_481b4c88,"uart_param_config",0x3fb);
        return iVar2;
      }
      FUN_ram_4ff2ff60(uVar10,1);
      if (uVar10 == 0x11) {
        iVar2 = param_1 * 8;
        iVar9 = param_1 * 0x38;
        FUN_ram_48132e46();
        puVar11 = (undefined *)(iVar9 + 0x4ff48230);
        FUN_ram_4ff3ec14(puVar11,0xffffffff);
        piVar7 = (int *)(&DAT_ram_4ff48228 + iVar9);
        FUN_ram_48131cdc(piVar7,param_1);
        if (param_1 == 5) goto LAB_ram_4800ae54;
        FUN_ram_4ff3122a();
        iVar6 = 1;
        puVar8 = *(undefined1 **)(&DAT_ram_4ff48228 + iVar9);
      }
      else {
        iVar2 = param_1 * 0x38;
        puVar11 = (undefined *)(iVar2 + 0x4ff48230);
        FUN_ram_4ff3ec14(puVar11,0xffffffff);
        piVar7 = (int *)(&DAT_ram_4ff48228 + iVar2);
        FUN_ram_48131cdc(piVar7,param_1);
        if (param_1 == 5) {
          FUN_ram_4ff3122a();
          if (uVar10 != 0x14) {
            FUN_ram_480080f8();
            goto LAB_ram_4800b290;
          }
          _DAT_ram_50120004 = _DAT_ram_50120004 & 0x3fffffff | 0x40000000;
          iVar2 = 0x28;
          puVar11 = &DAT_ram_4ff48348;
          piVar7 = &DAT_ram_4ff48340;
          goto LAB_ram_4800acf4;
        }
        FUN_ram_4ff3122a();
        puVar8 = *(undefined1 **)(&DAT_ram_4ff48228 + iVar2);
        iVar6 = 0;
        if (uVar10 != 0x12) goto LAB_ram_4800ab0e;
      }
    }
    iVar2 = param_1 * 8;
    if (puVar8 == &DAT_ram_500ca000) {
      _DAT_ram_500e6068 = _DAT_ram_500e6068 & 0xfcffffff | iVar6 << 0x18;
    }
    else if (puVar8 == &DAT_ram_500cb000) {
      _DAT_ram_500e606c = _DAT_ram_500e606c & 0xfcffffff | iVar6 << 0x18;
    }
    else if (puVar8 == &DAT_ram_500cc000) {
      _DAT_ram_500e6070 = _DAT_ram_500e6070 & 0xfcffffff | iVar6 << 0x18;
    }
    else if (puVar8 == &DAT_ram_500cd000) {
      _DAT_ram_500e6074 = _DAT_ram_500e6074 & 0xfcffffff | iVar6 << 0x18;
    }
    else {
      if (puVar8 != &DAT_ram_500ce000) goto LAB_ram_4800b290;
      _DAT_ram_500e6078 = _DAT_ram_500e6078 & 0xfcffffff | iVar6 << 0x18;
    }
    uVar12 = *param_2;
    if (puVar8 == (undefined1 *)0x50121000) {
LAB_ram_4800b290:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    if (uVar12 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = (iStack_58 - 1U) + uVar12 * 0xfff;
      iVar6 = __udivdi3(uVar3,(((uVar12 >> 0x14) - (uint)(uVar12 * 0x1000 < uVar12 * 0xfff)) -
                              (uint)(iStack_58 == 0)) + (uint)(uVar3 < iStack_58 - 1U));
      uVar3 = iVar6 - 1;
      if (uVar3 < 0x100) {
        uVar12 = (uint)(iStack_58 << 4) / (uVar12 * iVar6);
        *(uint *)(puVar8 + 0x14) = *(uint *)(puVar8 + 0x14) & 0xfffff000 | (uVar12 & 0xffff) >> 4;
        *(uint *)(puVar8 + 0x14) = *(uint *)(puVar8 + 0x14) & 0xff0fffff | (uVar12 & 0xf) << 0x14;
        if (puVar8 == &DAT_ram_500ca000) {
          _DAT_ram_500e606c = _DAT_ram_500e606c & 0xffffff00 | uVar3 & 0xff;
          uStack_54 = _DAT_ram_500e606c;
        }
        else if (puVar8 == &DAT_ram_500cb000) {
          _DAT_ram_500e6070 = _DAT_ram_500e6070 & 0xffffff00 | uVar3 & 0xff;
          uStack_50 = _DAT_ram_500e6070;
        }
        else if (puVar8 == &DAT_ram_500cc000) {
          _DAT_ram_500e6074 = _DAT_ram_500e6074 & 0xffffff00 | uVar3 & 0xff;
          uStack_4c = _DAT_ram_500e6074;
        }
        else if (puVar8 == &DAT_ram_500cd000) {
          _DAT_ram_500e6078 = _DAT_ram_500e6078 & 0xffffff00 | uVar3 & 0xff;
          uStack_48 = _DAT_ram_500e6078;
        }
        else {
          if (puVar8 != &DAT_ram_500ce000) goto LAB_ram_4800b290;
          _DAT_ram_500e607c = _DAT_ram_500e607c & 0xffffff00 | uVar3 & 0xff;
          uStack_44 = _DAT_ram_500e607c;
        }
        *(uint *)(puVar8 + 0x98) = *(uint *)(puVar8 + 0x98) | 1;
        do {
        } while ((*(uint *)(puVar8 + 0x98) & 1) != 0);
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    FUN_ram_4ff31240();
    FUN_ram_48131a98(piVar7,param_2[2]);
    FUN_ram_48131a68(piVar7,param_2[1]);
    FUN_ram_48131a36(piVar7,param_2[3]);
    FUN_ram_48131b7a(piVar7,0);
    FUN_ram_48131ae0(piVar7,param_2[4],(char)param_2[5]);
    FUN_ram_4ff3ee10(puVar11);
    FUN_ram_4ff4309c(piVar7);
    FUN_ram_4ff4305a(piVar7);
    FUN_ram_4ff2ff60(*(undefined4 *)(&DAT_ram_4ff4822c + param_1 * 0x38),0);
    if (bVar1) {
LAB_ram_4800adc2:
      *(uint *)(&DAT_ram_4ff4822c + (iVar2 - param_1) * 8) = uVar10;
      return 0;
    }
  }
  *(undefined4 *)(&DAT_ram_4ff4822c + (iVar2 - param_1) * 8) = 0xffffffff;
  FUN_ram_4ff2ff60(uVar10,0);
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: baud rate unachievable\n",uVar4,
                   &DAT_ram_481b4c88);
  return -1;
}


