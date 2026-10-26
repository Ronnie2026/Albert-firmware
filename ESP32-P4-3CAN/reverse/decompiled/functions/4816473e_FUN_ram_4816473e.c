/* Firmware entry: 0x4816473e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4816473e(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
    return 0x102;
  }
  uVar2 = param_1;
  if (((int)DAT_ram_4ff4babd != param_1) && ((&DAT_ram_4ff4ba68)[param_1 * 0x12] != 0)) {
    DAT_ram_4ff4babd = (char)param_1;
    FUN_ram_4ff3122a();
    uVar2 = (&DAT_ram_4ff4ba68)[param_1 * 0x12];
    if (uVar2 < 2) {
      _DAT_ram_500e6034 = _DAT_ram_500e6034 | 0x400000;
      _DAT_ram_500e6038 = _DAT_ram_500e6038 & 0xffe001ff;
    }
    else {
      uVar3 = uVar2 - 1 & 0xf;
      _DAT_ram_500e6038 =
           uVar3 << 9 |
           ((uVar2 >> 1) - 1 & 0xf) << 0xd | _DAT_ram_500e6038 & 0xffe000ff | uVar3 << 0x11;
    }
    iVar4 = *(int *)(&DAT_ram_4ff4ba70 + param_1 * 0x48);
    if (iVar4 == 2) {
      _DAT_ram_500e6038 = _DAT_ram_500e6038 & 0xf9ffffff | 0x4000000;
    }
    else if (iVar4 == 3) {
      _DAT_ram_500e6038 = _DAT_ram_500e6038 | 0x6000000;
    }
    else if (iVar4 == 1) {
      _DAT_ram_500e6038 = _DAT_ram_500e6038 & 0xf9ffffff | 0x2000000;
    }
    else {
      _DAT_ram_500e6038 = _DAT_ram_500e6038 & 0xf9ffffff;
    }
    FUN_ram_4ff31240();
    uVar2 = *(int *)(&DAT_ram_4ff4ba6c + param_1 * 0x48) * 100;
    if (0xffffff < uVar2) {
      uVar2 = 0xffffff;
    }
    *(uint *)(DAT_ram_4ff4ba24 + 0x14) = uVar2 << 8 | *(uint *)(DAT_ram_4ff4ba24 + 0x14) & 0xff;
    uVar2 = ets_delay_us(10);
  }
  if (((((*(uint *)(DAT_ram_4ff4ba24 + 0x50) & 3) >> (param_1 & 0x1f) & 1) != 0) &&
      (uVar2 = 0x105, -1 < (int)(param_2 << 10))) ||
     (((param_2 & 0x600) == 0x600 &&
      (uVar2 = 0x103, (1 << (param_1 & 0x1f) & *(uint *)(DAT_ram_4ff4ba24 + 0x54) & 3) != 0)))) {
    return uVar2;
  }
  uVar9 = FUN_ram_4ff21a0a(uVar2);
  iVar4 = (int)((ulonglong)uVar9 >> 0x20);
  uVar3 = 100000;
  uVar2 = 0;
  if ((param_2 & 0x10200000) != 0x10200000) {
    do {
      iVar5 = *(int *)(DAT_ram_4ff4ba24 + 0x2c);
      while( true ) {
        if (-1 < iVar5) goto LAB_ram_48164902;
        uVar10 = FUN_ram_4ff21a0a();
        uVar6 = (uint)uVar10 - (int)uVar9;
        uVar7 = (int)((ulonglong)uVar10 >> 0x20) - iVar4;
        uVar1 = (uint)((uint)uVar10 < uVar6);
        uVar8 = uVar7 - uVar1;
        if (0 < (int)uVar8) {
          return 0x107;
        }
        if ((uVar7 == uVar1) && (1000000 < uVar6)) {
          return 0x107;
        }
        if (((int)uVar8 <= (int)uVar2) && ((uVar8 != uVar2 || (uVar6 <= uVar3)))) break;
        uVar2 = uVar2 << 1 | uVar3 >> 0x1f;
        FUN_ram_4ff3c2b6(1);
        uVar3 = uVar3 << 1;
        iVar5 = *(int *)(DAT_ram_4ff4ba24 + 0x2c);
      }
    } while( true );
  }
LAB_ram_48164902:
  iVar5 = DAT_ram_4ff4ba24;
  uVar1 = param_1 & 0x1f | 0xffff8000 | (param_2 & 0x7fe00000 | 0x20000000) >> 0x10;
  *(undefined4 *)(DAT_ram_4ff4ba24 + 0x28) = param_3;
  *(char *)(iVar5 + 0x2c) = (char)(param_2 & 0xffff);
  *(char *)(iVar5 + 0x2d) = (char)((param_2 & 0xffff) >> 8);
  *(char *)(iVar5 + 0x2e) = (char)uVar1;
  *(char *)(iVar5 + 0x2f) = (char)(uVar1 >> 8);
  iVar5 = *(int *)(iVar5 + 0x2c);
  do {
    if (-1 < iVar5) {
      return 0;
    }
    uVar10 = FUN_ram_4ff21a0a();
    uVar8 = (uint)uVar10 - (int)uVar9;
    uVar6 = (int)((ulonglong)uVar10 >> 0x20) - iVar4;
    uVar1 = (uint)((uint)uVar10 < uVar8);
    uVar7 = uVar6 - uVar1;
    if (0 < (int)uVar7) {
      return 0x107;
    }
    if (uVar6 == uVar1) {
      if (1000000 < uVar8) {
        return 0x107;
      }
      if (-1 < (int)uVar2) goto LAB_ram_4816496a;
LAB_ram_481649bc:
      uVar2 = uVar2 << 1 | uVar3 >> 0x1f;
      FUN_ram_4ff3c2b6(1);
      uVar3 = uVar3 << 1;
    }
    else {
      if ((int)uVar2 < (int)uVar7) goto LAB_ram_481649bc;
LAB_ram_4816496a:
      if ((uVar7 == uVar2) && (uVar3 < uVar8)) goto LAB_ram_481649bc;
    }
    iVar5 = *(int *)(DAT_ram_4ff4ba24 + 0x2c);
  } while( true );
}


