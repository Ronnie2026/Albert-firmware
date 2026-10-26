/* Firmware entry: 0x481a9ca2 */

void FUN_ram_481a9ca2(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return;
  }
  FUN_ram_4ff44c40();
  if ((*param_1 == '*') && (param_1[1] == '\0')) {
    FUN_ram_48001af0(param_2);
    FUN_ram_48001c0e();
    FUN_ram_48001e5c();
    FUN_ram_4ff44cc4();
    return;
  }
  iVar1 = FUN_ram_48001b1a(param_1,param_2);
  if (iVar1 == 0) {
    FUN_ram_4ff44cc4();
    return;
  }
  FUN_ram_48001ca6(param_1,param_2);
  FUN_ram_4ff44cc4();
  return;
}


