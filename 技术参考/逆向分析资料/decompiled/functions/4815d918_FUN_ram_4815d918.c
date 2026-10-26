/* Firmware entry: 0x4815d918 */

undefined4 FUN_ram_4815d918(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = (int *)*param_1;
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar4 = piVar3[2];
    if (iVar4 == 0) goto LAB_ram_4815d9da;
LAB_ram_4815d934:
    if (param_2 == *(byte *)(piVar3 + 3)) {
      *(undefined1 *)(piVar3 + 3) = 0xff;
      bVar1 = true;
LAB_ram_4815d97c:
      iVar5 = 0;
      while (iVar5 = iVar5 + 1, iVar4 != iVar5) {
        while (param_2 != *(byte *)(piVar3 + iVar5 + 3)) {
          if (*(byte *)(piVar3 + iVar5 + 3) != 0xff) goto LAB_ram_4815d944;
          iVar5 = iVar5 + 1;
          if (iVar4 == iVar5) goto LAB_ram_4815d9a8;
        }
        *(undefined1 *)(piVar3 + iVar5 + 3) = 0xff;
        bVar1 = true;
      }
LAB_ram_4815d9a8:
      iVar4 = *piVar3;
      piVar3 = (int *)piVar3[1];
      bVar2 = bVar1;
      if (iVar4 == 0) goto LAB_ram_4815d9e6;
      do {
        *(int **)(iVar4 + 4) = piVar3;
        iVar5 = param_1[2];
        bVar2 = bVar1;
        while( true ) {
          if (piVar3 == (int *)0x0) {
            param_1[1] = iVar4;
            param_1[2] = iVar5 + -1;
            FUN_ram_4ff209c6();
            if (!bVar2) {
              return 0;
            }
            return 1;
          }
          *piVar3 = iVar4;
          param_1[2] = iVar5 + -1;
          FUN_ram_4ff209c6();
          if (bVar2) {
            return 1;
          }
          iVar4 = piVar3[2];
          if (iVar4 != 0) goto LAB_ram_4815d934;
LAB_ram_4815d9da:
          iVar4 = *piVar3;
          bVar1 = false;
          bVar2 = false;
          piVar3 = (int *)piVar3[1];
          if (iVar4 != 0) break;
LAB_ram_4815d9e6:
          *param_1 = piVar3;
          iVar5 = param_1[2];
        }
      } while( true );
    }
    if (*(byte *)(piVar3 + 3) == 0xff) {
      bVar1 = false;
      goto LAB_ram_4815d97c;
    }
    iVar5 = 0;
    bVar1 = false;
LAB_ram_4815d944:
    if (bVar1) {
      return 1;
    }
    while (iVar6 = iVar5, iVar6 + 1 != iVar4) {
      iVar5 = iVar6 + 1;
      if (param_2 == *(byte *)(piVar3 + iVar6 + 4)) {
        *(undefined1 *)(piVar3 + iVar6 + 4) = 0xff;
        return 1;
      }
    }
    piVar3 = (int *)piVar3[1];
  } while( true );
}


