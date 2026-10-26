/* Firmware entry: 0x480d88ca */

undefined4 FUN_ram_480d88ca(int *param_1)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  ushort uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  byte bStack_3c;
  undefined4 uStack_38;
  byte bStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  byte bStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = *param_1;
  if (*(int *)(iVar7 + 0x33e8) == 0) {
    return 0;
  }
  FUN_ram_4ff3ec14(iVar7 + 0x2864,0xffffffff);
  piVar9 = *(int **)(iVar7 + 0x1e08);
  FUN_ram_4ff3ee10(iVar7 + 0x2864);
  iVar7 = *param_1;
  psVar2 = *(short **)(iVar7 + 0x33ec);
  if (psVar2 == (short *)0x0) {
LAB_ram_480d8950:
    memset(&iStack_70,0,0x50);
    iVar7 = *(int *)(iVar7 + 0x33e8);
    iVar8 = iVar7 + 0xc;
    uStack_44._0_3_ = CONCAT12(1,(undefined2)uStack_44);
    FUN_ram_4ff3ec14(iVar8,0xffffffff);
    uVar3 = (uint)*(ushort *)(iVar7 + 0x3bf2);
    if (uVar3 != 0xffff) {
      sVar4 = *(short *)(uVar3 * 0x48 + iVar7 + 0x56);
      *(short *)(iVar7 + 0x3bf2) = sVar4;
      if (sVar4 == -1) {
        *(undefined2 *)(iVar7 + 0x3bf4) = 0xffff;
      }
      iVar5 = uVar3 * 0x48 + iVar7;
      iStack_70 = *(int *)(iVar5 + 0x18);
      iStack_6c = *(int *)(iVar5 + 0x1c);
      *(byte *)(iVar5 + 0x5e) = *(byte *)(iVar5 + 0x5e) | 0x10;
      *(undefined2 *)(iVar5 + 0x56) = 0xffff;
      if (iStack_70 == 0 && iStack_6c == 0) {
        uStack_64 = 0;
        uStack_68 = 0;
      }
      else {
        uStack_64 = *(ushort *)(iVar5 + 0x54);
        if (uStack_64 < 0x1ff) {
          uStack_68 = iStack_70 << 9 | uStack_64 + 1;
        }
        else {
          uStack_64 = 0;
          uStack_68 = 0;
          iStack_70 = 0;
          iStack_6c = 0;
        }
      }
      iVar7 = iVar7 + uVar3 * 0x48;
      uStack_60 = *(undefined4 *)(iVar7 + 0x20);
      uStack_5c = *(undefined4 *)(iVar7 + 0x24);
      bVar1 = *(byte *)(iVar7 + 0x5d);
      uStack_58 = *(undefined4 *)(iVar7 + 0x28);
      uStack_54 = *(undefined4 *)(iVar7 + 0x2c);
      uStack_50 = *(undefined4 *)(iVar7 + 0x30);
      uStack_4c = *(undefined4 *)(iVar7 + 0x34);
      uStack_44 = *(undefined4 *)(iVar7 + 0x3c);
      uStack_48 = *(undefined4 *)(iVar7 + 0x38);
      uStack_28 = *(undefined4 *)(iVar7 + 0x4c);
      uStack_40 = *(undefined4 *)(iVar7 + 0x48);
      uStack_38 = *(undefined4 *)(iVar7 + 0x44);
      uStack_30 = *(undefined4 *)(iVar7 + 0x50);
      uStack_2c = *(undefined1 *)(iVar7 + 0x5c);
      bStack_3c = bVar1 >> 2 & 1;
      bStack_34 = bVar1 >> 1 & 1;
      bStack_24 = bVar1 >> 3 & 1;
      FUN_ram_4ff3ee10(iVar8);
      FUN_ram_480d7f82(param_1,&iStack_70);
      return 1;
    }
    FUN_ram_4ff3ee10(iVar8);
  }
  else {
    sVar4 = *psVar2;
    if (sVar4 == 0) {
      return 0;
    }
    if (*(code **)(psVar2 + 2) == (code *)0x0) {
LAB_ram_480d894a:
      *psVar2 = sVar4 + -1;
      goto LAB_ram_480d8950;
    }
    iVar7 = (**(code **)(psVar2 + 2))();
    if ((uint)(iVar7 - *(int *)(psVar2 + 4)) < *(uint *)(psVar2 + 6)) {
      sVar4 = *psVar2;
      iVar7 = *param_1;
      goto LAB_ram_480d894a;
    }
  }
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  iVar7 = *param_1;
  psVar2 = *(short **)(iVar7 + 0x33ec);
  if (psVar2 != (short *)0x0) {
    sVar4 = *psVar2;
    if (sVar4 == 0) {
      return 0;
    }
    if (*(code **)(psVar2 + 2) != (code *)0x0) {
      iVar7 = (**(code **)(psVar2 + 2))();
      if (*(uint *)(psVar2 + 6) <= (uint)(iVar7 - *(int *)(psVar2 + 4))) {
        return 0;
      }
      iVar7 = *param_1;
      sVar4 = *psVar2;
    }
    *psVar2 = sVar4 + -1;
  }
  iVar7 = *(int *)(iVar7 + 0x33e8);
  iVar8 = FUN_ram_48025b94();
  iVar5 = (**(code **)(*piVar9 + 0x140))(piVar9,1);
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*piVar9 + 0x104))(piVar9);
    if (iVar5 == 0) {
      FUN_ram_4ff3ec14(iVar7 + 0xc,0xffffffff);
      uVar3 = *(ushort *)(iVar7 + 8) + 1;
      iVar5 = (uint)*(ushort *)(iVar7 + 8) * 0x48;
      iVar6 = iVar7 + iVar5;
      *(short *)(iVar7 + 8) = (short)uVar3 + (short)(uVar3 / 0xce) * -0xce;
      if ((((*(int *)(iVar6 + 0x5c) << 0xf < 0) && (-1 < *(int *)(iVar6 + 0x5c) << 0xc)) &&
          (*(char *)(iVar6 + 0x58) == '\x03')) &&
         (((*(byte *)(iVar6 + 0x5d) >> 1 & 1) != 0 &&
          ((uint)((iVar8 + -2000000) - *(int *)(iVar6 + 0x44)) < 0x7fe17b80)))) {
        *(byte *)(iVar6 + 0x5d) = *(byte *)(iVar6 + 0x5d) & 0xf7;
        *(undefined4 *)(iVar6 + 0x4c) = 0;
        *(byte *)(iVar6 + 0x5e) = *(byte *)(iVar6 + 0x5e) | 4;
        *(undefined1 *)(iVar6 + 0x5b) = 0xd;
        FUN_ram_480375b2(iVar7 + 8,iVar7 + 8 + iVar5 + 0x10,0xd,iVar8,1);
      }
      goto LAB_ram_480d8b22;
    }
  }
  FUN_ram_4ff3ec14(iVar7 + 0xc,0xffffffff);
  uVar3 = *(ushort *)(iVar7 + 8) + 1;
  *(short *)(iVar7 + 8) = (short)uVar3 + (short)(uVar3 / 0xce) * -0xce;
LAB_ram_480d8b22:
  FUN_ram_4ff3ee10(iVar7 + 0xc);
  return 0;
}


