/* Firmware entry: 0x481493de */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_ram_481493de(int *param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  int aiStack_44 [4];
  
  uVar8 = DAT_ram_481d9823;
  uVar7 = DAT_ram_481d9822;
  uVar6 = DAT_ram_481d9821;
  uVar5 = DAT_ram_481d9820;
  uVar4 = DAT_ram_481d981f;
  uVar3 = DAT_ram_481d981d;
  uVar2 = DAT_ram_481d981c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar11 = *param_1;
  if (((iVar11 == 0) && (param_1[1] == 0)) && (param_1[2] == -0x10000)) {
    if (param_3 < 8) {
      return (undefined1 *)0x0;
    }
    param_2[2] = DAT_ram_481d981e;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[5] = uVar6;
    param_2[6] = uVar7;
    param_2[7] = uVar8;
    aiStack_44[0] = param_1[3];
    puVar14 = (undefined1 *)FUN_ram_4814797e(aiStack_44,param_2 + 7,param_3 + -7);
    if (param_2 + 7 == puVar14) {
      return param_2;
    }
    return (undefined1 *)0x0;
  }
  iVar9 = 0;
  iVar16 = 0;
  uVar17 = 0;
  do {
    uVar12 = FUN_ram_48137fd6(iVar11);
    if ((uVar17 & 1) == 0) {
      uVar12 = uVar12 >> 0x10;
      if (uVar12 != 0) {
        if (iVar9 == 1) {
          iVar9 = 2;
        }
        uVar19 = uVar12;
        if (uVar17 != 0) goto LAB_ram_4814945a;
        goto LAB_ram_4814946a;
      }
      if (iVar9 == 0) {
        uVar12 = uVar17 + 1;
        sVar10 = FUN_ram_48137fd6(param_1[uVar12 >> 1]);
        if (sVar10 == 0) {
          puVar14 = param_2 + iVar16;
          iVar16 = iVar16 + 1;
          *puVar14 = 0x3a;
          if (param_3 <= iVar16) {
            return (undefined1 *)0x0;
          }
          iVar9 = 1;
        }
        else {
          puVar14 = param_2 + iVar16;
          if (uVar17 != 0) {
            iVar16 = iVar16 + 1;
            *puVar14 = 0x3a;
            if (param_3 <= iVar16) {
              return (undefined1 *)0x0;
            }
            bVar18 = 0;
            goto LAB_ram_48149442;
          }
          iVar16 = iVar16 + 1;
          *puVar14 = 0x30;
          if (param_3 <= iVar16) {
            return (undefined1 *)0x0;
          }
          uVar12 = 1;
        }
      }
      else {
        if (iVar9 != 1) {
          if (uVar17 != 0) {
            puVar14 = param_2 + iVar16;
            iVar16 = iVar16 + 1;
            *puVar14 = 0x3a;
            if (param_3 <= iVar16) {
              return (undefined1 *)0x0;
            }
            uVar19 = 0;
            iVar9 = 2;
            goto LAB_ram_481494da;
          }
          iVar9 = 2;
          bVar18 = 0;
          goto LAB_ram_48149442;
        }
        uVar12 = uVar17 + 1;
      }
    }
    else {
      uVar19 = uVar12 & 0xffff;
      if (uVar19 == 0) {
        if (uVar17 == 7) {
          if (iVar9 == 1) {
            puVar14 = param_2 + iVar16;
            iVar16 = iVar16 + 1;
            *puVar14 = 0x3a;
            if (param_3 <= iVar16) {
              return (undefined1 *)0x0;
            }
LAB_ram_481495a8:
            param_2[iVar16] = 0;
            return param_2;
          }
          if (iVar9 != 0) {
            param_2[iVar16] = 0x3a;
            goto joined_r0x4814957e;
          }
          uVar13 = FUN_ram_48137fd6(param_1[4]);
        }
        else {
          if (iVar9 != 0) {
            if (iVar9 == 1) {
              uVar12 = uVar17 + 1;
              goto LAB_ram_48149500;
            }
            param_2[iVar16] = 0x3a;
joined_r0x4814957e:
            if (param_3 <= iVar16 + 1) {
              return (undefined1 *)0x0;
            }
            iVar16 = iVar16 + 1;
            iVar9 = 2;
            goto LAB_ram_4814953e;
          }
          uVar13 = FUN_ram_48137fd6(param_1[uVar17 + 1 >> 1]);
        }
        param_2[iVar16] = 0x3a;
        iVar16 = iVar16 + 1;
        if (uVar13 >> 0x10 != 0) {
          if (param_3 <= iVar16) {
            return (undefined1 *)0x0;
          }
          iVar9 = 0;
          goto LAB_ram_4814953e;
        }
        if (param_3 <= iVar16) {
          return (undefined1 *)0x0;
        }
        iVar9 = 1;
      }
      else {
        if (iVar9 == 1) {
          iVar9 = 2;
        }
LAB_ram_4814945a:
        param_2[iVar16] = 0x3a;
        iVar16 = iVar16 + 1;
        if (param_3 <= iVar16) {
          return (undefined1 *)0x0;
        }
LAB_ram_4814946a:
        if ((uVar12 >> 0xc & 0xf) == 0) {
LAB_ram_4814953e:
          if ((uVar12 >> 8 & 0xf) != 0) goto LAB_ram_4814950c;
          if ((uVar12 & 0xf0) != 0) goto LAB_ram_4814954c;
        }
        else {
          cVar1 = (char)(uVar19 >> 0xc);
          cVar15 = cVar1 + '7';
          if (uVar19 >> 0xc < 10) {
            cVar15 = cVar1 + '0';
          }
          param_2[iVar16] = cVar15;
          iVar16 = iVar16 + 1;
          if (param_3 <= iVar16) {
            return (undefined1 *)0x0;
          }
          if ((uVar12 >> 8 & 0xf) == 0) {
            bVar18 = (byte)(uVar19 >> 8) & 0xf;
LAB_ram_481494aa:
            cVar15 = bVar18 + 0x30;
          }
          else {
LAB_ram_4814950c:
            uVar13 = uVar19 >> 8 & 0xf;
            bVar18 = (byte)uVar13;
            cVar15 = bVar18 + 0x37;
            if (uVar13 < 10) goto LAB_ram_481494aa;
          }
          param_2[iVar16] = cVar15;
          iVar16 = iVar16 + 1;
          if (param_3 <= iVar16) {
            return (undefined1 *)0x0;
          }
          if ((uVar12 & 0xf0) == 0) {
            bVar18 = (byte)(uVar19 >> 4) & 0xf;
LAB_ram_481494c8:
            cVar15 = bVar18 + 0x30;
          }
          else {
LAB_ram_4814954c:
            uVar13 = uVar19 >> 4 & 0xf;
            bVar18 = (byte)uVar13;
            cVar15 = bVar18 + 0x37;
            if (uVar13 < 10) goto LAB_ram_481494c8;
          }
          param_2[iVar16] = cVar15;
          iVar16 = iVar16 + 1;
          if (param_3 <= iVar16) {
            return (undefined1 *)0x0;
          }
        }
LAB_ram_481494da:
        bVar18 = (byte)uVar19 & 0xf;
        cVar15 = bVar18 + 0x37;
        if ((uVar12 & 0xf) < 10) {
LAB_ram_48149442:
          cVar15 = bVar18 + 0x30;
        }
        param_2[iVar16] = cVar15;
        iVar16 = iVar16 + 1;
        if (param_3 <= iVar16) {
          return (undefined1 *)0x0;
        }
      }
      uVar12 = uVar17 + 1;
      if (uVar12 == 8) goto LAB_ram_481495a8;
    }
LAB_ram_48149500:
    iVar11 = param_1[uVar12 >> 1];
    uVar17 = uVar12;
  } while( true );
}


