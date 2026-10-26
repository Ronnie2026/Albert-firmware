/* Firmware entry: 0x4ff38838 */

void FUN_ram_4ff38838(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar7 = (int *)(*(int *)(param_1 + 0x1c) + param_1);
  piVar10 = piVar7 + (uint)*(ushort *)(param_1 + 0x2c) * 8;
  if (*(ushort *)(param_1 + 0x2c) == 0) {
    return;
  }
  do {
    if ((*piVar7 == 4) && (uVar1 = piVar7[5], uVar1 != 0)) {
      iVar9 = piVar7[1];
      iVar8 = *param_2;
      uVar5 = 0;
      do {
        piVar4 = (int *)(iVar9 + uVar5 + param_1);
        piVar2 = param_2;
        if (piVar4[2] == iVar8) {
LAB_ram_4ff388ae:
          do {
            iVar3 = piVar4[1];
            uVar6 = *piVar4 + 3U & 0xfffffffc;
            piVar2[1] = iVar3;
            piVar2[2] = (int)piVar4 + uVar6 + 0xc;
            uVar6 = uVar5 + 0xc + uVar6 + (iVar3 + 3U & 0xfffffffc);
            if (uVar1 <= uVar6) goto LAB_ram_4ff38908;
            while( true ) {
              piVar4 = (int *)(iVar9 + uVar6 + param_1);
              iVar3 = piVar4[2];
              piVar2 = param_2;
              uVar5 = uVar6;
              if (iVar3 == iVar8) break;
              while( true ) {
                if ((param_3 == 2) && (param_2[3] == iVar3)) {
                  piVar2 = param_2 + 3;
                  uVar5 = uVar6;
                  goto LAB_ram_4ff388ae;
                }
                uVar6 = uVar6 + 0xc + (*piVar4 + 3U & 0xfffffffc) + (piVar4[1] + 3U & 0xfffffffc);
                if (uVar6 < uVar1) break;
LAB_ram_4ff38908:
                do {
                  piVar2 = piVar7;
                  piVar7 = piVar2 + 8;
                  if (piVar10 == piVar7) {
                    return;
                  }
                } while ((*piVar7 != 4) || (uVar1 = piVar2[0xd], uVar1 == 0));
                iVar9 = piVar2[9];
                uVar6 = 0;
                uVar5 = 0;
                iVar8 = *param_2;
                piVar4 = (int *)(iVar9 + param_1);
                iVar3 = piVar4[2];
                piVar2 = param_2;
                if (iVar3 == iVar8) goto LAB_ram_4ff388ae;
              }
            }
          } while( true );
        }
        if ((param_3 == 2) && (param_2[3] == piVar4[2])) {
          piVar2 = param_2 + 3;
          goto LAB_ram_4ff388ae;
        }
        uVar5 = uVar5 + 0xc + (*piVar4 + 3U & 0xfffffffc) + (piVar4[1] + 3U & 0xfffffffc);
      } while (uVar5 < uVar1);
    }
    piVar7 = piVar7 + 8;
    if (piVar10 == piVar7) {
      return;
    }
  } while( true );
}


