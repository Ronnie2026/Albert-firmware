/* Firmware entry: 0x48130b50 */

undefined4 FUN_ram_48130b50(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e118 == (undefined4 *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"task_wdt","E (%lu) %s: %s(%d): TWDT was never initialized\n",uVar3,
                     "task_wdt","esp_task_wdt_reset",0x2ba);
    return 0x103;
  }
  iVar4 = FUN_ram_4ff3d9a8();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f30,0xffffffff);
  puVar2 = DAT_ram_4ff6e118;
  if ((int *)DAT_ram_4ff6e118[1] != (int *)0x0) {
    bVar5 = 0;
    piVar8 = (int *)0x0;
    piVar6 = (int *)DAT_ram_4ff6e118[1];
    do {
      while (iVar4 == piVar6[1]) {
        piVar7 = (int *)*piVar6;
        piVar8 = piVar6;
        piVar6 = piVar7;
        if (piVar7 == (int *)0x0) goto LAB_ram_48130ba4;
      }
      pbVar1 = (byte *)(piVar6 + 3);
      piVar6 = (int *)*piVar6;
      bVar5 = bVar5 | *pbVar1 ^ 1;
    } while (piVar6 != (int *)0x0);
LAB_ram_48130ba4:
    if (piVar8 != (int *)0x0) {
      *(undefined1 *)(piVar8 + 3) = 1;
      if (bVar5 == 0) {
        FUN_ram_4ff2cba6(*puVar2);
        for (piVar8 = (int *)DAT_ram_4ff6e118[1]; piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
          *(undefined1 *)(piVar8 + 3) = 0;
        }
      }
      uVar3 = 0;
      goto LAB_ram_48130bb0;
    }
  }
  if (DAT_ram_4ff47dac == 0) {
    uVar3 = 0x105;
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: %s(%d): task not found\n",uVar3,"task_wdt","esp_task_wdt_reset",0x2c3);
    uVar3 = 0x105;
  }
LAB_ram_48130bb0:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f30);
  return uVar3;
}


