/* Firmware entry: 0x4ff3805e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff3805e(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_s1;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_s2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar6 = &local_20;
  mstatus = mstatus & 0xfffffff7;
  uVar2 = (uint)(mhartid == 0);
  FUN_ram_4ff2fb52(uVar2);
  FUN_ram_4ff2fcd2(uVar2);
  local_20 = 1;
  uStack_1c = 0x500c2000;
  FUN_ram_4fc00208(&local_20);
  FUN_ram_4fc00214(&local_20);
  FUN_ram_4fc0020c(&local_20);
  uStack_18 = 2;
  uStack_14 = 0x500c3000;
  FUN_ram_4fc00208(&uStack_18);
  FUN_ram_4fc00214(&uStack_18);
  FUN_ram_4fc0020c(&uStack_18);
  iVar3 = thunk_FUN_ram_4ff21be8(&local_20);
  if (iVar3 != 0) {
    puVar6 = (undefined4 *)0x4ff6e300;
  }
  pcVar1 = FUN_ram_4ff380ec;
  FUN_ram_4ff20522();
  *(uint *)((int)puVar6 + -8) = uVar2;
  *(code **)((int)puVar6 + -4) = pcVar1;
  *(undefined4 *)((int)puVar6 + -0xc) = unaff_s1;
  *(undefined4 *)((int)puVar6 + -0x10) = unaff_s2;
  if ((int)(_DAT_ram_500e60c4 << 0x12) < 0) {
    iVar3 = 0;
    goto joined_r0x4ff38180;
  }
  uVar7 = _DAT_ram_500e601c >> 7 & 1;
  uVar2 = _DAT_ram_500e6018 >> 0x12 & 1;
  iVar3 = 0;
  while( true ) {
    if ((uVar7 != 0) && (uVar2 != 0)) {
      uart_tx_wait_idle(iVar3);
    }
joined_r0x4ff38180:
    if (iVar3 == 2) goto LAB_ram_4ff38184;
    if (iVar3 == 3) break;
    if (iVar3 != 0) goto LAB_ram_4ff38152;
    uVar4 = _DAT_ram_500e60c4 >> 0xe & 1;
    uVar7 = _DAT_ram_500e601c >> 8 & 1;
    uVar2 = _DAT_ram_500e6018 >> 0x13 & 1;
    iVar3 = 1;
    while (uVar4 != 0) {
      if (iVar3 == 2) {
LAB_ram_4ff38184:
        uVar4 = _DAT_ram_500e60c4 >> 0x10 & 1;
        uVar7 = _DAT_ram_500e601c >> 10 & 1;
        uVar2 = _DAT_ram_500e6018 >> 0x15 & 1;
        iVar3 = 3;
      }
      else {
        if (iVar3 == 3) goto LAB_ram_4ff3819c;
LAB_ram_4ff38152:
        uVar4 = _DAT_ram_500e60c4 >> 0xf & 1;
        uVar7 = _DAT_ram_500e601c >> 9 & 1;
        uVar2 = _DAT_ram_500e6018 >> 0x14 & 1;
        iVar3 = 2;
      }
    }
  }
LAB_ram_4ff3819c:
  if (((-1 < (int)(_DAT_ram_500e60c4 << 0xe)) && ((_DAT_ram_500e601c >> 0xb & 1) != 0)) &&
     ((_DAT_ram_500e6018 >> 0x16 & 1) != 0)) {
    uart_tx_wait_idle(4);
  }
  if ((_DAT_ram_500e6018 >> 4 & 1) != 0) {
    iVar3 = 0;
    do {
      iVar8 = iVar3 * 0x68;
      *(uint *)(iVar8 + 0x5008a148) = *(uint *)(iVar8 + 0x5008a148) | 0x100;
      *(uint *)(iVar8 + 0x5008a010) = *(uint *)(iVar8 + 0x5008a010) | 0x80;
      do {
      } while ((*(uint *)((iVar3 + 0xa4) * 4 + 0x5008a008) & 1) == 0);
      do {
      } while ((*(uint *)((iVar3 + 0xa0) * 4 + 0x5008a00c) & 1) == 0);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 3);
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
    iVar3 = 0;
    do {
      puVar5 = (uint *)(iVar3 * 0x100 + 0x50088000);
      *puVar5 = *puVar5 | 0x2000000;
      do {
      } while (-1 < *(int *)(iVar3 * 0x100 + 0x50088024) << 7);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
  }
  if (((_DAT_ram_500e6018 >> 5 & 1) != 0) && (_DAT_ram_500e6014 << 0x12 < 0)) {
    uVar2 = 0;
    do {
      do {
      } while (0x101 << (uVar2 & 0x1f) != 0);
      uVar2 = uVar2 + 1;
      _DAT_ram_5008101c = 0;
    } while (uVar2 != 4);
  }
  _DAT_ram_500e60c0 = _DAT_ram_500e60c0 & 0xff3fffff;
  _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffe05d;
  _DAT_ram_5011104c = _DAT_ram_5011104c & 0xefffffff;
  _DAT_ram_500e60c8 = _DAT_ram_500e60c8 & 0xfe00bbff;
  _DAT_ram_500e51d4 = _DAT_ram_500e51d4 & 0xfffffffe;
  return;
}


