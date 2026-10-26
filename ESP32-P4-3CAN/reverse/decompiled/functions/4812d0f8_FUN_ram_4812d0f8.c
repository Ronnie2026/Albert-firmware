/* Firmware entry: 0x4812d0f8 */

undefined4 FUN_ram_4812d0f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [276];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_120 = param_1;
  uStack_11c = param_2;
  iVar1 = thunk_FUN_ram_4812f3b2(param_3,&local_120,auStack_118);
  if (iVar1 == 0) {
    return 0;
  }
  return 0x1503;
}


