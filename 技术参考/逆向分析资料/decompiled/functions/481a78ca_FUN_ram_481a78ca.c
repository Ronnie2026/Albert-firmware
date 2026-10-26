/* Firmware entry: 0x481a78ca */

/* WARNING: Removing unreachable block (ram,0x481a7908) */

void FUN_ram_481a78ca(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48130278();
  FUN_ram_48130342();
  FUN_ram_4812fe80();
  iVar1 = FUN_ram_4ff3e458(FUN_ram_481a779a,&DAT_ram_481b35f8,0x1000,0,1,0,0);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("app_startup.c",0x56,"esp_startup_start_app","res == pdTRUE");
  }
  FUN_ram_4ff3e638();
  return;
}


