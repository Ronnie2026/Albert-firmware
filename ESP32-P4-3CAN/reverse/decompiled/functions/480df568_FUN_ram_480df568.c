/* Firmware entry: 0x480df568 */

int FUN_ram_480df568(int param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_d4 [27];
  char cStack_66;
  char cStack_65;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  puVar15 = (undefined4 *)(param_1 + 0xb38);
  puVar11 = local_d4;
  do {
    uVar6 = puVar15[1];
    uVar7 = puVar15[2];
    uVar8 = puVar15[3];
    *puVar11 = *puVar15;
    puVar11[1] = uVar6;
    puVar11[2] = uVar7;
    puVar11[3] = uVar8;
    puVar15 = puVar15 + 4;
    puVar11 = puVar11 + 4;
  } while (puVar15 != (undefined4 *)(param_1 + 0xbd8));
  *puVar11 = *puVar15;
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  if ((cStack_66 != '\0') && (param_2 < 10)) {
    FUN_ram_4ff3ec14(param_1 + 0x8520,0xffffffff);
    iVar12 = param_2 * 10 + param_1;
    cVar14 = *(char *)(iVar12 + 0x9154);
    uVar2 = *(ushort *)(iVar12 + 0x914c);
    uVar3 = *(ushort *)(iVar12 + 0x914e);
    uVar4 = *(ushort *)(iVar12 + 0x9150);
    uVar5 = *(ushort *)(iVar12 + 0x9152);
    cVar1 = *(char *)(iVar12 + 0x9155);
    FUN_ram_4ff3ee10(param_1 + 0x8520);
    if (((cVar14 == 'Z') && (((cVar1 == '\x02' && (uVar2 != 0xfff)) && (uVar3 != 0xfff)))) &&
       ((uVar4 != 0xfff && (uVar5 != 0xfff)))) {
      uVar18 = param_2 < 5 ^ 1;
      iVar12 = FUN_ram_48025ba6();
      if ((*(char *)(param_1 + uVar18 + 0x9140) != '\0') &&
         (((iVar16 = *(int *)((uVar18 + 0x324) * 4 + param_1 + 0x84b4), iVar16 != 0 &&
           ((uint)(iVar12 - iVar16) < 0x5dd)) &&
          (iVar12 = FUN_ram_48025ba6(), *(int *)(param_1 + 0x91d8) == 0x4f3)))) {
        cVar14 = '\x02';
        if (cStack_65 == '\x01') {
          cVar14 = '\x01';
        }
        if ((((*(char *)(param_1 + 0x91e5) == cVar14) && (*(int *)(param_1 + 0x91fc) != 0)) &&
            ((uint)(iVar12 - *(int *)(param_1 + 0x91fc)) < 0x1f5)) &&
           (iVar12 = FUN_ram_4805c396(param_1,0,*(char *)(param_1 + 0x91e5),0xd), iVar12 != 0)) {
          FUN_ram_480df148(param_1 + 0x84a8,1);
          iVar16 = FUN_ram_48025ba6();
          memset((void *)(param_1 + 0x91b0),0,0x21);
          *(int *)(param_1 + 0x91c8) = iVar16 + -0x32;
          *(char *)(param_1 + 0x91b1) = (char)uVar18;
          *(ushort *)(param_1 + 0x91b2) = uVar2;
          *(ushort *)(param_1 + 0x91b4) = uVar3;
          *(ushort *)(param_1 + 0x91b6) = uVar4;
          *(ushort *)(param_1 + 0x91b8) = uVar5;
          *(undefined2 *)(param_1 + 0x91ba) = 0x25a;
          *(undefined1 *)(param_1 + 0x91b0) = 1;
          iVar13 = param_1 + 0x91bc;
          iVar16 = 0;
          do {
            if (iVar16 == 2) {
              uVar17 = (uint)*(ushort *)((uVar18 + 0x1224) * 8 + param_1 + 0x14);
              uVar10 = (uint)uVar4;
            }
            else {
              if (iVar16 == 3) {
                uVar18 = (uint)uVar5 - (uint)*(ushort *)((uVar18 + 0x1224) * 8 + param_1 + 0x16);
                *(bool *)iVar13 = 5 < (int)(((int)uVar18 >> 0x1f ^ uVar18) - ((int)uVar18 >> 0x1f));
                if ((int)uVar18 < 1) {
                  *(char *)(iVar13 + 4) = -(uVar18 != 0);
                }
                else {
                  *(undefined1 *)(param_1 + 0x91c3) = 1;
                }
                *(char *)(param_1 + 0x91d4) = (char)param_2;
                *(undefined2 *)(param_1 + 0x9278) = 0;
                *(int *)(param_1 + 0x9274) = *(int *)(param_1 + 0x9274) + 1;
                return iVar12;
              }
              iVar9 = (uVar18 + 0x1224) * 8 + param_1;
              if (iVar16 == 1) {
                uVar17 = (uint)*(ushort *)(iVar9 + 0x12);
                uVar10 = (uint)uVar3;
              }
              else {
                uVar17 = (uint)*(ushort *)(iVar9 + 0x10);
                uVar10 = (uint)uVar2;
              }
            }
            uVar10 = uVar10 - uVar17;
            *(bool *)iVar13 = 5 < (int)(((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f));
            if ((int)uVar10 < 1) {
              *(char *)(iVar13 + 4) = -(uVar10 != 0);
              iVar16 = iVar16 + 1;
              iVar13 = iVar13 + 1;
            }
            else {
              *(undefined1 *)(iVar13 + 4) = 1;
              iVar16 = iVar16 + 1;
              iVar13 = iVar13 + 1;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}


