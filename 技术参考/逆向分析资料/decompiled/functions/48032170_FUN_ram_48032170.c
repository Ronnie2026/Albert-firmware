/* Firmware entry: 0x48032170 */

void FUN_ram_48032170(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6de50 = 0;
  DAT_ram_4ff6de5c = 1;
  fence();
  DAT_ram_4ff6df34 = 0;
  fence();
  fence();
  DAT_ram_4ff6df38 = 0;
  fence();
  fence();
  DAT_ram_4ff47ec4 = 1;
  fence();
  fence();
  DAT_ram_4ff6df30 = 1;
  fence();
  DAT_ram_4ff6de54 = param_1 + 5000;
  DAT_ram_4ff6de58 = 1;
  fence();
  if (DAT_ram_4ff6deb4 == '\0') {
    if (DAT_ram_4ff6df2c != (int *)0x0) {
      (**(code **)(*DAT_ram_4ff6df2c + 0x134))();
    }
    iVar1 = FUN_ram_480320c0();
    if (iVar1 != 0) {
      if (param_2 == (char *)0x0) {
        param_2 = "restore";
      }
      FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                       "[FATAL] OTA terminal rollback deferred to pre-CAN boot (%s)\n",param_2);
                    /* WARNING: Subroutine does not return */
      FUN_ram_480007da();
    }
    if (param_2 == (char *)0x0) {
      param_2 = "restore";
    }
    FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                     "[FATAL] OTA deferred rollback marker unavailable (%s); physical TX remains disabled and rollback will retry\n"
                     ,param_2);
  }
  else {
    iVar1 = FUN_ram_480320c0();
    if (iVar1 != 0) {
      iVar1 = FUN_ram_4812dbc2();
      if (iVar1 == 0) {
        FUN_ram_4802e2a4();
      }
      if (param_2 == (char *)0x0) {
        param_2 = "restore";
      }
      uVar2 = FUN_ram_480018de(iVar1);
      FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[FATAL] OTA terminal rollback retry (%s): %s\n",param_2,
                       uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_ram_480007da();
    }
    if (param_2 == (char *)0x0) {
      param_2 = "restore";
    }
    FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                     "[FATAL] OTA rollback marker unavailable (%s); remaining stopped and retrying\n"
                     ,param_2);
  }
  DAT_ram_4ff6de54 = param_1 + 1000;
  DAT_ram_4ff6de58 = 1;
  return;
}


