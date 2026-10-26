/* Firmware entry: 0x481795ea */

undefined4 FUN_ram_481795ea(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481791c8();
  if ((((iVar1 != 0) || (iVar1 = FUN_ram_48179574(param_2), iVar1 != 0)) ||
      (iVar1 = FUN_ram_4818023e(param_1 + 8,param_2 + 8), iVar1 != 0)) ||
     (iVar1 = FUN_ram_4818023e(param_1 + 0x10,param_2 + 0x10), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 0xffffbe00;
  }
  return uVar2;
}


