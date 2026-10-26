/* Firmware entry: 0x48030646 */

void FUN_ram_48030646(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022();
  FUN_ram_4802af5a(param_1,0x5b);
  FUN_ram_4802afaa(param_1,*param_3);
  iVar1 = 1;
  do {
    param_3 = param_3 + 1;
    FUN_ram_4802af5a(param_1,0x2c);
    iVar1 = iVar1 + 1;
    FUN_ram_4802afaa(param_1,*param_3);
  } while (iVar1 != 8);
  FUN_ram_4802af5a(param_1,0x5d);
  return;
}


