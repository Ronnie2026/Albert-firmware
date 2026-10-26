/* Firmware entry: 0x48143d6a */

void FUN_ram_48143d6a(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint extraout_a1;
  uint extraout_a2;
  undefined1 *puVar8;
  uint extraout_a3;
  undefined1 *puVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ushort uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar12 = *(int *)(param_1 + 0xc4);
  *(undefined4 *)(iVar12 + 0x40) = 0;
  uVar13 = 0;
  if (*(char *)(iVar12 + 5) != '\x06') {
    *(undefined1 *)(iVar12 + 5) = 6;
    *(undefined1 *)(iVar12 + 6) = 0;
    *(undefined4 *)(iVar12 + 0xc) = 0;
  }
  iVar5 = FUN_ram_4814369e(param_1,iVar12,1,&uStack_22);
  if (iVar5 != 0) {
    uVar10 = (uint)uStack_22;
    iVar14 = *(int *)(iVar5 + 4);
    uVar6 = uVar10 + 4;
    iVar4 = iVar14 + 0xf0;
    if (0x45 < uVar6) {
LAB_ram_48143fb2:
                    /* WARNING: Subroutine does not return */
      FUN_ram_48143a34();
    }
    *(undefined1 *)(iVar4 + uVar10) = 0x39;
    *(undefined1 *)((uVar10 + 1 & 0xffff) + iVar4) = 2;
    uVar3 = *(undefined2 *)(param_1 + 0xdc);
    *(char *)((uVar10 + 2 & 0xffff) + iVar4) = (char)((ushort)uVar3 >> 8);
    *(char *)((uVar10 + 3 & 0xffff) + iVar4) = (char)uVar3;
    uStack_22 = (ushort)(uVar6 * 0x10000 >> 0x10);
    iVar7 = FUN_ram_48143c6a(uVar6 & 0xffff,iVar4,*(undefined4 *)(param_1 + 0xd8));
    uStack_22 = (ushort)iVar7;
    if (0x45 < iVar7 + 6U) goto LAB_ram_48143fb2;
    *(undefined1 *)(iVar7 + iVar4) = 0x37;
    *(undefined1 *)((iVar7 + 1U & 0xffff) + iVar4) = 4;
    puVar8 = &DAT_ram_48236e94;
    uStack_22 = (ushort)((iVar7 + 2U) * 0x10000 >> 0x10);
    puVar9 = (undefined1 *)((iVar7 + 0xf2U & 0xffff) + iVar14);
    bVar11 = false;
    uVar6 = iVar7 + 2U & 0xffff;
    uVar1 = DAT_ram_48236e94;
    while (uVar6 != 0x45) {
      *puVar9 = uVar1;
      uVar13 = uVar6 + 1 & 0xffff;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      bVar11 = true;
      if (uVar13 == (iVar7 + 6U & 0xffff)) {
        uStack_22 = (ushort)((uVar6 + 1) * 0x10000 >> 0x10);
        FUN_ram_4814e070(param_1,6,iVar14,&uStack_22);
        uVar13 = (uint)uStack_22;
        uVar10 = 0x43;
        *(undefined1 *)(uVar13 + iVar4) = 0xff;
        uVar6 = 0x44;
        goto LAB_ram_48143f68;
      }
      uVar1 = *puVar8;
      uVar6 = uVar13;
    }
    if (bVar11) {
      uStack_22 = (ushort)uVar13;
    }
    FUN_ram_48143a5c();
    uVar13 = extraout_a1;
    uVar6 = extraout_a2;
    uVar10 = extraout_a3;
    while (((uVar13 & 3) != 0 && (uVar13 == uVar6))) {
      do {
        *(undefined1 *)(iVar4 + uVar13) = 0;
LAB_ram_48143f68:
        uVar13 = uVar13 + 1 & 0xffff;
      } while (uVar13 <= uVar10);
    }
    FUN_ram_4813af5e(iVar5,uVar13 + 0xf0 & 0xffff);
    FUN_ram_48142ebc(DAT_ram_4ff6e214,iVar5,&DAT_ram_48236f84,0x43,param_1,&DAT_ram_48236f9c);
    FUN_ram_4813ac74(iVar5);
  }
  if (*(byte *)(iVar12 + 6) != 0xff) {
    uVar13 = *(byte *)(iVar12 + 6) + 1;
    *(char *)(iVar12 + 6) = (char)uVar13;
    if ((uVar13 & 0xff) < 5) {
      cVar2 = *(char *)(iVar12 + 8);
      *(uint *)(iVar12 + 0xc) = ((1 << (uVar13 & 0x1f)) * 0xfa + 499U & 0xffff) / 500;
      goto joined_r0x48143f2a;
    }
  }
  cVar2 = *(char *)(iVar12 + 8);
  *(undefined4 *)(iVar12 + 0xc) = 8;
joined_r0x48143f2a:
  if (cVar2 != '\0') {
    return;
  }
  FUN_ram_48142636(500,&LAB_ram_481457a2,param_1);
  *(undefined1 *)(iVar12 + 8) = 1;
  return;
}


