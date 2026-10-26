/* Firmware entry: 0x4817b620 */

undefined4
FUN_ram_4817b620(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4817b566(param_1,param_3,param_4);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4817b4e8(param_1);
    if (iVar2 == 0) {
      uVar3 = 0xffffffe0;
    }
    else {
      FUN_ram_4813227a();
      FUN_ram_4813234a(1);
      param_1[1] = 0;
      uVar1 = FUN_ram_4818b75c(param_1 + 2,*param_1,param_2);
      param_1[1] = uVar1;
      FUN_ram_4818b7f2(0);
      uVar3 = FUN_ram_481868c6(param_1,param_3,param_4,0x10,0);
      FUN_ram_4813234a(0);
      FUN_ram_4813228a();
    }
  }
  else {
    uVar3 = 0xffffffdf;
  }
  return uVar3;
}


