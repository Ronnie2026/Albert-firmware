/* Firmware entry: 0x48130398 */

undefined4 FUN_ram_48130398(int param_1,int *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f30,0xffffffff);
  puVar1 = DAT_ram_4ff6e118;
  if (DAT_ram_4ff6e118 == (undefined4 *)0x0) {
    if (DAT_ram_4ff47dac != 0) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: %s(%d): task watchdog was never initialized\n",uVar3,"task_wdt",
                 "delete_entry",0xea);
    }
    uVar3 = 0x103;
    goto LAB_ram_481304bc;
  }
  piVar5 = (int *)DAT_ram_4ff6e118[1];
  if (param_1 == 0) {
    if (piVar5 != (int *)0x0) {
      bVar4 = false;
      bVar2 = 0;
      piVar7 = piVar5;
      do {
        if (param_2 == piVar7) {
          bVar4 = true;
        }
        else {
          bVar2 = bVar2 | *(byte *)(piVar7 + 3) ^ 1;
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)0x0);
      if (bVar4) goto LAB_ram_48130428;
    }
    if (DAT_ram_4ff47dac != 0) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: %s(%d): user not found\n",uVar3,"task_wdt","delete_entry",0xf4);
    }
  }
  else {
    if (piVar5 != (int *)0x0) {
      bVar2 = 0;
      piVar7 = piVar5;
      piVar8 = (int *)0x0;
      do {
        while (piVar6 = piVar7, (int *)piVar6[1] != param_2) {
          bVar2 = bVar2 | *(byte *)(piVar6 + 3) ^ 1;
          piVar7 = (int *)*piVar6;
          if ((int *)*piVar6 == (int *)0x0) goto LAB_ram_481303ea;
        }
        piVar7 = (int *)*piVar6;
        piVar8 = piVar6;
      } while ((int *)*piVar6 != (int *)0x0);
LAB_ram_481303ea:
      param_2 = piVar8;
      if (param_2 != (int *)0x0) {
LAB_ram_48130428:
        piVar7 = piVar5;
        if (param_2 == piVar5) {
          piVar5 = (int *)*param_2;
          DAT_ram_4ff6e118[1] = piVar5;
        }
        else {
          do {
            piVar8 = piVar7;
            piVar7 = (int *)*piVar8;
          } while (param_2 != piVar7);
          *piVar8 = *param_2;
        }
        if (piVar5 == (int *)0x0) {
          *(undefined1 *)((int)puVar1 + 0xd) = 1;
          FUN_ram_48131278(*puVar1);
          puVar1 = DAT_ram_4ff6e118;
          if (*(char *)((int)DAT_ram_4ff6e118 + 0xd) != '\0') goto LAB_ram_48130444;
        }
        else {
          *(undefined1 *)((int)puVar1 + 0xd) = 0;
        }
        if (bVar2 != 1) {
          FUN_ram_4ff2cba6(*puVar1);
          for (piVar5 = (int *)DAT_ram_4ff6e118[1]; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
LAB_ram_48130444:
        FUN_ram_4ff3ee10(&DAT_ram_4ff47f30);
        thunk_FUN_ram_4ff209c6(param_2);
        return 0;
      }
    }
    if (DAT_ram_4ff47dac != 0) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: %s(%d): task not found\n",uVar3,"task_wdt","delete_entry",0xf0);
    }
  }
  uVar3 = 0x105;
LAB_ram_481304bc:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f30);
  return uVar3;
}


