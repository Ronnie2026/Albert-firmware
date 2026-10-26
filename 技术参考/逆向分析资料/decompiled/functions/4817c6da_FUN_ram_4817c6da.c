/* Firmware entry: 0x4817c6da */

void FUN_ram_4817c6da(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = param_2 + 0x1c;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  } while (param_2 != puVar4);
  *param_1 = *param_2;
  return;
}


