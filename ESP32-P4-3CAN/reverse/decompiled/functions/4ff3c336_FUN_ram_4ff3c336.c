/* Firmware entry: 0x4ff3c336 */

char FUN_ram_4ff3c336(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
    cVar1 = '\0';
    if ((DAT_ram_4ff6da3c != param_1) && (DAT_ram_4ff6da40 != param_1)) {
      puVar2 = *(undefined4 **)(param_1 + 0x14);
      if ((puVar2 == DAT_ram_4ff6da38) || (puVar2 == DAT_ram_4ff6da34)) {
        cVar1 = '\x02';
      }
      else if (puVar2 == &DAT_ram_4ff58bac) {
        cVar1 = '\x02';
        if (*(int *)(param_1 + 0x28) == 0) {
          cVar1 = (*(char *)(param_1 + 0x15c) != '\x01') + '\x02';
        }
      }
      else if (puVar2 == &DAT_ram_4ff58bc0) {
        cVar1 = '\x04';
      }
      else {
        cVar1 = (-(puVar2 == (undefined4 *)0x0) & 3U) + 1;
      }
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tasks.c",0x660,"eTaskGetState",&DAT_ram_481b3aa0);
}


