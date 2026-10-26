/* Firmware entry: 0x4ff332dc */

undefined4 FUN_ram_4ff332dc(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 7) {
    uVar5 = 0x32;
    uVar1 = param_2 / 0x32;
  }
  else if (param_1 < 8) {
    if (param_1 == -1) {
      uVar5 = 1;
      uVar1 = param_2;
    }
    else {
      if (param_1 != 3) goto LAB_ram_4ff33434;
      uVar5 = 200;
      uVar1 = param_2 / 200;
    }
  }
  else {
    if (param_1 < 0xb) {
      if (param_2 == 0) goto LAB_ram_4ff33440;
      uVar1 = FUN_ram_4ff211de();
      uVar2 = FUN_ram_4ff32e04(param_1,param_2);
      uVar7 = (uint)((ulonglong)uVar1 * (ulonglong)param_2 >> 0x20);
      uVar1 = uVar1 * param_2;
      if (param_1 == 10) {
        uVar5 = uVar7 * 1000000 + (int)((ulonglong)uVar1 * 1000000 >> 0x20);
        uVar6 = uVar5 >> 0xf;
        uVar5 = uVar1 * 1000000 >> 0xf | uVar5 * 0x20000;
        lVar8 = __udivdi3(uVar5,uVar6,2000,0);
        uVar4 = uVar5 - (int)lVar8;
        if ((uVar6 - (int)((ulonglong)lVar8 >> 0x20) != (uint)(uVar5 < uVar4)) || (uVar2 < uVar4)) {
          return 0;
        }
        lVar8 = lVar8 + CONCAT44(uVar6,uVar5);
        if (((int)((ulonglong)lVar8 >> 0x20) == 0) && ((uint)lVar8 < uVar2)) {
          return 0;
        }
      }
      goto LAB_ram_4ff333be;
    }
    if (param_1 != 0xb) {
LAB_ram_4ff33434:
      if (param_2 < 4000) goto LAB_ram_4ff33440;
      param_2 = param_2 / 4000;
      uVar1 = FUN_ram_4ff211de();
      uVar2 = FUN_ram_4ff32e04(param_1,param_2);
      uVar7 = (uint)((ulonglong)param_2 * (ulonglong)uVar1 >> 0x20);
      uVar1 = param_2 * uVar1;
      goto LAB_ram_4ff333be;
    }
    uVar5 = 0x19;
    uVar1 = param_2 / 0x19;
  }
  if (param_2 < uVar5) {
LAB_ram_4ff33440:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("rtc_time.c",0xb9,"rtc_clk_cal","slowclk_cycles");
  }
  uVar5 = FUN_ram_4ff211de();
  uVar7 = (uint)((ulonglong)uVar1 * (ulonglong)uVar5 >> 0x20);
  uVar2 = FUN_ram_4ff32e04(param_1,uVar1);
  uVar1 = uVar1 * uVar5;
LAB_ram_4ff333be:
  uVar5 = (uVar1 >> 1 | uVar7 << 0x1f) + uVar2 * 0x80000;
  uVar3 = __udivdi3(uVar5 - 1,
                    ((uint)(uVar5 < uVar2 * 0x80000) + (uVar2 >> 0xd) + (uVar7 >> 1)) -
                    (uint)(uVar5 == 0),uVar1,uVar7);
  return uVar3;
}


