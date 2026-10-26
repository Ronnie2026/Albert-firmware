/* Firmware entry: 0x4ff41f6a */

undefined4 FUN_ram_4ff41f6a(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 4);
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffb | (param_5 >> 0x1f) << 2;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x40000;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x80000;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x200000;
  uVar4 = param_5 & 0xffff;
  iVar2 = FUN_ram_4ff20626();
  if ((iVar2 == 0) && ((int)param_5 < 0)) {
    iVar2 = -2;
    if (uVar4 == 3) {
      iVar2 = -4;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffd;
    param_4 = param_4 + iVar2;
    param_3 = param_3 + 8;
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xff00ffff;
  }
  if (param_2 < 0x100) {
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x80000000;
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffff0000 | param_2 & 0xffff;
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xfffffff | 0x70000000;
  }
  else {
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x80000000;
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffff0000 | param_2 & 0xffff;
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0xf0000000;
  }
  iVar2 = FUN_ram_4ff20626();
  if (iVar2 != 0) {
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffd | (uint)(param_3 == 0x20) << 1;
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0x3ffffff | (param_3 + -1) * 0x4000000;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xbfffffff | (uint)(param_3 != 0) << 0x1e;
  param_4 = (uint)*(byte *)(param_1 + 0xc) + param_4;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xdfffffff | (uint)(param_4 != 0) << 0x1d;
  if (param_4 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffc0 | param_4 - 1U & 0x3f;
  }
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xefffffff;
  *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 0xfffffc00;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xf7ffffff;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 0xfffffc00;
  uVar3 = *(uint *)(iVar1 + 8) & 0xfe6fbfff;
  uStack_34 = uVar3 | 0x2000;
  if (uVar4 == 3) {
    uStack_34 = uVar3 | 0x802000;
  }
  else if ((param_5 & 0xffff) >> 2 == 0) {
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        uStack_34 = uVar3 | 0x6000;
      }
      else {
        uStack_34 = *(uint *)(iVar1 + 8) & 0xfe6f9fff;
      }
    }
  }
  else if (uVar4 == 4) {
    uStack_34 = uVar3 | 0x102000;
  }
  else {
    if (uVar4 != 5) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    uStack_34 = uVar3 | 0x1002000;
  }
  *(uint *)(iVar1 + 8) = uStack_34;
  if (*(byte *)(param_1 + 0xd) != 0) {
    *(uint *)(iVar1 + 8) = (*(byte *)(param_1 + 0xd) & 1) << 2 | *(uint *)(iVar1 + 8) & 0xfffffffb;
  }
  return 0;
}


