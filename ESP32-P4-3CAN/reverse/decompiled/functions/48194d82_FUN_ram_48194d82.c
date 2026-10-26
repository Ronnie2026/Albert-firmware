/* Firmware entry: 0x48194d82 */

void FUN_ram_48194d82(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_30 [9];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = local_30;
  local_30[0] = DAT_ram_4823aca0;
  local_30[1] = DAT_ram_4823aca4;
  local_30[2] = DAT_ram_4823aca8;
  local_30[3] = DAT_ram_4823acac;
  local_30[4] = DAT_ram_4823acb0;
  local_30[5] = DAT_ram_4823acb4;
  local_30[6] = DAT_ram_4823acb8;
  local_30[7] = DAT_ram_4823acbc;
  do {
    FUN_ram_4ff45158(*piVar2,param_1,piVar2[1]);
    fence();
    piVar1 = piVar2 + 1;
    piVar2 = piVar2 + 2;
    param_1 = param_1 + *piVar1;
  } while (piVar2 != local_30 + 8);
  return;
}


