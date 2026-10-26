/* Firmware entry: 0x48093458 */

char FUN_ram_48093458(int param_1,uint param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iStack_a4;
  int iStack_98;
  char cStack_94;
  char cStack_8b;
  byte bStack_7e;
  char cStack_7d;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar13 = 0x18;
    iVar11 = 0;
    iStack_a4 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar13 = 0x3590;
    iVar11 = 0x3578;
    iStack_a4 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return '\0';
    }
    iVar13 = 0x6b08;
    iVar11 = 0x6af0;
    iStack_a4 = 2;
  }
  iVar13 = iVar13 + param_1;
  iVar12 = iStack_a4 * 0x3578 + param_1;
  if (*(char *)(iVar12 + 0x594) != '\0') {
    iVar10 = iVar11 + 0x88c + param_1;
    iVar11 = 0;
    bVar4 = 0;
    do {
      while( true ) {
        memset(&iStack_98,0,0x58);
        cStack_94 = '\b';
        bStack_7e = 1;
        FUN_ram_4ff3ec14(iVar10,0xffffffff);
        iVar8 = *(int *)(iVar12 + 0x590) + iVar11;
        if (((*(char *)(iVar8 + 0xc1) != '\0') && (*(char *)(iVar8 + 0xbf) != '\0')) &&
           (*(char *)(iVar8 + 0xc0) == '\0')) break;
        FUN_ram_4ff3ee10(iVar10);
LAB_ram_480934ec:
        bVar4 = bVar4 + 1;
        iVar11 = iVar11 + 200;
        if (*(byte *)(iVar12 + 0x594) <= bVar4) {
          return '\0';
        }
      }
      iVar5 = FUN_ram_4ff21a0a();
      uVar14 = FUN_ram_4ff21a0a();
      uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
      if (((uVar7 <= *(uint *)(iVar8 + 0x6c)) &&
          ((*(uint *)(iVar8 + 0x6c) != uVar7 || ((uint)uVar14 <= *(uint *)(iVar8 + 0x68))))) &&
         (iVar6 = FUN_ram_48092f5a(iVar13,iVar8 + 0x28,iVar8 + 0x70), iVar6 != 0)) {
        fence();
        fence();
        iVar6 = iStack_a4 * 0x3578 + param_1;
        if ((((*(char *)(iVar6 + 0x895) != '\0') && (*(char *)(iVar6 + 0x89a) == '\0')) &&
            ((*(char *)(iVar6 + 0x896) == '\0' &&
             ((*(int *)(iVar8 + 0x70) == 0 || (*(int *)(iVar13 + 0x2e7c) == *(int *)(iVar8 + 0x70)))
             )))) && (((*(char *)(iVar8 + 0x78) == '\0' || (iVar5 - *(int *)(iVar8 + 0x74) < 1)) &&
                      (((cVar1 = *(char *)(iVar8 + 0xb8), cVar1 != '\0' &&
                        ((uint)(iVar5 - *(int *)(iVar8 + 100)) < 0x7d1)) &&
                       ((iVar6 = iStack_a4 * 0x3578 + param_1, *(char *)(iVar6 + 0x8d8) == '\0' ||
                        (*(int *)(iVar6 + 0x8d4) - *(int *)(iVar8 + 100) < 1)))))))) {
          param_3[1] = 0;
          param_3[2] = 0;
          param_3[4] = 0;
          param_3[5] = 0;
          param_3[6] = 0;
          param_3[7] = 0;
          param_3[8] = 0;
          param_3[9] = 0;
          param_3[10] = 0;
          param_3[0xb] = 0;
          param_3[0xc] = 0;
          param_3[0xd] = 0;
          param_3[0xe] = 0;
          param_3[0xf] = 0;
          param_3[0x10] = 0;
          param_3[0x11] = 0;
          param_3[0x12] = 0;
          param_3[0x13] = 0;
          param_3[0x14] = 0;
          param_3[0x15] = 0;
          param_3[0x16] = 0;
          param_3[0x17] = 0;
          param_3[0x18] = 0;
          param_3[0x19] = 0;
          param_3[0x1a] = 0;
          param_3[0x1b] = 0;
          param_3[0x1c] = 0;
          param_3[0x1d] = 0;
          param_3[0x1e] = 0;
          param_3[0x1f] = 0;
          param_3[0x20] = 0;
          param_3[0x21] = 0;
          param_3[0x22] = 1;
          *param_3 = (char)param_2;
          param_3[2] = *(byte *)(iVar8 + 0x2d) & 7;
          uVar2 = *(undefined1 *)(iVar8 + 0x78);
          uVar3 = *(undefined1 *)(iVar8 + 0x42);
          *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar8 + 0x88);
          *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar8 + 0x90);
          *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar8 + 0x94);
          *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar8 + 0x70);
          uVar9 = *(undefined4 *)(iVar8 + 0x74);
          param_3[0x1c] = uVar2;
          param_3[0x22] = uVar3;
          *(undefined4 *)(param_3 + 0x18) = uVar9;
          param_3[0x1e] = 1;
          param_3[0x20] = 1;
          FUN_ram_4ff3ee10(iVar10);
          return cVar1;
        }
      }
      FUN_ram_4ff26372(iVar13,iVar8,0,iVar5,&iStack_98);
      FUN_ram_4ff3ee10(iVar10);
      if (((((cStack_8b != '\x04') || (iStack_98 != 0x370)) || (cStack_94 != '\b')) ||
          (iVar8 = DAT_ram_4ff6dc64, cStack_7d != '\x12')) &&
         (iVar8 = DAT_ram_4ff6dc60, 1 < bStack_7e)) {
        iVar8 = DAT_ram_4ff6dc68;
      }
      if ((iVar8 != 0) && (iVar8 = FUN_ram_4ff3afa2(iVar8,&iStack_98,0,0), iVar8 == 1)) {
        FUN_ram_4ff3ec14(iVar10,0xffffffff);
        iVar8 = *(int *)(iVar12 + 0x588);
        FUN_ram_4ff3ee10(iVar10);
        if (iVar8 != 0) {
          FUN_ram_4ff3e004(iVar8,0,0,2,0);
        }
        goto LAB_ram_480934ec;
      }
      FUN_ram_4ff3ec14(iVar10,0xffffffff);
      bVar4 = bVar4 + 1;
      *(int *)(iVar12 + 0x2f04) = *(int *)(iVar12 + 0x2f04) + 1;
      FUN_ram_4ff3ee10(iVar10);
      iVar11 = iVar11 + 200;
    } while (bVar4 < *(byte *)(iVar12 + 0x594));
  }
  return '\0';
}


