/* Firmware entry: 0x4814246a */

void FUN_ram_4814246a(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_4813956e(0xc);
  puVar3 = DAT_ram_4ff6e204;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/timeouts.c",0xc2,"sys_timeout_abs",
                     "sys_timeout: timeout != NULL, pool MEMP_SYS_TIMEOUT is empty");
  }
  *puVar1 = 0;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  puVar1[1] = param_1;
  if (puVar3 != (undefined4 *)0x0) {
    if (-1 < param_1 - puVar3[1]) {
      do {
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar2;
        if (puVar3 == (undefined4 *)0x0) break;
      } while (-1 < param_1 - puVar3[1]);
      *puVar1 = puVar3;
      *puVar2 = puVar1;
      return;
    }
    *puVar1 = puVar3;
  }
  DAT_ram_4ff6e204 = puVar1;
  return;
}


