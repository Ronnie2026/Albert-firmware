/* Firmware entry: 0x48145ee8 */

undefined4 FUN_ram_48145ee8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48147052();
  if (iVar1 != 0) {
    uVar2 = FUN_ram_48145bd0(iVar1,param_1,param_2,5);
    return uVar2;
  }
  return 0xfffffffc;
}


