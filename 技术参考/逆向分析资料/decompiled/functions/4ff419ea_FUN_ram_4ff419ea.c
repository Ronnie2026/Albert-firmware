/* Firmware entry: 0x4ff419ea */

undefined4 FUN_ram_4ff419ea(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_2c;
  uint uStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = param_5 & 0xffff;
  if ((int)param_5 < 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 8;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x40000;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x80000;
    iVar2 = FUN_ram_4ff20626();
    if (iVar2 == 0) {
      iVar2 = -2;
      if (uVar4 == 3) {
        iVar2 = -4;
      }
      param_4 = param_4 + iVar2;
      param_3 = param_3 + 8;
    }
  }
  else {
    FUN_ram_4ff20626();
  }
  if (param_2 < 0x100) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x80000000;
    *(uint *)(iVar1 + 0x18) = param_2 & 0xffff | 0x70000000;
  }
  else {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x80000000;
    *(uint *)(iVar1 + 0x18) = param_2 & 0xff | 0xf0000000;
  }
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0x7ffffff | (param_3 + -1) * 0x8000000;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xbfffffff | (uint)(param_3 != 0) << 0x1e;
  param_4 = (uint)*(byte *)(param_1 + 0xc) + param_4;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xdfffffff | (uint)(param_4 != 0) << 0x1d;
  if (param_4 != 0) {
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xffffff00 | param_4 - 1U & 0xff;
  }
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xefffffff;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xf7ffffff;
  uStack_2c = *(uint *)(iVar1 + 8) & 0xffff3c9f;
  uStack_28 = *(uint *)(iVar1 + 0x10) & 0xffffcfff;
  if (uVar4 == 3) {
    uStack_2c = uStack_2c | 0x4020;
    uStack_28 = uStack_28 | 0x1000;
  }
  else {
    if ((param_5 & 0xffff) >> 2 == 0) {
      if (uVar4 != 2) goto LAB_ram_4ff41b0e;
      uVar4 = 0x4000;
      uVar3 = 0x1000;
    }
    else {
      if (uVar4 != 4) {
        if (uVar4 != 5) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e06();
        }
        uStack_2c = uStack_2c | 0x8040;
        uStack_28 = uStack_28 | 0x2000;
        goto LAB_ram_4ff41b0e;
      }
      uVar4 = 0x8000;
      uVar3 = 0x2000;
    }
    uStack_2c = uStack_2c | uVar4;
    uStack_28 = uStack_28 | uVar3;
  }
LAB_ram_4ff41b0e:
  *(uint *)(iVar1 + 8) = uStack_2c;
  *(uint *)(iVar1 + 0x10) = uStack_28;
  if (*(byte *)(param_1 + 0xd) != 0) {
    *(uint *)(iVar1 + 8) = (*(byte *)(param_1 + 0xd) & 1) << 2 | *(uint *)(iVar1 + 8) & 0xfffffffb;
  }
  return 0;
}


