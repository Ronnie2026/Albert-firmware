/* Firmware entry: 0x48121916 */

int FUN_ram_48121916(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined1 *puVar11;
  int *piVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  byte bVar16;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x14) == 1) {
    pbVar14 = (byte *)(param_1 + 4);
    iVar13 = -1;
    iVar15 = -1;
    iVar8 = 0;
    iVar4 = 0;
    iVar5 = 1;
    pbVar7 = pbVar14;
    do {
      if ((*pbVar7 == 0) && (pbVar7[1] == 0)) {
        if (iVar13 == -1) {
          iVar4 = 1;
          iVar13 = iVar8;
        }
        else {
          iVar4 = (iVar4 + 1) * 0x1000000 >> 0x18;
        }
        if (iVar5 < iVar4) {
          iVar5 = iVar4;
          iVar15 = iVar13;
        }
      }
      else {
        iVar13 = -1;
      }
      uVar9 = iVar8 + 1;
      pbVar7 = pbVar7 + 2;
      iVar8 = (int)(uVar9 * 0x1000000) >> 0x18;
    } while ((uVar9 & 0xff) != 8);
    if ((iVar15 < 1) && (0 < iVar5 + iVar15)) {
      if (iVar15 != 0) {
        pbVar14 = (byte *)(param_1 + 6);
        iVar13 = 1;
        iVar4 = 0;
        goto LAB_ram_48121a62;
      }
      iVar4 = FUN_ram_4802bc72(param_2,0x3a);
      iVar13 = FUN_ram_4802bc72(param_2,0x3a);
      pbVar14 = (byte *)(param_1 + 6);
      iVar4 = iVar4 + iVar13;
      iVar13 = 1;
      goto LAB_ram_48121a62;
    }
    iVar13 = 0;
    iVar4 = 0;
LAB_ram_481219da:
    bVar1 = *pbVar14;
    bVar2 = bVar1 >> 4;
    bVar3 = pbVar14[1] >> 4;
    bVar16 = bVar1 & 0xf;
    bVar10 = pbVar14[1] & 0xf;
    if (bVar2 == 0) {
      if ((bVar1 & 0xf) != 0) goto LAB_ram_48121a0a;
      if (bVar3 != 0) goto LAB_ram_48121a20;
    }
    else {
      cVar6 = bVar2 + 0x57;
      if (bVar2 < 10) {
        cVar6 = bVar2 + 0x30;
      }
      iVar8 = FUN_ram_4802bc72(param_2,cVar6);
      iVar4 = iVar4 + iVar8;
LAB_ram_48121a0a:
      cVar6 = bVar16 + 0x57;
      if (bVar16 < 10) {
        cVar6 = bVar16 + 0x30;
      }
      iVar8 = FUN_ram_4802bc72(param_2,cVar6);
      iVar4 = iVar4 + iVar8;
LAB_ram_48121a20:
      cVar6 = bVar3 + 0x57;
      if (bVar3 < 10) {
        cVar6 = bVar3 + 0x30;
      }
      iVar8 = FUN_ram_4802bc72(param_2,cVar6);
      iVar4 = iVar4 + iVar8;
    }
    cVar6 = bVar10 + 0x57;
    if (bVar10 < 10) {
      cVar6 = bVar10 + 0x30;
    }
    iVar8 = FUN_ram_4802bc72(param_2,cVar6);
    iVar4 = iVar4 + iVar8;
    if (iVar13 != 7) {
      iVar8 = FUN_ram_4802bc72(param_2,0x3a);
      iVar13 = iVar13 + 1;
      pbVar14 = pbVar14 + 2;
      iVar4 = iVar4 + iVar8;
LAB_ram_48121a62:
      while ((iVar15 <= iVar13 && (iVar13 < iVar5 + iVar15))) {
        if (iVar13 == iVar15) {
          iVar8 = FUN_ram_4802bc72(param_2,0x3a);
          iVar4 = iVar4 + iVar8;
        }
        iVar13 = iVar13 + 1;
        pbVar14 = pbVar14 + 2;
        if (iVar13 == 8) goto LAB_ram_48121a7c;
      }
      goto LAB_ram_481219da;
    }
LAB_ram_48121a7c:
    if ((*(char *)(param_1 + 0x18) != '\0') && (param_3 != 0)) {
      iVar13 = FUN_ram_4802bc72(param_2,0x25);
      iVar13 = iVar13 + iVar4;
      uVar9 = *(byte *)(param_1 + 0x18) - 1;
      for (piVar12 = (int *)DAT_ram_4ff6e1ac; piVar12 != (int *)0x0; piVar12 = (int *)*piVar12) {
        if (uVar9 == *(byte *)((int)piVar12 + 0xea)) {
          iVar4 = FUN_ram_4802bc72(param_2,*(undefined1 *)(piVar12 + 0x3a));
          iVar5 = FUN_ram_4802bc72(param_2,*(undefined1 *)((int)piVar12 + 0xe9));
          iVar13 = iVar13 + iVar4 + iVar5;
          uVar9 = *(byte *)(param_1 + 0x18) - 1;
          break;
        }
      }
      iVar4 = thunk_FUN_ram_4802bd3e(param_2,uVar9,10);
      iVar4 = iVar13 + iVar4;
    }
  }
  else {
    puVar11 = (undefined1 *)(param_1 + 0x10);
    iVar13 = 0;
    do {
      iVar4 = FUN_ram_4802bc78(param_2,*puVar11,10);
      iVar5 = FUN_ram_4802bc72(param_2,0x2e);
      puVar11 = puVar11 + 1;
      iVar13 = iVar13 + iVar4 + iVar5;
    } while (puVar11 != (undefined1 *)(param_1 + 0x13));
    iVar4 = FUN_ram_4802bc78(param_2,*(undefined1 *)(param_1 + 0x13),10);
    iVar4 = iVar4 + iVar13;
  }
  return iVar4;
}


