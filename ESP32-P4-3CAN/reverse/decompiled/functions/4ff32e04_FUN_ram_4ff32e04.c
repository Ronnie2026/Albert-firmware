/* Firmware entry: 0x4ff32e04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff32e04(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x7ffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("rtc_time.c",0x36,"rtc_clk_cal_internal","slowclk_cycles < TIMG_RTC_CALI_MAX_V"
                    );
  }
  if (param_1 == 0xffffffff) {
    iVar2 = FUN_ram_4ff326ce();
    if (iVar2 == 1) {
      uVar6 = _DAT_ram_50111028 >> 0x1c & 1;
LAB_ram_4ff3305c:
      if (uVar6 == 0) {
        _DAT_ram_50111028 = _DAT_ram_50111028 | 0x10000000;
      }
      uVar1 = 10;
      uVar8 = _DAT_ram_501150ac & 0x40000000;
      uVar9 = _DAT_ram_50111028 >> 0x1f;
      uVar10 = _DAT_ram_501150ac & 0x20000000;
      uVar7 = _DAT_ram_50111028 >> 0x1e & 1;
      param_1 = 10;
      uVar4 = 1;
    }
    else if (iVar2 == 2) {
      uVar10 = _DAT_ram_501150ac & 0x20000000;
      uVar6 = _DAT_ram_50111028 >> 0x1c & 1;
      uVar8 = _DAT_ram_501150ac & 0x40000000;
      uVar9 = _DAT_ram_50111028 >> 0x1f;
      uVar7 = _DAT_ram_50111028 >> 0x1e & 1;
joined_r0x4ff332d6:
      if (uVar10 == 0) {
        FUN_ram_4ff32588(1);
      }
      if (uVar7 == 0) {
        uVar1 = 9;
        _DAT_ram_50111028 = _DAT_ram_50111028 | 0x40000000;
        param_1 = 9;
        uVar4 = 0;
      }
      else {
        uVar1 = 9;
        param_1 = 9;
        uVar4 = 0;
      }
    }
    else {
      if (iVar2 != 0) goto LAB_ram_4ff330be;
      param_1 = 8;
      uVar6 = _DAT_ram_50111028 >> 0x1c & 1;
      uVar8 = _DAT_ram_501150ac & 0x40000000;
      uVar9 = _DAT_ram_50111028 >> 0x1f;
      uVar10 = _DAT_ram_501150ac & 0x20000000;
      uVar7 = _DAT_ram_50111028 >> 0x1e & 1;
      uVar1 = 8;
      uVar4 = 0xffffffff;
    }
  }
  else {
    if (0xb < param_1) {
LAB_ram_4ff330be:
      if (DAT_ram_4ff47dac != 0) {
        uVar5 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: clock not supported to be calibrated\n",uVar5,"rtc_time");
      }
      return 0;
    }
    uVar6 = _DAT_ram_50111028 >> 0x1c & 1;
    if (param_1 == 10) goto LAB_ram_4ff3305c;
    uVar8 = _DAT_ram_501150ac & 0x40000000;
    uVar9 = -((int)_DAT_ram_50111028 >> 0x1f);
    if (param_1 == 7) {
      if (uVar8 == 0) {
        FUN_ram_4ff325da(1);
      }
      if (uVar9 == 0) {
        FUN_ram_4ff32c4a();
      }
      uVar10 = _DAT_ram_501150ac & 0x20000000;
      uVar7 = _DAT_ram_50111028 >> 0x1e & 1;
      uVar4 = 0xfffffffe;
      uVar1 = 7;
    }
    else {
      uVar10 = _DAT_ram_501150ac & 0x20000000;
      uVar7 = _DAT_ram_50111028 >> 0x1e & 1;
      uVar4 = param_1 - 9;
      uVar1 = param_1;
      if (param_1 == 9) goto joined_r0x4ff332d6;
    }
  }
  uVar11 = _DAT_ram_500c2080;
  if ((int)(_DAT_ram_500c2068 << 0x13) < 0) {
    do {
      uVar11 = _DAT_ram_500c2080 & 0xff;
      if ((int)(_DAT_ram_500c2068 << 0x10) < 0) break;
    } while ((_DAT_ram_500c2080 & 1) == 0);
  }
  _DAT_ram_500c2080 = uVar11;
  if (param_1 == 0xb) {
    uVar3 = 0x180;
    uVar11 = 0x19;
  }
  else if ((int)param_1 < 8) {
    if (param_1 == 3) {
      uVar3 = 0xc70;
      uVar11 = 200;
    }
    else {
      uVar3 = 0x310;
      uVar11 = 0x32;
      if (param_1 != 7) {
        uVar3 = 0xf9f0;
        uVar11 = 4000;
      }
    }
  }
  else {
    uVar3 = 0;
    uVar11 = 1;
  }
  _DAT_ram_500e6098 = (_DAT_ram_500e6098 & 0xfffffff0 | uVar1) & 0xfff0000f | uVar3;
  if (uVar4 < 2) {
    _DAT_ram_500c2080 = _DAT_ram_500c2080 & 0x7f | param_2 << 0x13;
  }
  else {
    _DAT_ram_500c2080 = _DAT_ram_500c2080 & 0x7f | param_2 << 0x11;
    if (param_1 == 3) {
      uVar5 = 0x802c8;
      goto LAB_ram_4ff32f88;
    }
    if ((int)param_1 < 4) {
      uVar5 = 120000;
      if ((param_1 != 1) && (uVar5 = 100000, param_1 != 2)) {
        uVar5 = 0x1e848;
      }
      goto LAB_ram_4ff32f88;
    }
    uVar5 = 350000;
    if ((((param_1 == 7) || (uVar5 = 50000, (int)param_1 < 8)) || (uVar5 = 0x21340, param_1 == 8))
       || (uVar5 = 320000, param_1 == 0xb)) goto LAB_ram_4ff32f88;
  }
  uVar5 = 0x8000;
LAB_ram_4ff32f88:
  _DAT_ram_500c2068 = (_DAT_ram_500c2068 & 0x8000efff | param_2 << 0x10) & 0x7fffffff | 0x80000000;
  __udivdi3(param_2 * 1000000,(int)((ulonglong)param_2 * 1000000 >> 0x20),uVar5,0);
  ets_delay_us();
  do {
    if ((_DAT_ram_500c2068 & 0x8000) != 0) {
      uVar1 = (_DAT_ram_500c206c >> 7) / uVar11;
      break;
    }
    uVar1 = 0;
  } while ((_DAT_ram_500c2080 & 1) == 0);
  _DAT_ram_500c2068 = _DAT_ram_500c2068 & 0x7fffffff;
  _DAT_ram_500e6098 = _DAT_ram_500e6098 & 0xfff0000f;
  if (param_1 == 10) {
    if (uVar6 == 0) {
      _DAT_ram_50111028 = _DAT_ram_50111028 & 0xefffffff;
    }
  }
  else if (param_1 == 7) {
    if (uVar9 == 0) {
      FUN_ram_4ff32c66();
    }
    if (uVar8 == 0) {
      FUN_ram_4ff325da(0);
    }
  }
  else if (param_1 == 9) {
    if (uVar7 == 0) {
      _DAT_ram_50111028 = _DAT_ram_50111028 & 0xbfffffff;
    }
    if (uVar10 == 0) {
      FUN_ram_4ff32588(0);
    }
  }
  return uVar1;
}


