/* Firmware entry: 0x4ff2ca12 */

void FUN_ram_4ff2ca12(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == mhartid) {
    iVar2 = param_1 * 4;
    FUN_ram_48001872();
    piVar4 = (int *)(&DAT_ram_4ff6e0d4 + iVar2);
    while( true ) {
      while( true ) {
        do {
          FUN_ram_4ff3df3c(0,1,0xffffffff);
          if (((&DAT_ram_4ff6e0d0)[param_1] != '\0') && (*piVar4 != 0)) {
            (*(code *)*piVar4)(*(undefined4 *)(&DAT_ram_4ff6e0c8 + iVar2));
            (&DAT_ram_4ff6e0d0)[param_1] = '\0';
            *piVar4 = 0;
          }
          piVar3 = (int *)(&DAT_ram_4ff6e0ec + iVar2);
        } while (*piVar3 == 0);
        pcVar5 = (code *)*piVar3;
        uVar6 = *(undefined4 *)(&DAT_ram_4ff6e0e4 + iVar2);
        *piVar3 = 0;
        uVar1 = (&DAT_ram_4ff6e0f4)[param_1];
        if (*(int *)(&DAT_ram_4ff6e0dc + iVar2) != 1) break;
        FUN_ram_4ff3afa2(uVar1,0,0,0);
        (*pcVar5)(uVar6);
      }
      if (*(int *)(&DAT_ram_4ff6e0dc + iVar2) != 2) break;
      (*pcVar5)(uVar6);
      FUN_ram_4ff3afa2(uVar1,0,0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_ipc.c",0x38,"ipc_task","cpuid == xPortGetCoreID()");
}


