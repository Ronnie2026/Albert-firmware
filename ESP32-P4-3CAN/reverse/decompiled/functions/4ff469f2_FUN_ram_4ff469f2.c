/* Firmware entry: 0x4ff469f2 */

void FUN_ram_4ff469f2(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff4766a(param_1,auStack_14);
  if (iVar1 == 0) {
    *param_2 = (auStack_14[0] & 2) << 1;
  }
  return;
}


