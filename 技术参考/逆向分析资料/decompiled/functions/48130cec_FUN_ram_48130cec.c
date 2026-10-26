/* Firmware entry: 0x48130cec */

int FUN_ram_48130cec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e118 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"task_wdt","E (%lu) %s: %s(%d): TWDT was never initialized\n",uVar2,
                     "task_wdt","esp_task_wdt_status",0x2fd);
    return 0x103;
  }
  if (param_1 == 0) {
    param_1 = FUN_ram_4ff3d9a8();
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f30,0xffffffff);
  if (*(int **)(DAT_ram_4ff6e118 + 4) == (int *)0x0) {
    iVar1 = 0x105;
  }
  else {
    piVar3 = (int *)0x0;
    piVar4 = *(int **)(DAT_ram_4ff6e118 + 4);
    do {
      while (piVar4[1] == param_1) {
        piVar5 = (int *)*piVar4;
        piVar3 = piVar4;
        piVar4 = piVar5;
        if (piVar5 == (int *)0x0) goto LAB_ram_48130d2e;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
LAB_ram_48130d2e:
    iVar1 = (-(uint)(piVar3 != (int *)0x0) & 0xfffffefb) + 0x105;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f30);
  return iVar1;
}


