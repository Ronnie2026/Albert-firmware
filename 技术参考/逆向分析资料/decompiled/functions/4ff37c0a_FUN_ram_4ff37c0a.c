/* Firmware entry: 0x4ff37c0a */

void FUN_ram_4ff37c0a(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  iVar2 = param_1[0x22];
  param_2[2] = (int)s_Unknown_reason_ram_4ff54338;
  param_2[6] = iVar1;
  if (iVar2 == 0x19) {
    iVar1 = FUN_ram_4ff36d2e();
    *param_2 = iVar1;
    param_2[2] = (int)s_Cache_error_ram_4ff54348;
    param_2[4] = (int)FUN_ram_4ff37ad6;
    return;
  }
  if (iVar2 != 0x18) {
    if (iVar2 != 0x1018) {
      if (iVar2 == 0x1b) {
        iVar1 = FUN_ram_4ff36eb2();
        if (iVar1 == -1) {
          iVar1 = 0;
        }
        *param_2 = iVar1;
        param_2[2] = (int)s_Stack_protection_fault_ram_4ff54394;
        param_2[4] = (int)FUN_ram_4ff37a00;
      }
      return;
    }
    param_2[2] = (int)s_Interrupt_wdt_timeout_on_CPU1_ram_4ff54374;
    *param_2 = 1;
    param_2[1] = 1;
    return;
  }
  *param_2 = 0;
  param_2[2] = (int)s_Interrupt_wdt_timeout_on_CPU0_ram_4ff54354;
  param_2[1] = 1;
  return;
}


