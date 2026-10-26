/* Firmware entry: 0x48010196 */

void FUN_ram_48010196(uint param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: set_transport_state: %u\n",uVar1,"transport",param_1);
  if (param_1 < 2) {
    DAT_ram_4ff6db4c = (undefined1)param_1;
  }
  else if (param_1 == 2) {
    FUN_ram_4800fd0e();
    return;
  }
  return;
}


