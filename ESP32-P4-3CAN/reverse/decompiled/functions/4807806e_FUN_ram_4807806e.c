/* Firmware entry: 0x4807806e */

undefined4 FUN_ram_4807806e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_48129c8a();
  iVar2 = FUN_ram_48129cb4();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_ram_48129ca2(uVar1);
  *(bool *)param_3 = iVar2 != 0;
  return 1;
}


