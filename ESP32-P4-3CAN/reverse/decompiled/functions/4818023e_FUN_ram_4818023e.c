/* Firmware entry: 0x4818023e */

int FUN_ram_4818023e(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = (uint)*(ushort *)((int)param_1 + 6);
  uVar3 = (uint)*(ushort *)((int)param_2 + 6);
  if (uVar6 != 0) {
    iVar5 = *param_1 + uVar6 * 4;
    do {
      piVar1 = (int *)(iVar5 + -4);
      iVar5 = iVar5 + -4;
      if (*piVar1 != 0) {
        if (uVar3 != 0) goto LAB_ram_48180262;
        goto LAB_ram_481802c8;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (uVar3 != 0) {
LAB_ram_48180262:
    iVar5 = uVar3 * 4 + *param_2;
    do {
      piVar1 = (int *)(iVar5 + -4);
      iVar5 = iVar5 + -4;
      if (*piVar1 != 0) {
        if (uVar6 <= uVar3) {
          iVar5 = (int)(short)param_2[1];
          if (uVar6 < uVar3) {
            return -iVar5;
          }
          iVar2 = (int)(short)param_1[1];
          if (iVar2 < 1) {
            if ((0 < iVar5) && (iVar2 != 0)) {
              return -1;
            }
          }
          else if (iVar5 < 0) {
            return 1;
          }
          iVar5 = uVar6 * 4 + -4;
          while( true ) {
            puVar4 = (uint *)(*param_1 + iVar5);
            uVar3 = *(uint *)(*param_2 + iVar5);
            iVar5 = iVar5 + -4;
            if (uVar3 < *puVar4) {
              return iVar2;
            }
            if (*puVar4 < uVar3) break;
            if (iVar5 == -4) {
              return 0;
            }
          }
          return -iVar2;
        }
        goto LAB_ram_481802c8;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (uVar6 != 0) {
LAB_ram_481802c8:
      return (int)(short)param_1[1];
    }
  }
  return 0;
}


