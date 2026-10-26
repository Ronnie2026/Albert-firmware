/* Firmware entry: 0x4ff3f8fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff3f8fc(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  iVar2 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid == 0) {
    FUN_ram_4811ec88();
    iVar1 = FUN_ram_4800340c(0x35,0x402,&LAB_ram_4ff3f3f2,&DAT_ram_4ff59e98,0);
    if (iVar1 == 0) {
      iVar2 = FUN_ram_4ff311d8(0x1c);
      if (iVar2 == 0) {
        _DAT_ram_500e601c = _DAT_ram_500e601c | 0x800000;
        _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffffdf;
      }
      FUN_ram_4ff31206(0x1c,iVar2);
      FUN_ram_4ff36c12(&DAT_ram_4ff59e98);
      puStack_18 = &LAB_ram_4ff33914;
      puStack_14 = &LAB_ram_4ff33920;
      FUN_ram_4fc00230(&DAT_ram_4ff59e98,&puStack_18);
      iVar2 = DAT_ram_4ff59e98;
      *(uint *)(DAT_ram_4ff59e98 + 0x14) = *(uint *)(DAT_ram_4ff59e98 + 0x14) & 0xfff00000;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x60) = 1;
      FUN_ram_4fc00260(&DAT_ram_4ff59e98,1,0,0);
      FUN_ram_4fc00258(&DAT_ram_4ff59e98,0,0);
      FUN_ram_4fc00260(&DAT_ram_4ff59e98,1,1,0);
      FUN_ram_4fc00258(&DAT_ram_4ff59e98,1,0);
      iVar2 = 0;
      while( true ) {
        FUN_ram_4fc0025c(&DAT_ram_4ff59e98,iVar2,1);
        FUN_ram_4fc00240(&DAT_ram_4ff59e98,iVar2,1000);
        FUN_ram_4fc00258(&DAT_ram_4ff59e98,iVar2,1);
        FUN_ram_4fc00260(&DAT_ram_4ff59e98,1,iVar2);
        if (iVar2 != 0) break;
        FUN_ram_4fc00248(&DAT_ram_4ff59e98,0);
        FUN_ram_4fc00254(&DAT_ram_4ff59e98,1);
        FUN_ram_4fc00250(&DAT_ram_4ff59e98,1,500,0);
        iVar2 = 1;
      }
      return;
    }
  }
  else {
    iVar1 = FUN_ram_4800340c(mhartid + 0x35,0x402,&LAB_ram_4ff3f3f2,&DAT_ram_4ff59e98,0);
    if (iVar1 == 0) {
      FUN_ram_4fc00248(&DAT_ram_4ff59e98,iVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar1,"./patches/idf555/port_systick.c",0x50,"vSystimerSetup",
                   "esp_intr_alloc(ETS_SYSTIMER_TARGET0_INTR_SOURCE + cpuid, ESP_INTR_FLAG_IRAM | level, SysTickIsrHandler, &systimer_hal, NULL)"
                  );
}


