/* Firmware entry: 0x48131390 */

undefined4 FUN_ram_48131390(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar11 = param_2[8];
  iVar12 = param_2[9];
  if (iVar11 == 0) {
    if (1 < iVar12) {
      return 0x102;
    }
    uVar10 = *(undefined1 *)(param_2 + 3);
    uVar1 = *(undefined1 *)(param_2 + 2);
    uVar9 = param_2[0xc];
    uVar7 = param_2[0xb];
    param_1[3] = 0;
    *(undefined1 *)((int)param_1 + 0xf) = uVar1;
    *(undefined1 *)((int)param_1 + 0xe) = uVar10;
    cVar2 = *(char *)((int)param_2 + 0x2a);
    param_1[5] = uVar7;
    param_1[10] = uVar9;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[2] = iVar12;
    param_1[1] = &DAT_ram_5008d000;
    if (cVar2 != '\0') {
      if (iVar12 != 0) goto LAB_ram_48131590;
      *(char *)(param_1 + 3) = (char)*param_2;
      *(char *)((int)param_1 + 0xd) = (char)param_2[1];
      param_1[4] = param_2[4];
      cVar2 = *(char *)(param_2 + 10);
      goto joined_r0x48131514;
    }
  }
  else {
    if (iVar11 == 1) {
      if (5 < iVar12) {
        return 0x102;
      }
      uVar9 = 0x500d0000;
      uVar7 = *param_1;
    }
    else {
      if (2 < iVar12) {
        return 0x102;
      }
      if (iVar11 != 2) goto LAB_ram_48131590;
      uVar7 = *param_1;
      uVar9 = 0x500d1000;
    }
    uVar10 = *(undefined1 *)(param_2 + 2);
    uVar1 = *(undefined1 *)(param_2 + 3);
    uVar4 = param_2[0xb];
    uVar8 = param_2[0xc];
    param_1[3] = 0;
    *(undefined1 *)((int)param_1 + 0xe) = uVar1;
    *(undefined1 *)((int)param_1 + 0xf) = uVar10;
    cVar2 = *(char *)((int)param_2 + 0x2a);
    param_1[5] = uVar4;
    param_1[10] = uVar8;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    *param_1 = uVar7;
    param_1[1] = uVar9;
    param_1[2] = iVar12;
    if (cVar2 != '\0') {
LAB_ram_48131590:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
  }
  iVar11 = param_2[6];
  uVar5 = FUN_ram_481312ee(param_2);
  iVar11 = (iVar11 + 1) * 0x5a;
  uVar10 = 0;
  if (-1000 < iVar11) {
    uVar10 = (undefined1)((iVar11 / 1000) / (int)(90000000 / (90000000 / uVar5)));
  }
  *(undefined1 *)(param_1 + 3) = uVar10;
  if (param_2[8] == 0) {
    bVar3 = FUN_ram_481312ee(param_2);
    uVar5 = 0x80000000;
    if (bVar3 != 1) {
      uVar5 = bVar3 - 1;
      uVar5 = (int)uVar5 / 2 << 8 | uVar5 * 0x10000 & 0xff0000 | uVar5;
    }
  }
  else {
    uVar6 = FUN_ram_481312ee(param_2);
    uVar5 = 0x80000000;
    if ((uVar6 & 0xff) != 1) {
      uVar5 = (uVar6 & 0xff) - 1;
      uVar5 = uVar5 * 0x1000 & 0xff000 | uVar5 | (((uVar6 & 0xff) >> 1) - 1) * 0x40 & 0x3fc0;
    }
  }
  param_1[4] = uVar5;
  cVar2 = *(char *)(param_2 + 10);
joined_r0x48131514:
  if (cVar2 != '\0') {
    param_1[6] = param_1[6] | 3;
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xe);
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_2 + 0x3a);
  }
  return 0;
}


