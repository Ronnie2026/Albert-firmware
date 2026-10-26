/* Firmware entry: 0x4819b728 */

void FUN_ram_4819b728(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_20 = 0xffffffff;
  uStack_1c = 0xffffffff;
  uVar1 = FUN_ram_4ff3e8de();
  iVar2 = FUN_ram_48006106(uVar1,&local_20,0);
  if (iVar2 < 0) {
    local_20 = 0xffffffff;
    uStack_1c = 0xffffffff;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_20;
    param_1[1] = uStack_1c;
  }
  return;
}


