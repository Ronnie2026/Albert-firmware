/* Firmware entry: 0x48001bb8 */

undefined4 FUN_ram_48001bb8(undefined4 param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = DAT_ram_4ff6d998;
  if (DAT_ram_4ff6d998 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    while (iVar2 = FUN_ram_4ff453ae(param_1,(int)piVar1 + 5), iVar2 != 0) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return 0;
      }
    }
    uVar3 = 1;
    *param_2 = (uint)*(byte *)(piVar1 + 1);
  }
  return uVar3;
}


