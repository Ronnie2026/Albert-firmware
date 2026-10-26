/* Firmware entry: 0x48153b18 */

int FUN_ram_48153b18(int *param_1,char *param_2,uint *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uStack_48;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar14 = *param_1;
  uVar10 = *param_3;
  memset((void *)(iVar14 + 0x12b8),0,0x14);
  pcVar13 = param_2;
  if (uVar10 == 0) {
    iVar15 = 2;
  }
  else {
    iVar15 = 2;
    pcVar11 = param_2;
LAB_ram_48153b6a:
    do {
      if ((((int)uVar10 < 2) || (uVar9 = (uint)(byte)pcVar11[1], uVar9 < 2)) ||
         ((int)uVar10 < (int)uVar9)) {
        uVar9 = uVar10 & 0xffff;
        uVar10 = 0;
        uVar12 = uVar9;
        pcVar16 = pcVar11;
LAB_ram_48153b8a:
        if (iVar15 != 4) {
          iVar15 = 4;
          pcVar13 = param_2;
        }
      }
      else {
        uVar10 = uVar10 - uVar9;
        pcVar16 = pcVar11 + uVar9;
        uVar12 = uVar9;
        if (((*pcVar11 != '\x01') || ((*(byte *)(iVar14 + 0x12a4) & 1) == 0)) || (uVar9 != 10))
        goto LAB_ram_48153b8a;
        uStack_48 = *(uint *)(pcVar11 + 2);
        uVar8 = *(uint *)(pcVar11 + 6);
        uStack_44 = uStack_48 | uVar8;
        if (uStack_44 != 0) {
          if (*(uint *)(iVar14 + 0x1288) != 0 || *(uint *)(iVar14 + 0x128c) != 0) {
            if (uStack_48 == *(uint *)(iVar14 + 0x1288)) {
              if (*(uint *)(iVar14 + 0x128c) != uVar8) {
LAB_ram_48153e96:
                if (*(int *)(iVar14 + 0x129c) == 0 && *(int *)(iVar14 + 0x12a0) == 0)
                goto LAB_ram_48153e12;
                if (uStack_44 == 0) goto LAB_ram_48153d50;
              }
              goto LAB_ram_48153cd0;
            }
            if (*(int *)(iVar14 + 0x12a0) != 0 || *(int *)(iVar14 + 0x129c) != 0)
            goto LAB_ram_48153cd0;
LAB_ram_48153e12:
            uStack_44 = *(uint *)(iVar14 + 0x128c);
            uStack_48 = *(uint *)(iVar14 + 0x1288);
            *(uint *)(iVar14 + 0x12a0) = uStack_44;
            *(uint *)(iVar14 + 0x129c) = uStack_48;
            pcVar11[3] = (char)(uStack_48 >> 8);
            pcVar11[6] = (char)uStack_44;
            pcVar11[4] = (char)(uStack_48 >> 0x10);
            pcVar11[2] = (char)uStack_48;
            pcVar11[7] = (char)(uStack_44 >> 8);
            pcVar11[8] = (char)(uStack_44 >> 0x10);
            pcVar11[9] = (char)(uStack_44 >> 0x18);
            pcVar11[5] = (char)(uStack_48 >> 0x18);
            goto LAB_ram_48153ddc;
          }
LAB_ram_48153cd0:
          if ((uStack_48 == *(uint *)(iVar14 + 0x1294)) && (*(uint *)(iVar14 + 0x1298) == uVar8)) {
LAB_ram_48153e6e:
            uStack_44 = uVar8;
            uVar12 = uStack_48;
            if (*(int *)(iVar14 + 0x129c) == 0 && *(int *)(iVar14 + 0x12a0) == 0) {
              uVar12 = *(uint *)(iVar14 + 0x1288);
              uStack_44 = *(uint *)(iVar14 + 0x128c);
              uStack_48 = uVar12;
            }
            goto LAB_ram_48153d82;
          }
          *(byte *)(iVar14 + 0x12b8) = *(byte *)(iVar14 + 0x12b8) | 1;
          *(uint *)(iVar14 + 0x12c4) = uStack_48;
          *(uint *)(iVar14 + 0x12c8) = uVar8;
          uVar12 = 10;
          if (iVar15 == 2) goto LAB_ram_48153b92;
LAB_ram_48153d00:
          pcVar11 = pcVar16;
          if (uVar10 == 0) break;
          goto LAB_ram_48153b6a;
        }
        if (*(int *)(iVar14 + 0x1294) == 0 && *(int *)(iVar14 + 0x1298) == 0) goto LAB_ram_48153b8a;
        if (*(int *)(iVar14 + 0x1288) == 0 && *(int *)(iVar14 + 0x128c) == 0) goto LAB_ram_48153e6e;
        if (*(int *)(iVar14 + 0x1288) == 0) {
          if (*(int *)(iVar14 + 0x128c) != 0) goto LAB_ram_48153e96;
          goto LAB_ram_48153e6e;
        }
        if (*(int *)(iVar14 + 0x12a0) == 0 && *(int *)(iVar14 + 0x129c) == 0) goto LAB_ram_48153e12;
LAB_ram_48153d50:
        uVar12 = 0;
LAB_ram_48153d82:
        while ((uStack_44 == 0 && uVar12 == 0 ||
               ((*(uint *)(iVar14 + 0x1294) == uVar12 && (*(uint *)(iVar14 + 0x1298) == uStack_44)))
               )) {
          uStack_48 = FUN_ram_48155c22();
          uStack_44 = FUN_ram_48155c22();
          uStack_48 = uStack_48 & 0xfffffffd;
          uVar12 = uStack_48;
        }
        *(uint *)(iVar14 + 0x12a0) = uStack_44;
        *(uint *)(iVar14 + 0x129c) = uStack_48;
        pcVar11[6] = (char)uStack_44;
        pcVar11[3] = uStack_48._1_1_;
        pcVar11[4] = uStack_48._2_1_;
        pcVar11[2] = (char)uStack_48;
        pcVar11[5] = uStack_48._3_1_;
        pcVar11[7] = (char)(uStack_44 >> 8);
        pcVar11[8] = (char)(uStack_44 >> 0x10);
        pcVar11[9] = (char)(uStack_44 >> 0x18);
LAB_ram_48153ddc:
        *(uint *)(iVar14 + 0x12c4) = uStack_48;
        *(byte *)(iVar14 + 0x12b8) = *(byte *)(iVar14 + 0x12b8) | 1;
        *(uint *)(iVar14 + 0x12c8) = uStack_44;
        if (param_4 != 0) {
          uVar12 = 10;
          goto LAB_ram_48153b8a;
        }
        if (iVar15 == 4) goto LAB_ram_48153d00;
        if (iVar15 == 2) {
          pcVar13 = param_2;
        }
        uVar12 = 10;
        iVar15 = 3;
      }
LAB_ram_48153b92:
      if (pcVar13 != pcVar11) {
        FUN_ram_4ff45158(pcVar13,pcVar11,uVar12);
      }
      pcVar13 = pcVar13 + uVar9;
      pcVar11 = pcVar16;
    } while (uVar10 != 0);
    if (iVar15 == 4) goto LAB_ram_48153c2e;
  }
  if ((((*(byte *)(iVar14 + 0x12b8) & 1) == 0) && ((*(byte *)(iVar14 + 0x127c) & 2) != 0)) &&
     (param_4 == 0)) {
    pcVar11 = pcVar13;
    if (iVar15 == 2) {
      *(byte *)(iVar14 + 0x127c) = *(byte *)(iVar14 + 0x127c) & 0xfd;
      pcVar11 = param_2;
    }
    *pcVar11 = '\x01';
    pcVar11[1] = '\n';
    cVar1 = *(char *)(iVar14 + 0x1289);
    cVar2 = *(char *)(iVar14 + 0x128a);
    cVar3 = *(char *)(iVar14 + 0x128b);
    cVar4 = *(char *)(iVar14 + 0x128c);
    cVar5 = *(char *)(iVar14 + 0x128d);
    cVar6 = *(char *)(iVar14 + 0x128e);
    cVar7 = *(char *)(iVar14 + 0x128f);
    pcVar13 = pcVar11 + 10;
    pcVar11[2] = *(char *)(iVar14 + 0x1288);
    pcVar11[3] = cVar1;
    pcVar11[4] = cVar2;
    pcVar11[5] = cVar3;
    pcVar11[6] = cVar4;
    pcVar11[7] = cVar5;
    pcVar11[8] = cVar6;
    pcVar11[9] = cVar7;
    iVar15 = 3;
  }
LAB_ram_48153c2e:
  *param_3 = (int)pcVar13 - (int)param_2;
  return iVar15;
}


