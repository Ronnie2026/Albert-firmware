/* Firmware entry: 0x48000fba */

/* WARNING: Removing unreachable block (ram,0x480016e6) */
/* WARNING: Removing unreachable block (ram,0x480016de) */
/* WARNING: Removing unreachable block (ram,0x48001708) */
/* WARNING: Removing unreachable block (ram,0x480016ce) */
/* WARNING: Removing unreachable block (ram,0x480016d6) */
/* WARNING: Removing unreachable block (ram,0x4800168e) */
/* WARNING: Removing unreachable block (ram,0x480016b8) */
/* WARNING: Removing unreachable block (ram,0x48001630) */
/* WARNING: Removing unreachable block (ram,0x48001660) */
/* WARNING: Removing unreachable block (ram,0x48001622) */
/* WARNING: Removing unreachable block (ram,0x4800169c) */
/* WARNING: Removing unreachable block (ram,0x4800167e) */
/* WARNING: Removing unreachable block (ram,0x4800166e) */
/* WARNING: Removing unreachable block (ram,0x480016aa) */
/* WARNING: Removing unreachable block (ram,0x48001652) */
/* WARNING: Removing unreachable block (ram,0x480016f8) */
/* WARNING: Removing unreachable block (ram,0x480016f0) */
/* WARNING: Removing unreachable block (ram,0x480016c6) */
/* WARNING: Removing unreachable block (ram,0x48001700) */
/* WARNING: Removing unreachable block (ram,0x4800157a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48000fba(void)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = rtc_get_reset_reason(0);
  if (0x17 < uVar1) {
    return;
  }
  if ((0xdd82aaU >> (uVar1 & 0x1f) & 1) != 0) {
    _DAT_ram_500e60b4 = _DAT_ram_500e60b4 & 0xfffc7e78;
    _DAT_ram_500e60c0 = _DAT_ram_500e60c0 | 0x40;
    _DAT_ram_500e6020 = _DAT_ram_500e6020 & 0xfffffffb;
    _DAT_ram_500e606c = _DAT_ram_500e606c & 0xfbffffff;
    _DAT_ram_500cb088 = _DAT_ram_500cb088 & 0xfcffffff;
    _DAT_ram_500e6070 = _DAT_ram_500e6070 & 0xfbffffff;
    _DAT_ram_500cc088 = _DAT_ram_500cc088 & 0xfcffffff;
    _DAT_ram_500e6074 = _DAT_ram_500e6074 & 0xfbffffff;
    _DAT_ram_500cd088 = _DAT_ram_500cd088 & 0xfcffffff;
    _DAT_ram_500e6078 = _DAT_ram_500e6078 & 0xfbffffff;
    _DAT_ram_500ce088 = _DAT_ram_500ce088 & 0xfcffffff;
    _DAT_ram_500e6094 = _DAT_ram_500e6094 & 0xf6ffffff;
    _DAT_ram_500e6098 = _DAT_ram_500e6098 & 0xfdbfffff;
    _DAT_ram_500a0880 = _DAT_ram_500a0880 & 0xfffffffe;
    _DAT_ram_50083800 = _DAT_ram_50083800 & 0xff7fffff;
    _DAT_ram_5008c180 = _DAT_ram_5008c180 & 0xfffffffe;
    _DAT_ram_5008c190 = _DAT_ram_5008c190 & 0xfffffffe;
    _DAT_ram_500e6080 = _DAT_ram_500e6080 & 0xfeeffff7;
    _DAT_ram_500e6084 = _DAT_ram_500e6084 & 0xfffeffff;
    _DAT_ram_3ff04044 = _DAT_ram_3ff04044 & 0xfffffffe;
    _DAT_ram_3ff05044 = _DAT_ram_3ff05044 & 0xfffffffe;
    _DAT_ram_500e6014 = _DAT_ram_500e6014 & 0xe7dfffff;
    _DAT_ram_500e60a8 = _DAT_ram_500e60a8 & 0xffe83fff;
    _DAT_ram_50000000 = _DAT_ram_50000000 | 0x40;
    _DAT_ram_50000e00 = _DAT_ram_50000e00 | 1;
    _DAT_ram_50111044 = _DAT_ram_50111044 & 0xffffffe5;
    _DAT_ram_50111048 = _DAT_ram_50111048 & 0x3fffffff;
    _DAT_ram_500e601c = _DAT_ram_500e601c & 0x7f87f0bf;
    _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0x8e0477e0;
    if ((uVar1 == 1) || (uVar1 == 5)) {
      _DAT_ram_500e6028 = _DAT_ram_500e6028 & 0xe7ffffff;
      _DAT_ram_500e602c = _DAT_ram_500e602c & 0xfffffeeb;
      goto LAB_ram_48001492;
    }
  }
  if (0x12 < uVar1) {
    return;
  }
LAB_ram_48001492:
  if ((0x58002U >> (uVar1 & 0x1f) & 1) != 0) {
    _DAT_ram_50121088 = _DAT_ram_50121088 & 0xfcffffff;
    _DAT_ram_50120000 = _DAT_ram_50120000 & 0xdfffffff;
    _DAT_ram_5012a000 = _DAT_ram_5012a000 & 0xfffffffe;
    if (uVar1 == 1) {
      _DAT_ram_50111040 = _DAT_ram_50111040 & 0xff0703e7 | 0x3e0;
      _DAT_ram_50110130 = _DAT_ram_50110130 & 0xfffffffe;
    }
  }
  return;
}


