/* Firmware entry: 0x4ff380ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff380ec(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int)(_DAT_ram_500e60c4 << 0x12) < 0) {
    iVar1 = 0;
    goto joined_r0x4ff38180;
  }
  uVar5 = _DAT_ram_500e601c >> 7 & 1;
  uVar3 = _DAT_ram_500e6018 >> 0x12 & 1;
  iVar1 = 0;
  while( true ) {
    if ((uVar5 != 0) && (uVar3 != 0)) {
      uart_tx_wait_idle(iVar1);
    }
joined_r0x4ff38180:
    if (iVar1 == 2) goto LAB_ram_4ff38184;
    if (iVar1 == 3) break;
    if (iVar1 != 0) goto LAB_ram_4ff38152;
    uVar2 = _DAT_ram_500e60c4 >> 0xe & 1;
    uVar5 = _DAT_ram_500e601c >> 8 & 1;
    uVar3 = _DAT_ram_500e6018 >> 0x13 & 1;
    iVar1 = 1;
    while (uVar2 != 0) {
      if (iVar1 == 2) {
LAB_ram_4ff38184:
        uVar2 = _DAT_ram_500e60c4 >> 0x10 & 1;
        uVar5 = _DAT_ram_500e601c >> 10 & 1;
        uVar3 = _DAT_ram_500e6018 >> 0x15 & 1;
        iVar1 = 3;
      }
      else {
        if (iVar1 == 3) goto LAB_ram_4ff3819c;
LAB_ram_4ff38152:
        uVar2 = _DAT_ram_500e60c4 >> 0xf & 1;
        uVar5 = _DAT_ram_500e601c >> 9 & 1;
        uVar3 = _DAT_ram_500e6018 >> 0x14 & 1;
        iVar1 = 2;
      }
    }
  }
LAB_ram_4ff3819c:
  if (((-1 < (int)(_DAT_ram_500e60c4 << 0xe)) && ((_DAT_ram_500e601c >> 0xb & 1) != 0)) &&
     ((_DAT_ram_500e6018 >> 0x16 & 1) != 0)) {
    uart_tx_wait_idle(4);
  }
  if ((_DAT_ram_500e6018 >> 4 & 1) != 0) {
    iVar1 = 0;
    do {
      iVar6 = iVar1 * 0x68;
      *(uint *)(iVar6 + 0x5008a148) = *(uint *)(iVar6 + 0x5008a148) | 0x100;
      *(uint *)(iVar6 + 0x5008a010) = *(uint *)(iVar6 + 0x5008a010) | 0x80;
      do {
      } while ((*(uint *)((iVar1 + 0xa4) * 4 + 0x5008a008) & 1) == 0);
      do {
      } while ((*(uint *)((iVar1 + 0xa0) * 4 + 0x5008a00c) & 1) == 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
  }
  if ((_DAT_ram_500e6018 >> 6 & 1) != 0) {
    _DAT_ram_50088500 = _DAT_ram_50088500 | 0x2000000;
    do {
    } while (-1 < _DAT_ram_50088524 << 8);
    _DAT_ram_50088600 = _DAT_ram_50088600 | 0x2000000;
    do {
    } while (-1 < _DAT_ram_50088624 << 8);
    _DAT_ram_50088700 = _DAT_ram_50088700 | 0x2000000;
    do {
    } while (-1 < _DAT_ram_50088724 << 8);
    iVar1 = 0;
    do {
      puVar4 = (uint *)(iVar1 * 0x100 + 0x50088000);
      *puVar4 = *puVar4 | 0x2000000;
      do {
      } while (-1 < *(int *)(iVar1 * 0x100 + 0x50088024) << 7);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
  }
  if (((_DAT_ram_500e6018 >> 5 & 1) != 0) && (_DAT_ram_500e6014 << 0x12 < 0)) {
    uVar3 = 0;
    do {
      do {
      } while (0x101 << (uVar3 & 0x1f) != 0);
      uVar3 = uVar3 + 1;
      _DAT_ram_5008101c = 0;
    } while (uVar3 != 4);
  }
  _DAT_ram_500e60c0 = _DAT_ram_500e60c0 & 0xff3fffff;
  _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffe05d;
  _DAT_ram_5011104c = _DAT_ram_5011104c & 0xefffffff;
  _DAT_ram_500e60c8 = _DAT_ram_500e60c8 & 0xfe00bbff;
  _DAT_ram_500e51d4 = _DAT_ram_500e51d4 & 0xfffffffe;
  return;
}


