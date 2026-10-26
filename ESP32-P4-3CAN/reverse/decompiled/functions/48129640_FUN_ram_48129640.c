/* Firmware entry: 0x48129640 */

undefined4 FUN_ram_48129640(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  code *pcVar17;
  undefined8 uVar18;
  int aiStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar15 = *param_2;
  if (iVar15 == 0) {
    return 0;
  }
  uVar13 = param_2[2];
  uVar14 = param_2[1];
  uVar12 = uVar13 + 4;
  if (uVar14 < uVar12) {
    if ((uVar13 + 5 <= uVar14) && (iVar2 = FUN_ram_4ff45520(iVar15 + uVar13,"false",5), iVar2 == 0))
    {
LAB_ram_48129736:
      uVar12 = uVar13 + 5;
      *(undefined4 *)(param_1 + 0xc) = 1;
      goto LAB_ram_4812973a;
    }
  }
  else {
    iVar16 = iVar15 + uVar13;
    iVar2 = FUN_ram_4ff45520(iVar16,&DAT_ram_481c6654,4);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 4;
      goto LAB_ram_4812973a;
    }
    if ((uVar13 + 5 <= uVar14) && (iVar2 = FUN_ram_4ff45520(iVar16,"false",5), iVar2 == 0))
    goto LAB_ram_48129736;
    iVar2 = FUN_ram_4ff45520(iVar16,&DAT_ram_481c3dec,4);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = 1;
      goto LAB_ram_4812973a;
    }
  }
  if (uVar13 < uVar14) {
    pcVar6 = (char *)(iVar15 + uVar13);
    cVar1 = *pcVar6;
    if (cVar1 == '\"') {
      uVar3 = FUN_ram_4812918a(param_1,param_2);
      return uVar3;
    }
    if ((cVar1 == '-') || ((byte)(cVar1 - 0x30U) < 10)) {
      aiStack_44[0] = 0;
      iVar15 = 0;
      do {
        uVar12 = (uint)(byte)pcVar6[iVar15];
        if (uVar12 < 0x46) {
          if ((uVar12 < 0x2b) || ((0x4007fedU >> (uVar12 - 0x2b & 0x1f) & 1) == 0)) break;
        }
        else if (uVar12 != 0x65) break;
        iVar15 = iVar15 + 1;
      } while (iVar15 != uVar14 - uVar13);
      iVar2 = (*(code *)param_2[4])(iVar15 + 1);
      if (iVar2 != 0) {
        FUN_ram_4ff45158(iVar2,*param_2 + param_2[2],iVar15);
        *(undefined1 *)(iVar15 + iVar2) = 0;
        uVar18 = FUN_ram_4819723c(iVar2,aiStack_44);
        iVar15 = aiStack_44[0];
        uVar5 = (undefined4)((ulonglong)uVar18 >> 0x20);
        uVar3 = (undefined4)uVar18;
        pcVar17 = (code *)param_2[5];
        if (iVar2 != aiStack_44[0]) {
          iVar16 = __gedf2(uVar3,uVar5,DAT_ram_481f4d70,DAT_ram_481f4d74);
          if (iVar16 < 0) {
            iVar16 = __ledf2(uVar3,uVar5,DAT_ram_481f4d78,DAT_ram_481f4d7c);
            uVar7 = 0x80000000;
            if (0 < iVar16) {
              uVar7 = __fixdfsi(uVar3,uVar5);
            }
          }
          else {
            uVar7 = 0x7fffffff;
          }
          iVar16 = param_2[2];
          *(undefined8 *)(param_1 + 0x18) = uVar18;
          *(undefined4 *)(param_1 + 0x14) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 8;
          param_2[2] = iVar16 + (iVar15 - iVar2);
          (*pcVar17)(iVar2);
          return 1;
        }
        (*pcVar17)(iVar2);
      }
      return 0;
    }
    if (cVar1 == '[') {
      uVar8 = param_2[3];
      if (999 < uVar8) {
        return 0;
      }
      param_2[3] = uVar8 + 1;
      if (*pcVar6 != '[') {
        return 0;
      }
      param_2[2] = uVar13 + 1;
      FUN_ram_48129444(param_2);
      uVar12 = param_2[2];
      if (uVar12 < uVar14) {
        if (*(char *)(iVar15 + uVar12) == ']') {
          param_2[3] = uVar8;
          puVar10 = (undefined4 *)0x0;
        }
        else {
          param_2[2] = uVar12 - 1;
          puVar9 = (undefined4 *)0x0;
          puVar11 = (undefined4 *)0x0;
          do {
            puVar4 = (undefined4 *)(*(code *)param_2[4])(0x28);
            if (puVar4 == (void *)0x0) {
              puVar10 = puVar11;
              if (puVar11 == (undefined4 *)0x0) {
                return 0;
              }
              goto LAB_ram_48129a88;
            }
            memset(puVar4,0,0x28);
            puVar10 = puVar4;
            if (puVar11 != (undefined4 *)0x0) {
              *puVar9 = puVar4;
              puVar4[1] = puVar9;
              puVar10 = puVar11;
            }
            param_2[2] = param_2[2] + 1;
            FUN_ram_48129444(param_2);
            iVar15 = FUN_ram_48129640(puVar4,param_2);
            if (iVar15 == 0) goto LAB_ram_48129a88;
            FUN_ram_48129444(param_2);
            uVar12 = param_2[2];
            if ((uint)param_2[1] <= uVar12) goto LAB_ram_48129a88;
            puVar9 = puVar4;
            puVar11 = puVar10;
          } while (*(char *)(*param_2 + uVar12) == ',');
          if (*(char *)(*param_2 + uVar12) != ']') {
LAB_ram_48129a88:
            FUN_ram_481295cc(puVar10);
            return 0;
          }
          param_2[3] = param_2[3] + -1;
          puVar10[1] = puVar4;
        }
        *(undefined4 **)(param_1 + 8) = puVar10;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(param_1 + 0xc) = 0x20;
        goto LAB_ram_4812973a;
      }
    }
    else {
      if (cVar1 != '{') {
        return 0;
      }
      uVar8 = param_2[3];
      if (999 < uVar8) {
        return 0;
      }
      param_2[3] = uVar8 + 1;
      if (*pcVar6 != '{') {
        return 0;
      }
      param_2[2] = uVar13 + 1;
      FUN_ram_48129444(param_2);
      uVar12 = param_2[2];
      if (uVar12 < uVar14) {
        if (*(char *)(iVar15 + uVar12) == '}') {
          param_2[3] = uVar8;
          puVar10 = (undefined4 *)0x0;
        }
        else {
          param_2[2] = uVar12 - 1;
          puVar9 = (undefined4 *)0x0;
          puVar11 = (undefined4 *)0x0;
          do {
            puVar4 = (undefined4 *)(*(code *)param_2[4])(0x28);
            if (puVar4 == (void *)0x0) {
              puVar10 = puVar11;
              if (puVar11 == (undefined4 *)0x0) {
                return 0;
              }
              goto LAB_ram_48129a90;
            }
            memset(puVar4,0,0x28);
            puVar10 = puVar4;
            if (puVar11 != (undefined4 *)0x0) {
              *puVar9 = puVar4;
              puVar4[1] = puVar9;
              puVar10 = puVar11;
            }
            if ((uint)param_2[1] <= param_2[2] + 1U) goto LAB_ram_48129a90;
            param_2[2] = param_2[2] + 1U;
            FUN_ram_48129444(param_2);
            iVar15 = FUN_ram_4812918a(puVar4,param_2);
            if (iVar15 == 0) goto LAB_ram_48129a90;
            FUN_ram_48129444(param_2);
            uVar13 = param_2[2];
            uVar12 = param_2[1];
            puVar4[8] = puVar4[4];
            puVar4[4] = 0;
            if ((uVar12 <= uVar13) || (*(char *)(*param_2 + uVar13) != ':')) goto LAB_ram_48129a90;
            param_2[2] = uVar13 + 1;
            FUN_ram_48129444(param_2);
            iVar15 = FUN_ram_48129640(puVar4,param_2);
            if (iVar15 == 0) goto LAB_ram_48129a90;
            FUN_ram_48129444(param_2);
            uVar12 = param_2[2];
            if ((uint)param_2[1] <= uVar12) goto LAB_ram_48129a90;
            puVar9 = puVar4;
            puVar11 = puVar10;
          } while (*(char *)(*param_2 + uVar12) == ',');
          if (*(char *)(*param_2 + uVar12) != '}') {
LAB_ram_48129a90:
            FUN_ram_481295cc(puVar10);
            return 0;
          }
          param_2[3] = param_2[3] + -1;
          puVar10[1] = puVar4;
        }
        *(undefined4 **)(param_1 + 8) = puVar10;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(param_1 + 0xc) = 0x40;
LAB_ram_4812973a:
        param_2[2] = uVar12;
        return 1;
      }
    }
    param_2[2] = uVar12 - 1;
  }
  return 0;
}


