/* Firmware entry: 0x481425c0 */

void FUN_ram_481425c0(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = &DAT_ram_48236d50;
  do {
    uVar3 = *puVar1;
    if (0x3fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/timeouts.c",0x136,"sys_timeout",
                       "Timeout time too long, max is LWIP_UINT32_MAX/4 msecs");
    }
    iVar4 = thunk_FUN_ram_4ff3c5d4();
    puVar2 = puVar1 + 2;
    FUN_ram_4814246a(iVar4 + uVar3,&LAB_ram_481424f8,puVar1);
    puVar1 = puVar2;
  } while (puVar2 != (uint *)0x48236d68);
  return;
}


