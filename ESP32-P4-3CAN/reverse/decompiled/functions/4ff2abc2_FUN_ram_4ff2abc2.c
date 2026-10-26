/* Firmware entry: 0x4ff2abc2 */

void FUN_ram_4ff2abc2(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int aiStack_48 [10];
  int aiStack_20 [3];
  
  iVar1 = cycle;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (mhartid == 1) {
    uVar3 = FUN_ram_4ff3ebfe();
    iVar2 = cycle;
    FUN_ram_4ff29c0e();
    if (((uint)param_1 & 3) == 0) {
      piVar8 = aiStack_48;
      do {
        iVar7 = *param_1;
        piVar12 = piVar8 + 1;
        param_1 = param_1 + 1;
        *piVar8 = iVar7;
        piVar8 = piVar12;
      } while (piVar12 != aiStack_20);
    }
    else {
      piVar8 = aiStack_48;
      do {
        piVar12 = (int *)((int)piVar8 + 1);
        *(char *)piVar8 = (char)*param_1;
        param_1 = (int *)((int)param_1 + 1);
        piVar8 = piVar12;
      } while (piVar12 != aiStack_20);
    }
    aiStack_48[1] = iVar2;
    if (DAT_ram_4ff51948 != -1) {
      DAT_ram_4ff51948 = DAT_ram_4ff51948 + 1;
    }
    if ((DAT_ram_4ff51bc0 == 0) || (39999999 < (uint)(iVar2 - DAT_ram_4ff51bcc))) {
      if (DAT_ram_4ff5194c != -1) {
        DAT_ram_4ff5194c = DAT_ram_4ff5194c + 1;
      }
      DAT_ram_4ff51bc0 = 1;
      DAT_ram_4ff51bc4 = DAT_ram_4ff50f78;
      piVar12 = aiStack_48;
      piVar8 = &DAT_ram_4ff51bc8;
      do {
        iVar7 = *piVar12;
        piVar12 = piVar12 + 1;
        *piVar8 = iVar7;
        piVar8 = piVar8 + 1;
      } while (piVar12 != aiStack_20);
      iVar7 = DAT_ram_4ff50f74 - DAT_ram_4ff50f78;
      if (DAT_ram_4ff50f78 != 0) {
        puVar5 = &DAT_ram_4ff51bf0;
        uVar4 = 0;
        do {
          iVar10 = (iVar7 + uVar4 & 0xf) * 0x24;
          puVar11 = (undefined4 *)(&DAT_ram_4ff50fa8 + iVar10);
          puVar9 = puVar5;
          do {
            uVar6 = *puVar11;
            puVar11 = puVar11 + 1;
            *puVar9 = uVar6;
            puVar9 = puVar9 + 1;
          } while (puVar11 != (undefined4 *)(&DAT_ram_4ff50fcc + iVar10));
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 9;
        } while (uVar4 < DAT_ram_4ff50f78);
      }
      DAT_ram_4ff51bc8 = DAT_ram_4ff51948;
      if (DAT_ram_4ff51950 == 0) {
        puVar5 = &DAT_ram_4ff51bc0;
        do {
          puVar9 = puVar5 + 1;
          puVar5[-0x9c] = *puVar5;
          puVar5 = puVar9;
        } while (puVar9 != (undefined4 *)&DAT_ram_4ff51e30);
      }
    }
    aiStack_48[0] = DAT_ram_4ff51948;
    piVar12 = aiStack_48;
    piVar8 = &DAT_ram_4ff50f04;
    do {
      iVar7 = *piVar12;
      piVar12 = piVar12 + 1;
      *piVar8 = iVar7;
      piVar8 = piVar8 + 1;
    } while (piVar12 != aiStack_20);
    FUN_ram_4ff2a658(aiStack_48,2,iVar2);
    uVar4 = cycle - iVar2;
    if (DAT_ram_4ff50fa0 < uVar4) {
      DAT_ram_4ff50fa0 = uVar4;
    }
    if (DAT_ram_4ff50ec0 < uVar4) {
      DAT_ram_4ff50ec0 = uVar4;
    }
    if (DAT_ram_4ff50f90 < (uint)(cycle - iVar1)) {
      DAT_ram_4ff50f90 = cycle - iVar1;
    }
    FUN_ram_4ff3ec08(uVar3);
    return;
  }
  DAT_ram_4ff5079c = DAT_ram_4ff5079c + 1;
  return;
}


