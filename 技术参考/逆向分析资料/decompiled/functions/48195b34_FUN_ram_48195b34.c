/* Firmware entry: 0x48195b34 */

undefined * FUN_ram_48195b34(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != param_2) {
    if (param_1 != 0) {
      iVar1 = FUN_ram_48195aa0(param_2 - param_1,0);
      FUN_ram_48195a80((undefined *)(iVar1 + 0xc),param_1,param_2);
      FUN_ram_48195a86(iVar1,param_2 - param_1);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (undefined *)(iVar1 + 0xc);
    }
    FUN_ram_481950b6("basic_string::_S_construct null not valid");
  }
  return &DAT_ram_4ff6d650;
}


