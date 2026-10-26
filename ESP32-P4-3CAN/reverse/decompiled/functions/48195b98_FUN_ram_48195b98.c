/* Firmware entry: 0x48195b98 */

void FUN_ram_48195b98(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar3 = (char *)0xffffffff;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    pcVar3 = param_2 + sVar1;
  }
  uVar2 = FUN_ram_48195b34(param_2,pcVar3,param_3,0);
  *param_1 = uVar2;
  return;
}


