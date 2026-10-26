/* Firmware entry: 0x4809256c */

char FUN_ram_4809256c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                     undefined4 *param_5,int param_6)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0x18c67) != '\0') && (fence(), *(char *)(param_1 + 0x18c6b) != '\0')) {
    fence();
    if (*(char *)(param_1 + 0x18d88) != '\0') {
      if (*(char *)(param_1 + 0x2c) == '\x02') {
        iVar12 = 0x18;
        iVar7 = 0;
        iVar11 = 0;
      }
      else if (*(char *)(param_1 + 0x35a4) == '\x02') {
        iVar12 = 0x3590;
        iVar7 = 0x3578;
        iVar11 = 1;
      }
      else {
        if (*(char *)(param_1 + 0x6b1c) != '\x02') {
          return '\0';
        }
        iVar12 = 0x6b08;
        iVar7 = 0x6af0;
        iVar11 = 2;
      }
      iVar15 = iVar11 * 0x3578 + param_1;
      if (*(int *)(iVar15 + 0x10c) != 0) {
        iVar7 = param_1 + iVar7 + 0x88c;
        FUN_ram_4ff3ec14(iVar7,0xffffffff);
        cVar1 = *(char *)(iVar15 + 0x895);
        if ((((cVar1 != '\0') && (*(char *)(iVar15 + 0x896) == '\0')) &&
            (*(char *)(iVar15 + 0x89a) == '\0')) &&
           ((*(char *)(iVar15 + 0x89b) == '\0' && (fence(), *(char *)(param_1 + 0x18d88) != '\0'))))
        {
          uVar6 = FUN_ram_4ff21a0a();
          iVar12 = FUN_ram_4ff26908(param_1 + iVar12,uVar6);
          if (iVar12 == param_6) {
            iVar12 = *(int *)(iVar15 + 0x10c);
            if (*(char *)(iVar12 + 0x602) != '\0') {
              iVar9 = 0;
              puVar8 = (undefined4 *)((uint)*(byte *)(iVar12 + 0x600) * 0x30 + iVar12);
              uVar6 = *puVar8;
              uVar20 = puVar8[1];
              uVar18 = puVar8[2];
              uVar16 = puVar8[3];
              uVar4 = puVar8[4];
              uVar14 = puVar8[9];
              uVar13 = puVar8[10];
              uVar10 = puVar8[0xb];
              uVar21 = puVar8[5];
              uVar19 = puVar8[6];
              uVar17 = puVar8[7];
              uVar5 = puVar8[8];
              uVar2 = *(undefined1 *)((int)puVar8 + 0x1a);
              *(byte *)(iVar12 + 0x600) = *(byte *)(iVar12 + 0x600) + 1 & 0x1f;
              *(char *)(iVar12 + 0x602) = *(char *)(iVar12 + 0x602) + -1;
              bVar3 = *(byte *)(*(int *)(iVar15 + 0x10c) + 0x602);
              if (*(int *)(iVar15 + 0x110) != 0) {
                iVar9 = FUN_ram_4ff3b9c2();
              }
              *(uint *)(param_1 + iVar11 * 0x3578 + 0x2fec) = (uint)bVar3 + iVar9;
              FUN_ram_4ff3ee10(iVar7);
              uStack_48._3_1_ = (undefined1)((uint)uVar19 >> 0x18);
              uStack_48._0_3_ = CONCAT12(uVar2,(short)uVar19);
              *param_2 = uVar6;
              param_2[1] = uVar20;
              param_2[2] = uVar18;
              param_2[3] = uVar16;
              param_2[4] = uVar4;
              param_2[5] = uVar21;
              param_2[6] = uStack_48;
              param_2[7] = uVar17;
              param_2[8] = uVar5;
              *param_3 = uVar14;
              *param_4 = uVar13;
              *param_5 = uVar10;
              return cVar1;
            }
          }
        }
        FUN_ram_4ff3ee10(iVar7);
      }
    }
  }
  return '\0';
}


