/* Firmware entry: 0x48149140 */

bool FUN_ram_48149140(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined4 auStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = (uint)*param_1;
  if (uVar8 == 0) {
    uVar7 = 0;
    iVar9 = 0;
    if (param_2 == (uint *)0x0) {
      return false;
    }
  }
  else {
    iVar11 = 8;
    pbVar5 = param_1;
    uVar7 = uVar8;
    do {
      while (uVar7 == 0x3a) {
        uVar7 = (uint)pbVar5[1];
        pbVar5 = pbVar5 + 1;
        iVar11 = iVar11 + -1;
        if (uVar7 == 0) goto LAB_ram_4814919a;
      }
      if (uVar7 == 0x2e) {
        if ((iVar11 != 5) && (iVar11 != 2)) {
          return false;
        }
        iVar11 = iVar11 + -1;
        bVar12 = true;
        goto LAB_ram_481491a8;
      }
      if (((&DAT_ram_4823af31)[uVar7] & 0x44) == 0) break;
      uVar7 = (uint)pbVar5[1];
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
LAB_ram_4814919a:
    bVar12 = false;
LAB_ram_481491a8:
    uVar7 = 0;
    iVar9 = 0;
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      if (uVar8 == 0x3a) {
        uVar4 = uVar10 + 1;
        if (param_2 == (uint *)0x0) {
LAB_ram_4814929a:
          if ((bVar12 == false) || (uVar4 != 6)) goto LAB_ram_481492a2;
          iVar6 = FUN_ram_481477ca(param_1 + 1,auStack_44);
          if (iVar6 != 0) {
            if (param_2 == (uint *)0x0) {
              return bVar12;
            }
            uVar8 = FUN_ram_48137fd6(auStack_44[0]);
            param_2[3] = uVar8;
            goto LAB_ram_48149214;
          }
        }
        else {
          if ((uVar10 & 1) != 0) {
            puVar2 = param_2 + iVar9;
            iVar9 = iVar9 + 1;
            *puVar2 = uVar7 | *puVar2;
            goto LAB_ram_4814929a;
          }
          param_2[iVar9] = uVar7 << 0x10;
LAB_ram_481492a2:
          if (7 < uVar4) {
            return false;
          }
        }
        uVar8 = (uint)param_1[1];
        if (uVar8 != 0x3a) {
          param_1 = param_1 + 1;
          uVar7 = 0;
          if (uVar8 != 0) goto LAB_ram_481491c0;
          break;
        }
        if (param_1[2] == 0x3a) {
          return false;
        }
        uVar10 = uVar10 + iVar11;
        while (uVar4 != uVar10 + 1) {
          uVar8 = uVar4;
          if ((uVar4 & 1) == 0) {
            if (param_2 != (uint *)0x0) {
              param_2[iVar9] = 0;
              uVar8 = uVar4 + 1;
              if (uVar4 == uVar10) goto LAB_ram_4814932a;
              goto LAB_ram_48149300;
            }
            if (uVar4 == uVar10) {
LAB_ram_4814932a:
              uVar4 = uVar4 + 1;
              break;
            }
            uVar4 = uVar4 + 2;
          }
          else {
LAB_ram_48149300:
            uVar4 = uVar8 + 1;
          }
          iVar9 = iVar9 + 1;
          if (uVar4 == 8) {
            return false;
          }
        }
        bVar1 = param_1[2];
        uVar7 = 0;
        param_1 = param_1 + 1;
        iVar11 = 0;
      }
      else {
LAB_ram_481491c0:
        bVar1 = (&DAT_ram_4823af31)[uVar8];
        if ((bVar1 & 0x44) == 0) break;
        if ((bVar1 & 4) == 0) {
          iVar6 = uVar8 - 0x37;
          if ((bVar1 & 3) == 2) {
            iVar6 = uVar8 - 0x57;
          }
        }
        else {
          iVar6 = uVar8 - 0x30;
        }
        bVar1 = param_1[1];
        uVar7 = uVar7 * 0x10 + iVar6;
      }
      uVar8 = (uint)bVar1;
      param_1 = param_1 + 1;
      uVar10 = uVar4;
    } while (uVar8 != 0);
    if (param_2 == (uint *)0x0) {
      return uVar4 == 7;
    }
    if ((uVar4 & 1) != 0) {
      bVar12 = uVar4 == 7;
      param_2[iVar9] = uVar7 | param_2[iVar9];
      goto LAB_ram_48149214;
    }
    uVar7 = uVar7 << 0x10;
  }
  param_2[iVar9] = uVar7;
  bVar12 = false;
LAB_ram_48149214:
  puVar2 = param_2;
  do {
    puVar3 = puVar2 + 1;
    uVar8 = FUN_ram_48137fd6(*puVar2);
    *puVar2 = uVar8;
    puVar2 = puVar3;
  } while (puVar3 != param_2 + 4);
  *(undefined1 *)(param_2 + 4) = 0;
  if (((*param_1 == 0x25) && (param_1[1] != 0)) &&
     (iVar9 = FUN_ram_4813a846(param_1 + 1), iVar9 != 0)) {
    if (((*param_2 & 0xc0ff) == 0x80fe) || (((*param_2 & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) {
      *(char *)(param_2 + 4) = *(char *)(iVar9 + 0xea) + '\x01';
    }
    else {
      *(undefined1 *)(param_2 + 4) = 0;
    }
  }
  return bVar12;
}


