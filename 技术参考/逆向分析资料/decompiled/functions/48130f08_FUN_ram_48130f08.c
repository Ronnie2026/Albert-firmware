/* Firmware entry: 0x48130f08 */

/* WARNING: Removing unreachable block (ram,0x48130f7a) */

void FUN_ram_48130f08(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f30,0xffffffff);
  FUN_ram_4813124a(*DAT_ram_4ff6e118);
  cVar1 = *(char *)(DAT_ram_4ff6e118 + 3);
  auStack_24[0] = 0;
  iVar4 = FUN_ram_48130dae(0,0,auStack_24);
  if (iVar4 != 0) {
    FUN_ram_4ff3ee10(&DAT_ram_4ff47f30);
    return;
  }
  iVar4 = 0;
  if (DAT_ram_4ff47dac != 0) {
    uVar6 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: %s\n",uVar6,"task_wdt",s_Tasks_currently_running__ram_4ff53364);
    if (DAT_ram_4ff47dac != 0) goto LAB_ram_48130fe2;
  }
  while ((iVar4 != 1 && (iVar4 = 1, DAT_ram_4ff47dac != 0))) {
LAB_ram_48130fe2:
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff3e7ea(iVar4);
    uVar5 = FUN_ram_4ff3c612();
    ets_printf("E (%lu) %s: CPU %d: %s\n",uVar6,"task_wdt",iVar4,uVar5);
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f30);
  uVar3 = auStack_24[0];
  uVar2 = mhartid;
  if (auStack_24[0] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("task_wdt.c",0x1fc,"task_wdt_isr","cpus_fail != 0");
  }
  uVar7 = (uint)(mhartid == 0);
  if (cVar1 == '\0') {
    if ((auStack_24[0] >> (mhartid & 0x1f) & 1) != 0) {
      if (DAT_ram_4ff47dac != 0) {
        uVar6 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: Print CPU %d (current core) registers\n",uVar6,"task_wdt",uVar2);
      }
      FUN_ram_4ff2cc60(100);
    }
    if ((uVar3 >> uVar7 & 1) == 0) {
      return;
    }
    if (DAT_ram_4ff47dac != 0) {
      uVar6 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: Print CPU %d registers\n",uVar6,"task_wdt",uVar7);
    }
    FUN_ram_4ff2ca06(uVar7);
    return;
  }
  if ((auStack_24[0] & 3) == 3) {
    if (DAT_ram_4ff47dac != 0) {
      uVar6 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: Print CPU %d (current core) registers\n",uVar6,"task_wdt",uVar2);
    }
    FUN_ram_4ff2cc60(100);
    FUN_ram_4ff2ca0c(uVar7);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((auStack_24[0] >> uVar7 & 1) == 0) {
    FUN_ram_48130792(1);
    return;
  }
  FUN_ram_4ff2ca0c(uVar7);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


