/* Firmware entry: 0x4ff20824 */

int FUN_ram_4ff20824(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puStack_34;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_34 = &local_18;
  uVar2 = 0x1000;
  local_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  while( true ) {
    if (param_2 == 0) {
      if (param_1 == 0) {
        return 0;
      }
      FUN_ram_4ff206ca(param_1,uVar2,"heap_caps_malloc_prefer");
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar2 = *puStack_34;
    puStack_34 = puStack_34 + 1;
    iVar1 = FUN_ram_4ff20ae8(param_1,uVar2);
    if (iVar1 != 0) break;
    param_2 = param_2 + -1;
    if (param_1 == 0) {
      return 0;
    }
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return iVar1;
}


