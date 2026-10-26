/* Firmware entry: 0x481725d4 */

undefined4 FUN_ram_481725d4(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = 1;
  *param_1 = 0;
  FUN_ram_48173f5c(param_1 + 0xc);
  FUN_ram_4817fb86(param_1 + 0x6c);
  FUN_ram_48173f3a(param_1 + 0x74);
  FUN_ram_48173f3a(param_1 + 0x8c);
  FUN_ram_4817fb86(param_1 + 0xa4);
  iVar1 = FUN_ram_48176468(param_1 + 0xc,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffb180;
  }
  return uVar2;
}


