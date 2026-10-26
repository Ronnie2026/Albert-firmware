/* Firmware entry: 0x481a3c54 */

undefined4 FUN_ram_481a3c54(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar11 = *(int **)(*param_1 + 0x14);
joined_r0x481a3c7a:
  do {
    piVar2 = piVar11;
    if (piVar2 == (int *)0x0) {
      return 0x105;
    }
    puVar12 = (undefined *)param_1[1];
    piVar11 = (int *)piVar2[2];
    iVar9 = param_1[2];
    iVar10 = param_1[3];
    uVar1 = (undefined1)param_1[4];
    if ((puVar12 != &DAT_ram_481d743c) || (iVar9 != -1)) {
      puVar13 = (undefined4 *)piVar2[1];
joined_r0x481a3ca2:
      while (puVar8 = puVar13, puVar8 != (undefined4 *)0x0) {
        while (puVar13 = (undefined4 *)puVar8[3], puVar12 == (undefined *)*puVar8) {
          puVar7 = puVar8;
          if (iVar9 != -1) goto LAB_ram_481a3ce4;
          do {
            iVar5 = FUN_ram_481a3bc4(puVar7 + 1,iVar10,uVar1);
            if (iVar5 == 0) goto LAB_ram_481a3d20;
            if (puVar13 == (undefined4 *)0x0) goto joined_r0x481a3c7a;
            puVar6 = (undefined *)*puVar13;
            puVar8 = (undefined4 *)puVar13[3];
            puVar7 = puVar13;
            puVar13 = puVar8;
          } while (puVar12 == puVar6);
          if (puVar8 == (undefined4 *)0x0) goto joined_r0x481a3c7a;
        }
      }
      goto joined_r0x481a3c7a;
    }
    iVar9 = FUN_ram_481a3bc4(piVar2,iVar10,uVar1);
  } while (iVar9 != 0);
  goto LAB_ram_481a3d26;
  while (puVar6 = (undefined *)*puVar13, puVar8 = puVar13 + 3, puVar7 = puVar13,
        puVar13 = (undefined4 *)*puVar8, puVar12 == puVar6) {
LAB_ram_481a3ce4:
    piVar4 = (int *)puVar7[2];
    while (piVar3 = piVar4, piVar3 != (int *)0x0) {
      piVar4 = (int *)piVar3[2];
      if ((iVar9 == *piVar3) && (iVar5 = FUN_ram_481a3bc4(piVar3 + 1,iVar10,uVar1), iVar5 == 0)) {
        if (piVar3[1] == 0) {
          piVar11 = (int *)puVar7[2];
          if ((int *)puVar7[2] == piVar3) {
            puVar7[2] = piVar3[2];
          }
          else {
            do {
              piVar4 = piVar11;
              piVar11 = (int *)piVar4[2];
            } while (piVar11 != piVar3);
            piVar4[2] = piVar3[2];
          }
          thunk_FUN_ram_4ff209c6(piVar3);
          iVar9 = puVar7[1];
          goto joined_r0x481a3dbc;
        }
        goto LAB_ram_481a3d20;
      }
    }
    if (puVar13 == (undefined4 *)0x0) goto joined_r0x481a3c7a;
  }
  goto joined_r0x481a3ca2;
LAB_ram_481a3d20:
  iVar9 = puVar7[1];
joined_r0x481a3dbc:
  if ((iVar9 == 0) && (puVar7[2] == 0)) {
    puVar13 = (undefined4 *)piVar2[1];
    if ((undefined4 *)piVar2[1] == puVar7) {
      piVar2[1] = puVar7[3];
    }
    else {
      do {
        puVar8 = puVar13;
        puVar13 = (undefined4 *)puVar8[3];
      } while (puVar13 != puVar7);
      puVar8[3] = puVar7[3];
    }
    thunk_FUN_ram_4ff209c6(puVar7);
  }
LAB_ram_481a3d26:
  if ((piVar2[1] == 0) && (*piVar2 == 0)) {
    piVar11 = *(int **)(*param_1 + 0x14);
    if (piVar11 == piVar2) {
      *(int *)(*param_1 + 0x14) = piVar2[2];
    }
    else {
      do {
        piVar4 = piVar11;
        piVar11 = (int *)piVar4[2];
      } while (piVar11 != piVar2);
      piVar4[2] = piVar2[2];
    }
    thunk_FUN_ram_4ff209c6(piVar2);
  }
  return 0;
}


