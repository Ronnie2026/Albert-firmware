/* Firmware entry: 0x48156784 */

undefined4 FUN_ram_48156784(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar4 = DAT_ram_4ff6e250;
  do {
    piVar1 = piVar4;
    if (piVar1 == (int *)0x0) {
      return 0x105;
    }
    piVar4 = (int *)piVar1[1];
  } while (*piVar1 != param_1);
  piVar3 = DAT_ram_4ff6e250;
  if (DAT_ram_4ff6e250 != piVar1) {
    do {
      piVar2 = piVar3;
      piVar3 = (int *)piVar2[1];
    } while (piVar3 != piVar1);
    piVar2[1] = (int)piVar4;
    piVar4 = DAT_ram_4ff6e250;
  }
  DAT_ram_4ff6e250 = piVar4;
  if (DAT_ram_4ff6e24c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_netif_objects.c",0x3b,"esp_netif_remove_from_list_unsafe",
                     "s_esp_netif_counter > 0");
  }
  DAT_ram_4ff6e24c = DAT_ram_4ff6e24c + -1;
  thunk_FUN_ram_4ff209c6();
  return 0;
}


