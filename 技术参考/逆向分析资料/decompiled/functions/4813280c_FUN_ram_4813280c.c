/* Firmware entry: 0x4813280c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4813280c(void)

{
  char cVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_csreg_0bd0 = 0x3ffffff;
  _DAT_csreg_0bc0 = 0xe0000001;
  _DAT_csreg_0bd1 = 0xc000000;
  _DAT_csreg_0bc1 = 0x20000001;
  _DAT_csreg_0bd2 = 0xc040000;
  _DAT_csreg_0bc2 = 0x60000001;
  _DAT_csreg_0bd3 = 0xc040800;
  _DAT_csreg_0bc3 = 0x20000001;
  _DAT_csreg_0bd4 = 0xffc0000;
  _DAT_csreg_0bc4 = 0x60000001;
  _DAT_csreg_0bd5 = 0xffc8000;
  _DAT_csreg_0bc5 = 0x20000001;
  _DAT_csreg_0bd6 = 0x10000000;
  _DAT_csreg_0bc6 = 0x60000001;
  _DAT_csreg_0bd7 = 0x117fffff;
  _DAT_csreg_0bc7 = 0xe0000001;
  _DAT_csreg_0bd8 = 0x13000000;
  _DAT_csreg_0bc8 = 0x20000001;
  _DAT_csreg_0bd9 = 0x13f00000;
  _DAT_csreg_0bc9 = 0x60000001;
  _DAT_csreg_0bda = 0x13f08000;
  _DAT_csreg_0bca = 0x20000001;
  _DAT_csreg_0bdb = 0x13fc0000;
  _DAT_csreg_0bcb = 0x60000001;
  _DAT_csreg_0bdc = 0x13ff7fff;
  _DAT_csreg_0bcc = 0xe0000001;
  _DAT_csreg_0bdd = 0x11ffffff;
  _DAT_csreg_0bcd = 0xe000001d;
  _DAT_csreg_0bde = 0x23ff0000;
  _DAT_csreg_0bce = 0x20000001;
  _DAT_csreg_0bdf = 0x3fffffff;
  _DAT_csreg_0bcf = 0x60000001;
  _pmpaddr0 = 0x9ffffff;
  _pmpaddr1 = 0xffc3fff;
  _pmpaddr2 = 0x13f03fff;
  _pmpaddr3 = 0x23f03fff;
  pmpcfg0 = 0x9d9d9b9b;
  iVar2 = FUN_ram_4ff45682();
  if (iVar2 == 0) {
    _pmpaddr7 = 0x23fc0000;
    _pmpaddr5 = 0x13fd1f60;
    _pmpaddr8 = 0x23fd1f60;
    _pmpaddr6 = 0x13ff0000;
    pmpcfg1 = 0x808b8d80;
    _pmpaddr9 = 0x23ff0000;
    pmpcfg2 = pmpcfg2 & 0xffff0000 | 0x8b8d;
  }
  else {
    cVar1 = FUN_ram_4ff45682();
    if (cVar1 == '\0') {
      software_reset();
      return;
    }
    cVar1 = FUN_ram_4ff45682();
    if (cVar1 == '\0') {
      software_reset();
      return;
    }
    cVar1 = FUN_ram_4ff45682();
    if (cVar1 == '\0') {
      software_reset();
      return;
    }
    _pmpaddr6 = 0x23fc0000;
    _pmpaddr5 = 0x13ff0000;
    _pmpaddr7 = 0x23ff0000;
    pmpcfg1 = 0x8f808f80;
  }
  _pmpaddr4 = 0x13fc0000;
  _pmpaddr11 = 0;
  pmpcfg2 = pmpcfg2 & 0xffffff;
  _pmpaddr12 = 0;
  _pmpaddr13 = 0;
  _pmpaddr14 = 0;
  _pmpaddr15 = 0;
  pmpcfg3 = 0;
  _pmpaddr16 = 0;
  _pmpaddr17 = 0;
  _pmpaddr18 = 0;
  _pmpaddr19 = 0;
  pmpcfg4 = 0;
  _pmpaddr23 = 0;
  pmpcfg5 = pmpcfg5 & 0xffffff;
  iVar2 = FUN_ram_481a6f92();
  _pmpaddr10 = 0x12000000;
  _pmpaddr15 = 0x22000000;
  _pmpaddr11 = 0x1206a7e0;
  pmpcfg2 = pmpcfg2 & 0xffff | 0x8d800000;
  _pmpaddr16 = 0x2206a7e0;
  _pmpaddr12 = 0x1206c000;
  _pmpaddr17 = 0x2206c000;
  _pmpaddr13 = 0x1208f0e0;
  _pmpaddr18 = 0x2208f0e0;
  _pmpaddr14 = iVar2 + 0x4823c3ffU >> 2 & 0x3fffffe0;
  pmpcfg3 = 0x808b898b;
  _pmpaddr19 = (iVar2 + 0x4823c3ffU & 0xffffff80) + 0x40000000 >> 2;
  pmpcfg4 = 0x8b898b8d;
  _pmpaddr20 = 0x10000000;
  _pmpaddr24 = 0x20000000;
  _pmpaddr21 = 0x1206c000;
  _pmpaddr25 = 0x2206c000;
  _pmpaddr22 = 0x12090000;
  pmpcfg5 = pmpcfg5 & 0xff000000 | 0x898d80;
  _pmpaddr26 = 0x22090000;
  _pmpaddr27 = 0x1401ffff;
  pmpcfg6 = 0x9b898d80;
  _pmpaddr28 = 0x14042000;
  _pmpaddr29 = 0x14042020;
  _pmpaddr30 = 0x14042020;
  _pmpaddr31 = 0x1404c000;
  pmpcfg7 = 0x8b8d8b80;
  return;
}


