/* Firmware entry: 0x48144b4a */

void FUN_ram_48144b4a(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte bVar9;
  uint uVar10;
  undefined1 *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ushort auStack_32 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar14 = *(int *)(param_1 + 0xc4);
  uVar15 = 0;
  if (*(char *)(iVar14 + 5) != '\x03') {
    *(undefined1 *)(iVar14 + 5) = 3;
    *(undefined1 *)(iVar14 + 6) = 0;
    *(undefined4 *)(iVar14 + 0xc) = 0;
  }
  iVar4 = FUN_ram_4814369e(param_1,iVar14,3,auStack_32);
  if (iVar4 != 0) {
    uVar10 = (uint)auStack_32[0];
    iVar13 = *(int *)(iVar4 + 4);
    uVar7 = uVar10 + 4;
    iVar3 = iVar13 + 0xf0;
    if (0x45 < uVar7) {
LAB_ram_48144df0:
                    /* WARNING: Subroutine does not return */
      FUN_ram_48143a34();
    }
    *(undefined1 *)(iVar3 + uVar10) = 0x39;
    *(undefined1 *)((uVar10 + 1 & 0xffff) + iVar3) = 2;
    *(undefined1 *)((uVar10 + 2 & 0xffff) + iVar3) = 2;
    *(undefined1 *)((uVar10 + 3 & 0xffff) + iVar3) = 0x40;
    auStack_32[0] = (ushort)uVar7;
    if (0x45 < uVar10 + 10) goto LAB_ram_48144df0;
    *(undefined1 *)(uVar7 + iVar3) = 0x32;
    *(undefined1 *)((uVar10 + 5 & 0xffff) + iVar3) = 4;
    auStack_32[0] = (ushort)((uVar10 + 6) * 0x10000 >> 0x10);
    uVar5 = FUN_ram_48137fd6(*(undefined4 *)(iVar14 + 0x40));
    iVar6 = FUN_ram_48143a84(uVar10 + 6 & 0xffff,iVar3,uVar5);
    auStack_32[0] = (ushort)iVar6;
    if (0x45 < iVar6 + 6U) goto LAB_ram_48144df0;
    *(undefined1 *)(iVar3 + iVar6) = 0x37;
    *(undefined1 *)(iVar3 + (iVar6 + 1U & 0xffff)) = 4;
    puVar8 = &DAT_ram_48236e94;
    auStack_32[0] = (ushort)((iVar6 + 2U) * 0x10000 >> 0x10);
    puVar11 = (undefined1 *)((iVar6 + 0xf2U & 0xffff) + iVar13);
    bVar12 = false;
    uVar7 = iVar6 + 2U & 0xffff;
    uVar1 = DAT_ram_48236e94;
    while( true ) {
      if (uVar7 == 0x45) {
        if (bVar12) {
          auStack_32[0] = (ushort)uVar15;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x600,"dhcp_option_byte",
                         "dhcp_option_byte: options_out_len < DHCP_OPTIONS_LEN");
      }
      *puVar11 = uVar1;
      uVar15 = uVar7 + 1 & 0xffff;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      bVar12 = true;
      if (uVar15 == (iVar6 + 6U & 0xffff)) break;
      uVar1 = *puVar8;
      uVar7 = uVar15;
    }
    auStack_32[0] = (ushort)((uVar7 + 1) * 0x10000 >> 0x10);
    auStack_32[0] = FUN_ram_48143c6a(uVar15,iVar3,*(undefined4 *)(param_1 + 0xd8));
    FUN_ram_4814e070(param_1,3,iVar13,auStack_32);
    uVar15 = (uint)auStack_32[0];
    *(undefined1 *)(uVar15 + iVar3) = 0xff;
    while( true ) {
      uVar7 = uVar15 + 1;
      uVar15 = uVar7 & 0xffff;
      if ((0x43 < uVar15) && (((uVar7 & 3) == 0 || (uVar15 != 0x44)))) break;
      *(undefined1 *)(iVar3 + uVar15) = 0;
    }
    FUN_ram_4813af5e(iVar4,uVar15 + 0xf0 & 0xffff);
    FUN_ram_4814310e(DAT_ram_4ff6e214,iVar4,&DAT_ram_48236f84,0x43,param_1);
    FUN_ram_4813ac74(iVar4);
  }
  if (*(char *)(iVar14 + 6) != -1) {
    bVar9 = *(char *)(iVar14 + 6) + 1;
    *(byte *)(iVar14 + 6) = bVar9;
    if (bVar9 < 10) {
      cVar2 = *(char *)(iVar14 + 8);
      *(uint *)(iVar14 + 0xc) = ((uint)bVar9 * 1000 + 499 & 0xffff) / 500;
      goto joined_r0x48144d58;
    }
  }
  cVar2 = *(char *)(iVar14 + 8);
  *(undefined4 *)(iVar14 + 0xc) = 0x14;
joined_r0x48144d58:
  if (cVar2 != '\0') {
    return;
  }
  FUN_ram_48142636(500,&LAB_ram_481457a2,param_1);
  *(undefined1 *)(iVar14 + 8) = 1;
  return;
}


