/* Firmware entry: 0x4815cdc6 */

undefined4 FUN_ram_4815cdc6(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0x1102;
    }
    uStack_44 = 0;
    iVar2 = FUN_ram_4815af12(iVar1,param_2,0xff,param_3,&uStack_44,&uStack_40,0xff);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uStack_3f;
  }
  return 0;
}


