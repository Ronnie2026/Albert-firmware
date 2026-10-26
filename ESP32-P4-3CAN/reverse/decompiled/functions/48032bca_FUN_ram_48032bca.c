/* Firmware entry: 0x48032bca */

void FUN_ram_48032bca(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = &local_20;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_48132f46(&local_20,0x10);
  do {
    FUN_ram_4819ad74(param_1,3,&DAT_ram_481c3b70,*(undefined1 *)puVar1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    param_1 = param_1 + 2;
  } while (puVar1 != (undefined4 *)&stack0xfffffff0);
  return;
}


