/* Firmware entry: 0x481801be */

uint FUN_ram_481801be(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = (uint)*(ushort *)((int)param_1 + 6);
  uVar2 = (uint)*(ushort *)((int)param_2 + 6);
  if (uVar5 == 0) {
    if (uVar2 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  else {
    iVar4 = *param_1 + uVar5 * 4;
    do {
      piVar1 = (int *)(iVar4 + -4);
      iVar4 = iVar4 + -4;
      if (*piVar1 != 0) break;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if (uVar2 == 0) goto LAB_ram_4818022e;
  }
  iVar4 = uVar2 * 4 + *param_2;
  do {
    piVar1 = (int *)(iVar4 + -4);
    iVar4 = iVar4 + -4;
    if (*piVar1 != 0) {
      if (uVar2 < uVar5) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      if (uVar2 <= uVar5) {
        iVar4 = uVar5 * 4 + -4;
        while( true ) {
          puVar3 = (uint *)(*param_1 + iVar4);
          uVar2 = *(uint *)(*param_2 + iVar4);
          iVar4 = iVar4 + -4;
          if (uVar2 < *puVar3) {
            return 1;
          }
          if (*puVar3 < uVar2) break;
          if (iVar4 == -4) {
            return 0;
          }
        }
        return 0xffffffff;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
LAB_ram_4818022e:
  return (uint)(uVar5 != 0);
}


