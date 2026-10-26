/* Firmware entry: 0x4ff4248c */

void FUN_ram_4ff4248c(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)param_1[1];
  iVar2 = FUN_ram_4ff20626();
  if (iVar2 != 0) {
    puVar1[0xf] = puVar1[0xf] & 0xfffffffd;
  }
  puVar1[7] = puVar1[7] & 0x3ffffff | 0x5c000000;
  puVar1[6] = puVar1[6] | 0x40000000;
  puVar1[1] = param_2 & 0xffffff;
  puVar1[2] = 0;
  *puVar1 = *puVar1 | 0x1000000;
  if ((param_1[6] & 1U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4ff424f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1);
    return;
  }
  return;
}


