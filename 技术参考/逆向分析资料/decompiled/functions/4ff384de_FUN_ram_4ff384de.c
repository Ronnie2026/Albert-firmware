/* Firmware entry: 0x4ff384de */

void FUN_ram_4ff384de(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff39904();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_ram_4ff44cee();
  ets_printf(s_E___lu___s__Core_dump_write_fail_ram_4ff5593c,uVar2,
             s_Pesp_core_dump_common_ram_4ff5831b + 1,iVar1);
  return;
}


