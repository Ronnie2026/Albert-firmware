/* Firmware entry: 0x48130dae */

undefined4 FUN_ram_48130dae(code *param_1,undefined4 param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(DAT_ram_4ff6e118 + 4);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (param_1 == (code *)0x0) {
      if (DAT_ram_4ff47dac == 0) goto LAB_ram_48130df8;
      uVar4 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: %s\n",uVar4,"task_wdt",
                 "Task watchdog got triggered. The following tasks/users did not reset the watchdog in time:"
                );
      piVar1 = *(int **)(DAT_ram_4ff6e118 + 4);
    }
    else {
      (*param_1)(param_2,
                 "Task watchdog got triggered. The following tasks/users did not reset the watchdog in time:"
                );
      piVar1 = *(int **)(DAT_ram_4ff6e118 + 4);
    }
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
LAB_ram_48130df8:
      if ((char)piVar1[3] == '\0') {
        if (piVar1[1] == 0) {
          iVar2 = piVar1[2];
LAB_ram_48130e1e:
          if (param_3 != (uint *)0x0) {
            *param_3 = *param_3 | 3;
          }
          pcVar5 = " (CPU 0/1)";
        }
        else {
          iVar2 = FUN_ram_4ff3c612();
          if ((piVar1[1] == 0) || (uVar3 = FUN_ram_4ff3e756(piVar1[1]), 1 < uVar3))
          goto LAB_ram_48130e1e;
          if (param_3 == (uint *)0x0) {
            if (uVar3 == 0) goto LAB_ram_48130ebe;
LAB_ram_48130e7e:
            pcVar5 = " (CPU 1)";
          }
          else {
            *param_3 = *param_3 | 1 << (uVar3 & 0x1f);
            if (uVar3 != 0) goto LAB_ram_48130e7e;
LAB_ram_48130ebe:
            pcVar5 = " (CPU 0)";
          }
        }
        if (param_1 == (code *)0x0) {
          if (DAT_ram_4ff47dac != 0) {
            uVar4 = FUN_ram_4ff44d14();
            ets_printf("E (%lu) %s:  - %s%s\n",uVar4,"task_wdt",iVar2,pcVar5);
          }
        }
        else {
          (*param_1)(param_2,&DAT_ram_481d56e0);
          (*param_1)(param_2,iVar2);
          (*param_1)(param_2,pcVar5);
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


