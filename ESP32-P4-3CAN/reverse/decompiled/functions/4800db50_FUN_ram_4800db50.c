/* Firmware entry: 0x4800db50 */

int FUN_ram_4800db50(char *param_1,size_t param_2,uint *param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int aiStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == (uint *)0x0) {
    return 0x102;
  }
  if ((*param_3 & 8) != 0) {
    return 0x102;
  }
  if (param_2 == 0xffffffff) {
    param_1 = (char *)0x0;
  }
  else {
    if (param_1 == (char *)0x0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x102;
    }
    sVar2 = strlen(param_1);
    if (param_2 != sVar2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x102;
    }
  }
  aiStack_24[0] = 0;
  iVar3 = FUN_ram_4800d6ea(param_3,aiStack_24);
  iVar1 = aiStack_24[0];
  if ((iVar3 == 0) &&
     (iVar3 = FUN_ram_4800d3be(param_1,aiStack_24[0],*param_3,param_4,param_5), iVar3 != 0)) {
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x30));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x2c));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x34));
    thunk_FUN_ram_4ff209c6(iVar1);
  }
  return iVar3;
}


