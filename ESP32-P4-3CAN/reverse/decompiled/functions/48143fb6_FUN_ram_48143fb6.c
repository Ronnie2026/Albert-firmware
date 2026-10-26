/* Firmware entry: 0x48143fb6 */

void FUN_ram_48143fb6(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint extraout_a1;
  uint extraout_a2;
  uint uVar9;
  undefined1 *puVar10;
  uint extraout_a3;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ushort auStack_32 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  iVar15 = *(int *)(param_1 + 0xc4);
  if (iVar15 == 0) {
    return;
  }
  uVar14 = 0;
  if (*(char *)(iVar15 + 5) != '\x01') {
    *(undefined1 *)(iVar15 + 5) = 1;
    *(undefined1 *)(iVar15 + 6) = 0;
    *(undefined4 *)(iVar15 + 0xc) = 0;
  }
  iVar6 = FUN_ram_4814369e(param_1,iVar15,3,auStack_32);
  if (iVar6 != 0) {
    uVar12 = (uint)auStack_32[0];
    iVar13 = *(int *)(iVar6 + 4);
    uVar9 = uVar12 + 4;
    iVar5 = iVar13 + 0xf0;
    if (0x45 < uVar9) {
LAB_ram_48144298:
                    /* WARNING: Subroutine does not return */
      FUN_ram_48143a34();
    }
    *(undefined1 *)(iVar5 + uVar12) = 0x39;
    *(undefined1 *)((uVar12 + 1 & 0xffff) + iVar5) = 2;
    uVar3 = *(undefined2 *)(param_1 + 0xdc);
    *(char *)((uVar12 + 2 & 0xffff) + iVar5) = (char)((ushort)uVar3 >> 8);
    *(char *)(iVar5 + (uVar12 + 3 & 0xffff)) = (char)uVar3;
    auStack_32[0] = (ushort)uVar9;
    if (0x45 < uVar12 + 10) goto LAB_ram_48144298;
    *(undefined1 *)(uVar9 + iVar5) = 0x32;
    *(undefined1 *)((uVar12 + 5 & 0xffff) + iVar5) = 4;
    auStack_32[0] = (ushort)((uVar12 + 6) * 0x10000 >> 0x10);
    uVar7 = FUN_ram_48137fd6(*(undefined4 *)(iVar15 + 0x40));
    iVar8 = FUN_ram_48143a84(uVar12 + 6 & 0xffff,iVar5,uVar7);
    auStack_32[0] = (ushort)iVar8;
    if (0x45 < iVar8 + 6U) goto LAB_ram_48144298;
    *(undefined1 *)(iVar5 + iVar8) = 0x36;
    *(undefined1 *)((iVar8 + 1U & 0xffff) + iVar5) = 4;
    auStack_32[0] = (ushort)((iVar8 + 2U) * 0x10000 >> 0x10);
    uVar7 = FUN_ram_48137fd6(*(undefined4 *)(iVar15 + 0x28));
    iVar8 = FUN_ram_48143a84(iVar8 + 2U & 0xffff,iVar5,uVar7);
    auStack_32[0] = (ushort)iVar8;
    if (0x45 < iVar8 + 6U) goto LAB_ram_48144298;
    *(undefined1 *)(iVar5 + iVar8) = 0x37;
    *(undefined1 *)((iVar8 + 1U & 0xffff) + iVar5) = 4;
    puVar10 = &DAT_ram_48236e94;
    auStack_32[0] = (ushort)((iVar8 + 2U) * 0x10000 >> 0x10);
    puVar11 = (undefined1 *)((iVar8 + 0xf2U & 0xffff) + iVar13);
    bVar4 = false;
    uVar9 = iVar8 + 2U & 0xffff;
    uVar1 = DAT_ram_48236e94;
    while (uVar9 != 0x45) {
      *puVar11 = uVar1;
      uVar14 = uVar9 + 1 & 0xffff;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      bVar4 = true;
      if (uVar14 == (iVar8 + 6U & 0xffff)) {
        auStack_32[0] = (ushort)((uVar9 + 1) * 0x10000 >> 0x10);
        auStack_32[0] = FUN_ram_48143c6a(uVar14,iVar5,*(undefined4 *)(param_1 + 0xd8));
        FUN_ram_4814e070(param_1,1,iVar13,auStack_32);
        uVar14 = (uint)auStack_32[0];
        uVar12 = 0x43;
        *(undefined1 *)(uVar14 + iVar5) = 0xff;
        uVar9 = 0x44;
        goto LAB_ram_4814424c;
      }
      uVar1 = *puVar10;
      uVar9 = uVar14;
    }
    if (bVar4) {
      auStack_32[0] = (ushort)uVar14;
    }
    FUN_ram_48143a5c();
    uVar14 = extraout_a1;
    uVar9 = extraout_a2;
    uVar12 = extraout_a3;
    while (((uVar14 & 3) != 0 && (uVar14 == uVar9))) {
      do {
        *(undefined1 *)(iVar5 + uVar14) = 0;
LAB_ram_4814424c:
        uVar14 = uVar14 + 1 & 0xffff;
      } while (uVar14 <= uVar12);
    }
    FUN_ram_4813af5e(iVar6,uVar14 + 0xf0 & 0xffff);
    FUN_ram_48142ebc(DAT_ram_4ff6e214,iVar6,&DAT_ram_48236f84,0x43,param_1,&DAT_ram_48236f9c);
    FUN_ram_4813ac74(iVar6);
  }
  if (*(byte *)(iVar15 + 6) != 0xff) {
    uVar14 = *(byte *)(iVar15 + 6) + 1;
    *(char *)(iVar15 + 6) = (char)uVar14;
    if ((uVar14 & 0xff) < 5) {
      cVar2 = *(char *)(iVar15 + 8);
      *(uint *)(iVar15 + 0xc) = ((1 << (uVar14 & 0x1f)) * 0xfa + 499U & 0xffff) / 500;
      goto joined_r0x4814426e;
    }
  }
  cVar2 = *(char *)(iVar15 + 8);
  *(undefined4 *)(iVar15 + 0xc) = 8;
joined_r0x4814426e:
  if (cVar2 != '\0') {
    return;
  }
  FUN_ram_48142636(500,&LAB_ram_481457a2,param_1);
  *(undefined1 *)(iVar15 + 8) = 1;
  return;
}


