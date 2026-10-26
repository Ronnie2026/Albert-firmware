/* Firmware entry: 0x481a3b84 */

undefined4 FUN_ram_481a3b84(void)

{
  undefined4 uVar1;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e170 != 0) {
    return 0x103;
  }
  uStack_24 = DAT_ram_482363d4;
  puStack_20 = PTR_s_sys_evt_ram_481d7434_ram_482363d8;
  uStack_1c = DAT_ram_482363dc;
  uStack_18 = DAT_ram_482363e0;
  uStack_14 = DAT_ram_482363e4;
  uVar1 = FUN_ram_481a4282(&uStack_24,&DAT_ram_4ff6e170);
  return uVar1;
}


