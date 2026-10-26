/* Firmware entry: 0x4813450a */

void FUN_ram_4813450a(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4814e762();
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar2[1] = param_1[1];
  }
  puVar1 = (undefined4 *)param_1[1];
  if (DAT_ram_4ff6e180 == param_1) {
    if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x73a,"lwip_unlink_select_cb",
                       "select_cb->prev == NULL");
    }
  }
  else {
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x73d,"lwip_unlink_select_cb",
                       "select_cb->prev != NULL");
    }
    *puVar1 = piVar2;
    piVar2 = DAT_ram_4ff6e180;
  }
  DAT_ram_4ff6e180 = piVar2;
  DAT_ram_4ff6e184 = DAT_ram_4ff6e184 + 1;
  FUN_ram_4814e79e();
  return;
}


