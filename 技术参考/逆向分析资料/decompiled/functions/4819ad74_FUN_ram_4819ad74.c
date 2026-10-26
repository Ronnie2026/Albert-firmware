/* Firmware entry: 0x4819ad74 */

int FUN_ram_4819ad74(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *apuStack_98 [2];
  int iStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined1 *puStack_88;
  int iStack_84;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_4ff3e8de();
  if (param_2 < 0) {
    *puVar1 = 0x8b;
    iVar2 = -1;
  }
  else {
    uStack_8c = 0x208;
    iStack_90 = 0;
    if (param_2 != 0) {
      iStack_90 = param_2 + -1;
    }
    uStack_8a = 0xffff;
    apuStack_98[0] = param_1;
    puStack_88 = param_1;
    iStack_84 = iStack_90;
    iVar2 = FUN_ram_481a0866(puVar1,apuStack_98,param_3);
    if (iVar2 < -1) {
      *puVar1 = 0x8b;
    }
    if (param_2 != 0) {
      *apuStack_98[0] = 0;
    }
  }
  return iVar2;
}


