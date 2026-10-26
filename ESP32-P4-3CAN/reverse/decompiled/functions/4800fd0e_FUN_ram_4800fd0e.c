/* Firmware entry: 0x4800fd0e */

void FUN_ram_4800fd0e(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Base transport is set-up, TRANSPORT_TX_ACTIVE\n",uVar1
                   ,"transport");
  if (DAT_ram_4ff6db58 != (code *)0x0) {
    (*DAT_ram_4ff6db58)();
  }
  DAT_ram_4ff6db4c = 2;
  return;
}


