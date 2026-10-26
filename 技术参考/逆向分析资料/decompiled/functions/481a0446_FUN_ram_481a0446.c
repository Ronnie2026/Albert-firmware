/* Firmware entry: 0x481a0446 */

int FUN_ram_481a0446(int param_1,byte *param_2,int *param_3,uint *param_4,int param_5,int *param_6,
                    undefined4 *param_7)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar19 = *param_4;
  pbVar3 = (byte *)*param_7;
  iVar13 = param_1;
  if ((byte *)*param_7 == (byte *)0x0) {
    pbVar3 = param_2;
  }
  do {
    iVar12 = iVar13;
    if ((*pbVar3 == 0) || (iVar12 = param_1, param_1 < (int)uVar19)) {
LAB_ram_481a0574:
      piVar7 = (int *)(uVar19 * 0x10 + param_5);
      uVar6 = uVar19;
      while ((int)uVar6 <= iVar12) {
        piVar16 = param_6 + uVar6;
        piVar10 = (int *)*param_3;
        uVar6 = uVar6 + 1;
        switch(*piVar16) {
        default:
          *param_3 = (int)(piVar10 + 1);
          *piVar7 = *piVar10;
          break;
        case 2:
        case 4:
          piVar10 = (int *)((int)piVar10 + 7U & 0xfffffff8);
          *param_3 = (int)(piVar10 + 2);
          iVar13 = piVar10[1];
          *piVar7 = *piVar10;
          piVar7[1] = iVar13;
          break;
        case 5:
          *param_3 = (int)(piVar10 + 1);
          piVar10 = (int *)*piVar10;
          iVar13 = piVar10[1];
          iVar21 = piVar10[2];
          iVar5 = piVar10[3];
          *piVar7 = *piVar10;
          piVar7[1] = iVar13;
          piVar7[2] = iVar21;
          piVar7[3] = iVar5;
        }
        piVar7 = piVar7 + 4;
      }
      iVar13 = 0;
      if ((int)uVar19 <= iVar12 + 1) {
        iVar13 = (iVar12 - uVar19) + 1;
      }
      *param_4 = iVar13 + uVar19;
      *param_7 = pbVar3;
      return param_5 + param_1 * 0x10;
    }
    do {
      bVar1 = *pbVar3;
      iVar12 = iVar13;
      if (bVar1 == 0) goto LAB_ram_481a0574;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0x25);
    uVar6 = 0;
    iVar21 = 0;
    iVar12 = -1;
    uVar22 = 0;
    bVar2 = false;
    uVar20 = 0;
    do {
      iVar5 = uVar20 * 9;
      uVar17 = (uint)*pbVar3;
      pbVar4 = pbVar3 + 1;
      uVar20 = (uint)(byte)(&DAT_ram_4823b7e8)[(uint)(byte)(&DAT_ram_4823b854)[uVar17] + iVar5];
      switch((&DAT_ram_4823b77c)[(uint)(byte)(&DAT_ram_4823b854)[uVar17] + iVar5] + -1) {
      case '\0':
        iVar21 = uVar17 - 0x30;
        for (; (*pbVar4 != 0 && (uVar17 = *pbVar4 - 0x30, uVar17 < 10)); pbVar4 = pbVar4 + 1) {
          iVar21 = iVar21 * 10 + uVar17;
        }
        break;
      case '\x01':
        for (; (byte)(*pbVar4 - 0x30) < 10; pbVar4 = pbVar4 + 1) {
        }
        break;
      case '\x02':
        if (uVar17 == 0x6a) {
LAB_ram_481a05c6:
          uVar22 = 0x20;
        }
        else if (uVar17 < 0x6b) {
          if (uVar17 != 0x4c) {
            uVar8 = 0x68;
LAB_ram_481a0526:
            if (uVar17 != uVar8) {
LAB_ram_481a052a:
              if (pbVar3[1] == 0x6c) {
                uVar22 = 0x20;
                pbVar4 = pbVar3 + 2;
              }
              else {
                bVar2 = true;
              }
            }
          }
        }
        else {
          if (uVar17 == 0x71) goto LAB_ram_481a05c6;
          if (uVar17 < 0x71) goto LAB_ram_481a052a;
          if (uVar17 != 0x74) {
            uVar8 = 0x7a;
            goto LAB_ram_481a0526;
          }
        }
        break;
      case '\x03':
        uVar8 = uVar19 & 0x1f;
        if (uVar17 == 0x61) {
switchD_ram_481a0614_caseD_0:
          uVar6 = 4;
          if (iVar12 == -1) {
switchD_ram_481a06d4_caseD_4:
            uVar19 = uVar8 + 1;
            puVar14 = (undefined4 *)(*param_3 + 7U & 0xfffffff8);
            *param_3 = (int)(puVar14 + 2);
            uVar15 = puVar14[1];
            puVar11 = (undefined4 *)(uVar8 * 0x10 + param_5);
            *puVar11 = *puVar14;
            puVar11[1] = uVar15;
            uVar6 = 4;
            iVar12 = -1;
          }
          else {
LAB_ram_481a05f6:
            param_6[iVar12] = uVar6;
            uVar19 = uVar8;
          }
        }
        else {
          if (uVar17 < 0x62) {
            switch(uVar17 - 0x41 & 0xff) {
            case 0:
            case 4:
            case 5:
            case 6:
              goto switchD_ram_481a0614_caseD_0;
            case 2:
switchD_ram_481a0614_caseD_2:
              uVar6 = 6;
              if (iVar12 != -1) goto LAB_ram_481a05f6;
              goto switchD_ram_481a06d4_caseD_6;
            case 3:
            case 0xe:
            case 0x14:
switchD_ram_481a0614_caseD_3:
              uVar6 = 1;
              if (iVar12 != -1) goto LAB_ram_481a05f6;
              goto switchD_ram_481a06d4_caseD_1;
            case 0x12:
switchD_ram_481a0614_caseD_12:
              uVar6 = 3;
              if (iVar12 != -1) goto LAB_ram_481a05f6;
              goto switchD_ram_481a06d4_caseD_3;
            case 0x17:
switchD_ram_481a0614_caseD_17:
              if (bVar2) goto switchD_ram_481a0614_caseD_3;
              uVar6 = uVar22 >> 4;
            }
switchD_ram_481a0614_caseD_1:
            if (iVar12 != -1) goto LAB_ram_481a05f6;
            puVar11 = (undefined4 *)*param_3;
            uVar19 = uVar8 + 1;
            if (uVar6 - 1 < 6) {
              switch(uVar6) {
              case 1:
switchD_ram_481a06d4_caseD_1:
                uVar19 = uVar8 + 1;
                uVar15 = *(undefined4 *)*param_3;
                *param_3 = (int)((undefined4 *)*param_3 + 1);
                *(undefined4 *)(uVar8 * 0x10 + param_5) = uVar15;
                uVar6 = 1;
                iVar12 = -1;
                break;
              case 2:
                puVar11 = (undefined4 *)((int)puVar11 + 7U & 0xfffffff8);
                *param_3 = (int)(puVar11 + 2);
                uVar15 = puVar11[1];
                puVar14 = (undefined4 *)(param_5 + uVar8 * 0x10);
                *puVar14 = *puVar11;
                puVar14[1] = uVar15;
                break;
              case 3:
switchD_ram_481a06d4_caseD_3:
                puVar11 = (undefined4 *)*param_3;
                uVar19 = uVar8 + 1;
                *param_3 = (int)(puVar11 + 1);
                uVar6 = 3;
                *(undefined4 *)(uVar8 * 0x10 + param_5) = *puVar11;
                iVar12 = -1;
                break;
              case 4:
                goto switchD_ram_481a06d4_caseD_4;
              case 5:
                *param_3 = (int)(puVar11 + 1);
                puVar11 = (undefined4 *)*puVar11;
                uVar18 = puVar11[1];
                uVar15 = puVar11[2];
                uVar9 = puVar11[3];
                puVar14 = (undefined4 *)(param_5 + uVar8 * 0x10);
                *puVar14 = *puVar11;
                puVar14[1] = uVar18;
                puVar14[2] = uVar15;
                puVar14[3] = uVar9;
                break;
              case 6:
switchD_ram_481a06d4_caseD_6:
                uVar19 = uVar8 + 1;
                uVar15 = *(undefined4 *)*param_3;
                *param_3 = (int)((undefined4 *)*param_3 + 1);
                *(undefined4 *)(uVar8 * 0x10 + param_5) = uVar15;
                uVar6 = 6;
                iVar12 = -1;
              }
              break;
            }
          }
          else {
            if (uVar17 != 99) {
              if ((uVar17 - 100 & 0xff) < 0x15) {
                uVar19 = 1 << (uVar17 - 100 & 0x1f);
                if ((uVar19 & 0x120821) != 0) goto switchD_ram_481a0614_caseD_17;
                if ((uVar19 >> 10 & 0x25) != 0) goto switchD_ram_481a0614_caseD_12;
                if ((uVar19 & 0xe) != 0) goto switchD_ram_481a0614_caseD_0;
              }
              goto switchD_ram_481a0614_caseD_1;
            }
            if (bVar2) goto switchD_ram_481a0614_caseD_2;
            uVar6 = 0;
            if (iVar12 != -1) goto LAB_ram_481a05f6;
          }
          uVar19 = uVar8 + 1;
          uVar15 = *(undefined4 *)*param_3;
          *param_3 = (int)((undefined4 *)*param_3 + 1);
          *(undefined4 *)(uVar8 * 0x10 + param_5) = uVar15;
          uVar6 = 0;
          iVar12 = -1;
        }
        break;
      case '\x04':
        pbVar3 = pbVar4;
      case '\x05':
        pbVar4 = pbVar3;
        puVar11 = (undefined4 *)*param_3;
        *param_3 = (int)(puVar11 + 1);
        *(undefined4 *)(uVar19 * 0x10 + param_5) = *puVar11;
        uVar19 = uVar19 + 1;
        break;
      case '\x06':
        if (*param_6 == -1) {
          memset(param_6,0,0x80);
        }
        iVar12 = iVar21 + -1;
        if (iVar13 < iVar12) {
          iVar13 = iVar12;
        }
        break;
      case '\a':
        if (*param_6 == -1) {
          memset(param_6,0,0x80);
        }
        iVar21 = iVar21 + -1;
        param_6[iVar21] = 0;
        if (iVar13 < iVar21) {
          iVar13 = iVar21;
        }
      }
      pbVar3 = pbVar4;
    } while (uVar20 != 0xb);
  } while( true );
}


