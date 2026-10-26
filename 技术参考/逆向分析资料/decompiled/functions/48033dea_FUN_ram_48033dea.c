/* Firmware entry: 0x48033dea */

char FUN_ram_48033dea(int param_1,uint param_2,uint param_3,undefined4 *param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_3 - 1 & 0xff) < 2) &&
      (((param_5 == 0 || (*(code **)(param_5 + 4) == (code *)0x0)) ||
       (iVar5 = (**(code **)(param_5 + 4))(),
       (uint)(iVar5 - *(int *)(param_5 + 8)) < *(uint *)(param_5 + 0xc))))) &&
     ((cVar1 = *(char *)(param_1 + 0x18c67), cVar1 != '\0' &&
      (fence(), *(char *)(param_1 + 0x18c6b) != '\0')))) {
    if (*(byte *)(param_1 + 0x2c) == param_2) {
      iVar5 = 0;
    }
    else if (*(byte *)(param_1 + 0x35a4) == param_2) {
      iVar5 = 1;
    }
    else {
      if (*(byte *)(param_1 + 0x6b1c) != param_2) {
        return '\0';
      }
      iVar5 = 2;
    }
    iVar14 = param_1 + iVar5 * 0x3578;
    if (*(int *)(iVar14 + 0x108) != 0) {
      iVar13 = param_1 + iVar5 * 0x3578 + 0x88c;
      FUN_ram_4ff3ec14(iVar13,0xffffffff);
      if (*(char *)(iVar14 + 0x89b) == '\0') {
        cVar4 = '\0';
        if (*(char *)(iVar14 + 0x89a) == '\0') {
          iVar7 = **(int **)(iVar14 + 0x108);
          if (iVar7 == 0) {
            iVar14 = (*(int **)(iVar14 + 0x108))[1];
            if (iVar14 == 0) goto LAB_ram_48033fd0;
            iVar7 = iVar14 + param_3;
            bVar2 = *(byte *)(iVar7 + 0x128);
            uVar6 = (uint)bVar2;
            if (uVar6 == 0xff) goto LAB_ram_48033fd0;
            puVar9 = (undefined4 *)(uVar6 * 0x24 + iVar14);
            uVar18 = puVar9[1];
            uVar17 = puVar9[2];
            uVar16 = puVar9[3];
            uVar15 = puVar9[4];
            uVar3 = puVar9[5];
            uVar12 = puVar9[6];
            uVar11 = puVar9[7];
            uVar10 = puVar9[8];
            *param_4 = *puVar9;
            param_4[1] = uVar18;
            param_4[2] = uVar17;
            param_4[3] = uVar16;
            param_4[4] = uVar15;
            param_4[5] = uVar3;
            param_4[6] = uVar12;
            param_4[7] = uVar11;
            param_4[8] = uVar10;
            cVar4 = *(char *)(iVar14 + uVar6 + 0x120);
            *(char *)(iVar7 + 0x128) = cVar4;
            if (cVar4 == -1) {
              *(undefined1 *)(iVar7 + 0x130) = 0xff;
              *(byte *)(iVar14 + 0x139) = ~(byte)(1 << (param_3 & 0x1f)) & *(byte *)(iVar14 + 0x139)
              ;
            }
            *(undefined1 *)(iVar14 + uVar6 + 0x120) = *(undefined1 *)(iVar14 + 0x138);
            *(byte *)(iVar14 + 0x138) = bVar2;
            *(char *)(iVar14 + 0x13a) = *(char *)(iVar14 + 0x13a) + -1;
          }
          else {
            iVar14 = iVar7 + param_3;
            bVar2 = *(byte *)(iVar14 + 0x940);
            uVar6 = (uint)bVar2;
            if (uVar6 == 0xff) goto LAB_ram_48033fd0;
            puVar9 = (undefined4 *)(uVar6 * 0x24 + iVar7);
            uVar18 = puVar9[1];
            uVar17 = puVar9[2];
            uVar16 = puVar9[3];
            uVar15 = puVar9[4];
            uVar3 = puVar9[5];
            uVar12 = puVar9[6];
            uVar11 = puVar9[7];
            uVar10 = puVar9[8];
            *param_4 = *puVar9;
            param_4[8] = uVar10;
            param_4[1] = uVar18;
            param_4[2] = uVar17;
            param_4[3] = uVar16;
            param_4[4] = uVar15;
            param_4[5] = uVar3;
            param_4[6] = uVar12;
            param_4[7] = uVar11;
            cVar4 = *(char *)(iVar7 + uVar6 + 0x900);
            *(char *)(iVar14 + 0x940) = cVar4;
            if (cVar4 == -1) {
              *(undefined1 *)(iVar14 + 0x948) = 0xff;
              *(byte *)(iVar7 + 0x951) = ~(byte)(1 << (param_3 & 0x1f)) & *(byte *)(iVar7 + 0x951);
            }
            *(undefined1 *)(iVar7 + uVar6 + 0x900) = *(undefined1 *)(iVar7 + 0x950);
            *(byte *)(iVar7 + 0x950) = bVar2;
            *(char *)(iVar7 + 0x952) = *(char *)(iVar7 + 0x952) + -1;
          }
          uVar3 = FUN_ram_4ff21a0a();
          *(undefined1 *)((int)param_4 + 0xf) = 1;
          param_4[5] = uVar3;
          piVar8 = *(int **)(iVar5 * 0x3578 + param_1 + 0x108);
          iVar14 = *piVar8;
          if (iVar14 == 0) {
            iVar14 = piVar8[1];
            uVar6 = 0;
            if (iVar14 != 0) {
              uVar6 = (uint)*(byte *)(iVar14 + 0x13a);
            }
          }
          else {
            uVar6 = (uint)*(byte *)(iVar14 + 0x952);
          }
          *(uint *)(param_1 + iVar5 * 0x3578 + 0x2fe0) = uVar6;
          cVar4 = cVar1;
        }
      }
      else {
        cVar4 = '\0';
      }
LAB_ram_48033fd0:
      FUN_ram_4ff3ee10(iVar13);
      return cVar4;
    }
  }
  return '\0';
}


