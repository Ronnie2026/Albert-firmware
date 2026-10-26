/* Firmware entry: 0x48109964 */

void FUN_ram_48109964(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48025ba6();
  iVar3 = FUN_ram_48025b94();
  bVar12 = param_2[0x11];
  iVar13 = 1;
  pbVar11 = param_2 + 4;
  iVar1 = iVar2 - (uint)(iVar3 - *(int *)(param_2 + 100)) / 1000;
  if (bVar12 == 1) {
    uVar4 = FUN_ram_480409ae(pbVar11,0,0);
    if ((uVar4 != 0) && (iVar13 = 0, (0x2c03feU >> (uVar4 & 0x1f) & 1) != 0)) {
LAB_ram_481099da:
      uVar7 = *(undefined4 *)(param_2 + 0x7c);
      iVar8 = (iVar13 * 0x16 + uVar4) * 4 + param_1;
      iVar13 = *(int *)(iVar8 + 0x7b4) + 1;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      *(int *)(iVar8 + 0x7b4) = iVar13;
      *(undefined4 *)(iVar8 + 0x8bc) = uVar7;
      bVar12 = param_2[0x11];
      if (bVar12 != 1) {
LAB_ram_48109a08:
        if (bVar12 == 2) {
LAB_ram_48109c66:
          FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
          iVar13 = 1;
          iVar8 = *(int *)(param_1 + 0x1370) + 1;
          goto LAB_ram_48109a34;
        }
        if (bVar12 == 4) goto LAB_ram_48109a14;
        goto LAB_ram_48109cfc;
      }
    }
    FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
    iVar13 = 0;
    iVar8 = *(int *)(param_1 + 0x1370) + 1;
LAB_ram_48109a34:
    iVar13 = iVar13 * 4 + param_1;
    *(int *)(param_1 + 0x1370) = iVar8;
    *(int *)(iVar13 + 0x13a0) = iVar1;
    *(int *)(iVar13 + 0x137c) = *(int *)(iVar13 + 0x137c) + 1;
  }
  else {
    if (bVar12 == 2) {
      uVar4 = FUN_ram_480409ae(pbVar11,0,0);
      if (uVar4 != 0) goto LAB_ram_481099ca;
LAB_ram_48109c60:
      if (bVar12 == 2) goto LAB_ram_48109c66;
LAB_ram_48109a14:
      FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
      iVar13 = 2;
      iVar8 = *(int *)(param_1 + 0x1370) + 1;
      goto LAB_ram_48109a34;
    }
    if (bVar12 == 4) {
      uVar4 = FUN_ram_480409ae(pbVar11,0,0);
      iVar13 = 2;
      if (uVar4 == 0) goto LAB_ram_48109c60;
LAB_ram_481099ca:
      if ((0x2c03feU >> (uVar4 & 0x1f) & 1) != 0) goto LAB_ram_481099da;
      goto LAB_ram_48109a08;
    }
LAB_ram_48109cfc:
    FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
    *(int *)(param_1 + 0x1370) = *(int *)(param_1 + 0x1370) + 1;
  }
  bVar12 = *param_2;
  *(int *)(param_1 + 0xd90) = *(int *)(param_1 + 0xd90) + 1;
  *(undefined4 *)(param_1 + 0xdbc) = *(undefined4 *)(param_2 + 100);
  if (bVar12 == 4) {
LAB_ram_48109b32:
    *(int *)(param_1 + 0xda4) = *(int *)(param_1 + 0xda4) + 1;
  }
  else if (bVar12 < 5) {
    if (bVar12 == 2) {
      *(int *)(param_1 + 0xd94) = *(int *)(param_1 + 0xd94) + 1;
      *(int *)(param_1 + 0xd9c) = *(int *)(param_1 + 0xd9c) + 1;
      *(undefined4 *)(param_1 + 0xdc4) = *(undefined4 *)(param_2 + 0x6c);
      if (param_2[0x81] == 9) goto LAB_ram_48109b32;
    }
    else if (bVar12 != 3) {
      if (bVar12 == 1) {
        *(int *)(param_1 + 0xd9c) = *(int *)(param_1 + 0xd9c) + 1;
        *(int *)(param_1 + 0xd94) = *(int *)(param_1 + 0xd94) + 1;
        *(int *)(param_1 + 0xdac) = *(int *)(param_1 + 0xdac) + 1;
        uVar7 = *(undefined4 *)(param_2 + 0x6c);
        bVar12 = param_2[0x84];
        *(int *)(param_1 + 0xdc8) = iVar3;
        *(undefined4 *)(param_1 + 0xdc4) = uVar7;
        uVar7 = *(undefined4 *)(param_2 + 0x70);
        *(byte *)(param_1 + 0xdd4) = bVar12;
        *(undefined4 *)(param_1 + 0xdcc) = uVar7;
        FUN_ram_4ff3ee10(param_1 + 0xb20);
        bVar12 = param_2[0x83];
        goto joined_r0x48109b4a;
      }
      goto LAB_ram_48109ca4;
    }
LAB_ram_48109cd8:
    *(int *)(param_1 + 0xda8) = *(int *)(param_1 + 0xda8) + 1;
  }
  else {
    if (bVar12 < 8) {
      if (bVar12 != 5) goto LAB_ram_48109cd8;
    }
    else if (bVar12 == 8) {
      bVar12 = param_2[0x85];
      *(int *)(param_1 + 0xd94) = *(int *)(param_1 + 0xd94) + 1;
      if (bVar12 != 0) {
        *(int *)(param_1 + 0xd9c) = *(int *)(param_1 + 0xd9c) + 1;
        *(undefined4 *)(param_1 + 0xdc4) = *(undefined4 *)(param_2 + 0x6c);
      }
      goto LAB_ram_48109b3c;
    }
LAB_ram_48109ca4:
    *(int *)(param_1 + 0xd98) = *(int *)(param_1 + 0xd98) + 1;
  }
LAB_ram_48109b3c:
  FUN_ram_4ff3ee10(param_1 + 0xb20);
  bVar12 = param_2[0x83];
joined_r0x48109b4a:
  if (((bVar12 != 0) && (*(int *)(param_2 + 0x74) != 0)) && ((*(uint *)(param_2 + 0x54) & 2) != 0))
  {
    if (param_2[0x84] == 0) {
      iVar13 = *(int *)(param_2 + 0x6c);
    }
    else {
      iVar13 = *(int *)(param_2 + 0x70);
    }
    if ((((param_2[0x35] == 2) && (*(int *)(param_2 + 0x28) == 0x3c2)) &&
        ((param_2[0x2c] == 8 && (((param_2[0x2d] & 3) == 1 && ((param_2[0x30] & 0x3f) != 0)))))) &&
       ((uint)(iVar3 - iVar13) < 0xf4628)) {
      uVar16 = *(undefined4 *)(param_2 + 0x2c);
      uVar15 = *(undefined4 *)(param_2 + 0x30);
      uVar14 = *(undefined4 *)(param_2 + 0x34);
      uVar7 = *(undefined4 *)(param_2 + 0x38);
      uVar10 = *(undefined4 *)(param_2 + 0x3c);
      uVar9 = *(undefined4 *)(param_2 + 0x40);
      uVar5 = *(undefined4 *)(param_2 + 0x44);
      uVar6 = *(undefined4 *)(param_2 + 0x48);
      iVar13 = iVar2 - (uint)(iVar3 - iVar13) / 1000;
      *(int *)(param_1 + 0x93b0) = iVar13;
      *(undefined4 *)(param_1 + 0x938c) = 0x3c2;
      *(undefined4 *)(param_1 + 0x9390) = uVar16;
      *(undefined4 *)(param_1 + 0x9394) = uVar15;
      *(undefined4 *)(param_1 + 0x9398) = uVar14;
      *(undefined4 *)(param_1 + 0x939c) = uVar7;
      *(undefined4 *)(param_1 + 0x93a0) = uVar10;
      *(undefined4 *)(param_1 + 0x93a4) = uVar9;
      *(undefined4 *)(param_1 + 0x93a8) = uVar5;
      *(undefined4 *)(param_1 + 0x93ac) = uVar6;
      *(undefined1 *)(param_1 + 0x93b8) = 1;
      if (((*(char *)(param_1 + 0x92fd) != '\0') && (*(char *)(param_1 + 0x92f9) != '\0')) &&
         (*(char *)(param_1 + 0x9309) == '\0')) {
        *(undefined1 *)(param_1 + 0x9309) = 1;
        *(undefined2 *)(param_1 + 0x92d8) = *(undefined2 *)(param_1 + 0x92d6);
      }
      *(int *)(param_1 + 0x92c8) = iVar13;
      *(undefined1 *)(param_1 + 0x9308) = 1;
    }
  }
  FUN_ram_480dea48(param_1 + 0x9288,pbVar11,iVar1);
  FUN_ram_48109298(param_1 + 0x7cd0,param_2,iVar2,iVar1);
  return;
}


