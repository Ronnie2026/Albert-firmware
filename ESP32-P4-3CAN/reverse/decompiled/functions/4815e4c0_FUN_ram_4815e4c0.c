/* Firmware entry: 0x4815e4c0 */

void FUN_ram_4815e4c0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  size_t sVar2;
  char *__s;
  uint uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (char *)0x0) {
    uStack_18 = param_3;
    uStack_14 = param_4;
    uStack_10 = param_5;
    uStack_c = param_6;
    uStack_8 = param_7;
    uStack_4 = param_8;
    sVar2 = strlen(param_2);
    uVar1 = sVar2 << 1;
    if ((int)(sVar2 << 1) < 0x10) {
      uVar1 = 0x10;
    }
    __s = (char *)FUN_ram_4815e5c8(uVar1 + 2);
    memset(__s,0,uVar1 + 2);
    while( true ) {
      uVar3 = FUN_ram_4819afa6(__s,uVar1 + 1,param_2,&uStack_18);
      sVar2 = strlen(__s);
      if (sVar2 < uVar1) break;
      if ((int)uVar3 <= (int)uVar1) {
        uVar3 = uVar1 << 1;
      }
      thunk_FUN_ram_4ff209c6(__s);
      __s = (char *)FUN_ram_4815e5c8(uVar3 + 2);
      memset(__s,0,uVar3 + 2);
      uVar1 = uVar3;
    }
    FUN_ram_4815e46a(param_1,__s);
    thunk_FUN_ram_4ff209c6(__s);
  }
  return;
}


