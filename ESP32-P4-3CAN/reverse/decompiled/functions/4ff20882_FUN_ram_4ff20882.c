/* Firmware entry: 0x4ff20882 */

int FUN_ram_4ff20882(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puStack_44;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_44 = &local_14;
  uVar2 = 0x1000;
  local_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  while( true ) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        return 0;
      }
      FUN_ram_4ff206ca(param_2,uVar2,"heap_caps_calloc_prefer");
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar2 = *puStack_44;
    puStack_44 = puStack_44 + 1;
    iVar1 = FUN_ram_4ff20bfa(param_1,param_2,uVar2);
    if (iVar1 != 0) break;
    param_3 = param_3 + -1;
    if (param_2 == 0) {
      return 0;
    }
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return iVar1;
}


