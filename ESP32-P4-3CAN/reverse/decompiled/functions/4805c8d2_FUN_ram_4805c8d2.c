/* Firmware entry: 0x4805c8d2 */

int * FUN_ram_4805c8d2(int param_1,int param_2,undefined1 param_3,uint param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  int *piVar12;
  int iVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar10 = *(int **)(param_1 + 0x9d0);
  if (piVar10 != (int *)0x0) {
    if (*(int *)(param_2 + 0x10) == 0x3fd) {
      cVar1 = *(char *)(param_2 + 0x51);
      bVar5 = *(byte *)(param_2 + 0x15) & 7;
    }
    else {
      bVar5 = 0xff;
      if (*(int *)(param_2 + 0x10) == 0x3c2) {
        cVar1 = *(char *)(param_2 + 0x51);
        bVar5 = *(byte *)(param_2 + 0x15) & 3;
      }
      else {
        cVar1 = *(char *)(param_2 + 0x51);
      }
    }
    if (cVar1 == '\0') {
      piVar7 = piVar10;
      do {
        piVar12 = piVar7 + 0x1a;
        if (*piVar7 == 0) goto LAB_ram_4805c916;
        piVar7 = piVar12;
      } while (piVar12 != piVar10 + 0x11e0);
    }
    else {
      piVar7 = piVar10 + (*(byte *)(param_2 + 0x58) + 0xb0) * 0x1a;
      if (*piVar7 == 0) {
LAB_ram_4805c916:
        *(undefined2 *)(piVar7 + 6) = 0xff00;
        *(undefined1 *)(piVar7 + 10) = 0;
        piVar7[1] = 0;
        *piVar7 = *(int *)(param_2 + 0x40);
        iVar9 = *(int *)(param_2 + 0x10);
        piVar7[8] = 0;
        piVar7[9] = 0;
        piVar7[2] = iVar9;
        uVar2 = *(undefined1 *)(param_2 + 0x1d);
        *(byte *)((int)piVar7 + 0xd) = bVar5;
        *(undefined1 *)(piVar7 + 3) = uVar2;
        uVar2 = *(undefined1 *)(param_2 + 0x34);
        iVar9 = *(int *)(param_2 + 0x4c);
        *(bool *)(piVar7 + 4) = *(char *)(param_2 + 0x38) == '\0';
        uVar3 = *(undefined1 *)(param_2 + 0x51);
        *(undefined1 *)((int)piVar7 + 0xe) = uVar2;
        *(undefined1 *)((int)piVar7 + 0xf) = param_3;
        pbVar11 = (byte *)(param_1 + 0x9d8);
        *(undefined1 *)(piVar7 + 0x18) = uVar3;
        piVar7[0x19] = iVar9;
        uVar8 = 0;
        while ((param_4 >> (uVar8 & 0x1f) & 1) == 0) {
          uVar8 = uVar8 + 1;
          pbVar11 = pbVar11 + 0x28;
          if (uVar8 == 8) {
            return piVar7;
          }
        }
        cVar1 = (char)piVar7[10];
        do {
          if (cVar1 == '\x03') {
LAB_ram_4805ca44:
            pbVar11 = (byte *)(piVar7 + 0xc);
            bVar5 = 0;
            do {
              uVar8 = (uint)*pbVar11;
              iVar9 = *(int *)(pbVar11 + 8);
              iVar6 = *(int *)(pbVar11 + 0xc);
              if (((uVar8 < 8) && (iVar9 != 0 || iVar6 != 0)) &&
                 ((iVar13 = param_1 + uVar8 * 0x120, *(char *)(iVar13 + 0x70d6) != '\0' &&
                  (((*(int *)(iVar13 + 0x70c8) == iVar9 && (*(int *)(iVar13 + 0x70cc) == iVar6)) &&
                   (*(short *)(iVar13 + 0x70d4) != 0)))))) {
                *(short *)(iVar13 + 0x70d4) = *(short *)(iVar13 + 0x70d4) + -1;
              }
              iVar13 = uVar8 * 0x28 + param_1;
              if (((*(byte *)(iVar13 + 0x9d8) == uVar8) && (*(int *)(iVar13 + 0x9e0) == iVar9)) &&
                 ((*(int *)(iVar13 + 0x9e4) == iVar6 && (*(short *)(iVar13 + 0x9f8) != 0)))) {
                *(short *)(iVar13 + 0x9f8) = *(short *)(iVar13 + 0x9f8) + -1;
              }
              bVar5 = bVar5 + 1;
              pbVar11 = pbVar11 + 0x10;
            } while (bVar5 < *(byte *)(piVar7 + 10));
LAB_ram_4805cb0e:
            piVar7[1] = 0;
            piVar7[8] = 0;
            piVar7[9] = 0;
            *(undefined1 *)(piVar7 + 10) = 0;
            *(undefined1 *)(piVar7 + 0x18) = 0;
            piVar7[0x19] = 0;
            *piVar7 = 0;
            *(undefined2 *)(piVar7 + 6) = 0xff00;
            return (int *)0x0;
          }
          if ((((7 < *pbVar11) || (*(int *)(pbVar11 + 8) == 0 && *(int *)(pbVar11 + 0xc) == 0)) ||
              (iVar9 = (uint)*pbVar11 * 0x120 + param_1, *(char *)(iVar9 + 0x70d6) == '\0')) ||
             (((*(int *)(iVar9 + 0x70c8) != *(int *)(pbVar11 + 8) ||
               (*(int *)(iVar9 + 0x70cc) != *(int *)(pbVar11 + 0xc))) ||
              ((*(char *)(iVar9 + 0x70d8) != '\0' || (*(short *)(iVar9 + 0x70d4) == -1)))))) {
            if (cVar1 == '\0') goto LAB_ram_4805cb0e;
            goto LAB_ram_4805ca44;
          }
          *(short *)(iVar9 + 0x70d4) = *(short *)(iVar9 + 0x70d4) + 1;
          bVar5 = *(byte *)(piVar7 + 10);
          *(byte *)(piVar7 + 10) = bVar5 + 1;
          sVar4 = *(short *)(pbVar11 + 0x20);
          iVar6 = *(int *)(pbVar11 + 4);
          iVar9 = *(int *)(pbVar11 + 8);
          iVar13 = *(int *)(pbVar11 + 0xc);
          piVar7[(uint)bVar5 * 4 + 0xc] = *(int *)pbVar11;
          piVar7[(uint)bVar5 * 4 + 0xd] = iVar6;
          piVar7[(uint)bVar5 * 4 + 0xe] = iVar9;
          piVar7[(uint)bVar5 * 4 + 0xf] = iVar13;
          *(short *)(pbVar11 + 0x20) = sVar4 + 1;
          do {
            uVar8 = uVar8 + 1;
            pbVar11 = pbVar11 + 0x28;
            if (uVar8 == 8) {
              return piVar7;
            }
          } while ((param_4 >> (uVar8 & 0x1f) & 1) == 0);
          cVar1 = (char)piVar7[10];
        } while( true );
      }
    }
  }
  return (int *)0x0;
}


