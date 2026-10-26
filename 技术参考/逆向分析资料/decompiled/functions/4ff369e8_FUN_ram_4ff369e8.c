/* Firmware entry: 0x4ff369e8 */

undefined4 FUN_ram_4ff369e8(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 2) {
    param_1 = param_1 + 3 & 0xfffffffc;
  }
  iVar1 = FUN_ram_4ff206d8(0x70,param_3);
  iVar2 = FUN_ram_4ff206d8(param_1,param_3);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    uVar3 = FUN_ram_4ff363ec(param_1,param_2,iVar2,iVar1);
    return uVar3;
  }
  FUN_ram_4ff209c6(iVar1);
  FUN_ram_4ff209c6(iVar2);
  return 0;
}


