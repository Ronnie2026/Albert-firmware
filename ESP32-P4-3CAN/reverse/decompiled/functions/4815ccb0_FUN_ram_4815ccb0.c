/* Firmware entry: 0x4815ccb0 */

undefined4 FUN_ram_4815ccb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_44;
  undefined1 uStack_40;
  char cStack_3f;
  undefined1 uStack_23;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 100) != 1) {
    return 0x1101;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0x1102;
    }
    uStack_44 = 0;
    iVar2 = FUN_ram_4815af12(iVar1,param_2,param_3,param_4,&uStack_44,&uStack_40,0xff);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (cStack_3f == 'H') {
    if (*(int *)(param_1 + 100) == 1) {
      uVar3 = FUN_ram_4815bb98(param_1,param_2,param_4,uStack_23);
      return uVar3;
    }
    return 0x1101;
  }
  uVar3 = FUN_ram_4815ac98(iVar1,uStack_44);
  return uVar3;
}


