/* Firmware entry: 0x4ff31a90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff31a90(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff20644();
  if ((uVar1 < 2) || (uVar1 == 100)) {
    if (1 < DAT_ram_4ff47dac) {
      uVar2 = FUN_ram_4ff44d14();
      ets_printf(s_W___lu___s__blk_version_is_less_t_ram_4ff55094,uVar2,s_pmu_pvt_ram_4ff5508c);
      return;
    }
    return;
  }
  _DAT_ram_500e602c = _DAT_ram_500e602c | 1;
  _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x2000000;
  _DAT_ram_5009e064 = _DAT_ram_5009e064 & 0x7fffffff;
  ets_delay_us(100);
  _DAT_ram_5009e034 = _DAT_ram_5009e034 & 0x3ffff | 0x62d40000;
  _DAT_ram_5009e03c = _DAT_ram_5009e03c & 0xfffe0000 | 0x13e80;
  _DAT_ram_5009e040 = _DAT_ram_5009e040 & 0xfffe0000 | 0x13e80;
  _DAT_ram_5009e044 = _DAT_ram_5009e044 & 0xfffe0000 | 0x10000;
  _DAT_ram_5009e050 = _DAT_ram_5009e050 & 0xfffff800 | 0x24;
  _DAT_ram_5009e054 = _DAT_ram_5009e054 & 0xfffff800 | 5;
  _DAT_ram_5009e058 = _DAT_ram_5009e058 & 0xfffff800 | 0x427;
  _DAT_ram_50115028 = _DAT_ram_50115028 | 0x8000;
  _DAT_ram_5009e064 = _DAT_ram_5009e064 & 0x80007fff | 0x3e800000;
  _DAT_ram_500e60a4 = _DAT_ram_500e60a4 & 0xff00ffff | 0x1010000;
  _DAT_ram_500e60a8 = _DAT_ram_500e60a8 & 0xffffff00 | 0xf01;
  _DAT_ram_5009e030 = _DAT_ram_5009e030 | 0x100;
  ets_delay_us(100);
  _DAT_ram_5009e1c8 = _DAT_ram_5009e1c8 & 0xfffffffc | 1;
  _DAT_ram_5009e108 = _DAT_ram_5009e108 & 0xfffffc03 | 0x280;
  _DAT_ram_5009e10c = _DAT_ram_5009e10c & 0xfffffc03 | 0x264;
  uVar1 = FUN_ram_4ff20644();
  if ((uVar1 < 2) || (uVar1 == 100)) {
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = _DAT_ram_5012d058 >> 5 & 0xf;
    if ((_DAT_ram_5012d058 >> 5 & 0x1f) >> 4 == 0) {
      uVar3 = uVar1 - 8;
      if (-1 < (int)uVar3) {
        uVar3 = uVar3 * 0x800;
        uVar1 = 0;
        goto LAB_ram_4ff31ca8;
      }
    }
    else {
      uVar3 = -uVar1 - 8;
      if (0x16 < (7 - uVar1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff55054 + 0x2d,0x2e,
                         s_get_lp_hp_gap_ram_4ff53d3c,
                         s__lp_hp_gap_>___15______lp_hp_gap_ram_4ff5502c);
      }
    }
    uVar3 = (-(uVar3 & 0xff) & 0xf) << 0xb;
    uVar1 = 0x10000;
  }
LAB_ram_4ff31ca8:
  _DAT_ram_5009e050 = _DAT_ram_5009e050 & 0xfffe07ff | uVar1 | uVar3;
  _DAT_ram_5009e054 = _DAT_ram_5009e054 & 0xfffe07ff | uVar1 | uVar3;
  _DAT_ram_5009e058 = uVar3 | _DAT_ram_5009e058 & 0xfffe07ff | uVar1;
  return;
}


