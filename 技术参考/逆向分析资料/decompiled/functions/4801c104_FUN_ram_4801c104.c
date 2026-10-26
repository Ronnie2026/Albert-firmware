/* Firmware entry: 0x4801c104 */

undefined4 FUN_ram_4801c104(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48011a1c(&DAT_ram_4ff6db9c);
  if (iVar1 == 0) {
    DAT_ram_4ff6db9c = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_if","E (%lu) %s: Failed to close driver interface\n\n",uVar2,
                     "serial_if");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


