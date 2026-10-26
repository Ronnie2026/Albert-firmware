/* Firmware entry: 0x48130574 */

undefined4 FUN_ram_48130574(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar5 = (undefined4 *)FUN_ram_4ff45080(1,0x10);
  if (puVar5 == (undefined4 *)0x0) {
    return 0x101;
  }
  if (param_1 == 0) {
    puVar5[2] = param_2;
    FUN_ram_4ff3ec14(&DAT_ram_4ff47f30,0xffffffff);
    if (DAT_ram_4ff6e118 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)DAT_ram_4ff6e118[1];
      if (puVar6 != (undefined4 *)0x0) {
        bVar7 = false;
        bVar3 = 0;
        puVar10 = puVar6;
        do {
          if (puVar5 == puVar10) {
            bVar7 = true;
          }
          else {
            bVar3 = bVar3 | *(byte *)(puVar10 + 3) ^ 1;
          }
          puVar10 = (undefined4 *)*puVar10;
        } while (puVar10 != (undefined4 *)0x0);
        if (bVar7) {
          if (DAT_ram_4ff47dac != 0) {
            uVar4 = FUN_ram_4ff44d14();
            ets_printf("E (%lu) %s: %s(%d): user is already subscribed\n",uVar4,"task_wdt",
                       "add_entry",199);
            uVar4 = 0x102;
            goto LAB_ram_481306a4;
          }
          goto LAB_ram_481305f4;
        }
        goto LAB_ram_48130632;
      }
LAB_ram_481306cc:
      puVar6 = DAT_ram_4ff6e118;
      cVar2 = *(char *)((int)DAT_ram_4ff6e118 + 0xd);
      *puVar5 = 0;
      puVar6[1] = puVar5;
      if (cVar2 != '\0') {
        FUN_ram_481312ae(*puVar6);
        *(undefined1 *)((int)DAT_ram_4ff6e118 + 0xd) = 0;
      }
      goto LAB_ram_48130672;
    }
  }
  else {
    puVar5[1] = param_2;
    FUN_ram_4ff3ec14();
    if (DAT_ram_4ff6e118 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)DAT_ram_4ff6e118[1];
      if (puVar6 == (undefined4 *)0x0) goto LAB_ram_481306cc;
      bVar3 = 0;
      puVar10 = (undefined4 *)0x0;
      puVar8 = puVar6;
      do {
        while (puVar5[1] == puVar8[1]) {
          puVar9 = (undefined4 *)*puVar8;
          puVar10 = puVar8;
          puVar8 = puVar9;
          if (puVar9 == (undefined4 *)0x0) goto LAB_ram_481305e2;
        }
        pbVar1 = (byte *)(puVar8 + 3);
        puVar8 = (undefined4 *)*puVar8;
        bVar3 = bVar3 | *pbVar1 ^ 1;
      } while (puVar8 != (undefined4 *)0x0);
LAB_ram_481305e2:
      if (puVar10 != (undefined4 *)0x0) {
        if (DAT_ram_4ff47dac != 0) {
          uVar4 = FUN_ram_4ff44d14();
          ets_printf("E (%lu) %s: %s(%d): task is already subscribed\n",uVar4,"task_wdt","add_entry"
                     ,0xc4);
          uVar4 = 0x102;
          goto LAB_ram_481306a4;
        }
LAB_ram_481305f4:
        uVar4 = 0x102;
        goto LAB_ram_481306a4;
      }
LAB_ram_48130632:
      puVar10 = DAT_ram_4ff6e118;
      cVar2 = *(char *)((int)DAT_ram_4ff6e118 + 0xd);
      *puVar5 = puVar6;
      puVar10[1] = puVar5;
      if (cVar2 != '\0') {
        FUN_ram_481312ae(*puVar10);
        *(undefined1 *)((int)DAT_ram_4ff6e118 + 0xd) = 0;
      }
      if (bVar3 == 1) goto LAB_ram_4813063e;
LAB_ram_48130672:
      FUN_ram_4ff2cba6(*DAT_ram_4ff6e118);
      for (piVar11 = (int *)DAT_ram_4ff6e118[1]; piVar11 != (int *)0x0; piVar11 = (int *)*piVar11) {
        *(undefined1 *)(piVar11 + 3) = 0;
      }
LAB_ram_4813063e:
      FUN_ram_4ff3ee10(&DAT_ram_4ff47f30);
      *param_3 = puVar5;
      return 0;
    }
  }
  if (DAT_ram_4ff47dac != 0) {
    uVar4 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: %s(%d): task watchdog was never initialized\n",uVar4,"task_wdt",
               "add_entry",0xbf);
  }
  uVar4 = 0x103;
LAB_ram_481306a4:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f30);
  thunk_FUN_ram_4ff209c6(puVar5);
  return uVar4;
}


