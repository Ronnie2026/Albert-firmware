/* Firmware entry: 0x4819af42 */

int FUN_ram_4819af42(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined1 *apuStack_78 [2];
  int iStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined1 *puStack_68;
  int iStack_64;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 < 0) {
    *param_1 = 0x8b;
    iVar1 = -1;
  }
  else {
    uStack_6c = 0x208;
    iStack_70 = 0;
    if (param_3 != 0) {
      iStack_70 = param_3 + -1;
    }
    uStack_6a = 0xffff;
    apuStack_78[0] = param_2;
    puStack_68 = param_2;
    iStack_64 = iStack_70;
    iVar1 = FUN_ram_481a0866(param_1,apuStack_78,param_4,param_5);
    if (iVar1 < -1) {
      *param_1 = 0x8b;
    }
    if (param_3 != 0) {
      *apuStack_78[0] = 0;
    }
  }
  return iVar1;
}


