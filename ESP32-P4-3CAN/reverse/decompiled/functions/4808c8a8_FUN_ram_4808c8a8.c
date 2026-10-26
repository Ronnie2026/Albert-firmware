/* Firmware entry: 0x4808c8a8 */

void FUN_ram_4808c8a8(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_3 != 0) && (param_4 != 0)) && (iVar1 = FUN_ram_4808c696(), iVar1 != 0)) &&
     ((char)param_1[10] != '\0')) {
    uVar2 = param_1[2];
    if ((uVar2 <= (uint)param_1[1]) && (param_4 < param_1[1] - uVar2)) {
      FUN_ram_4ff45158(*param_1 + uVar2,param_3,param_4);
      iVar1 = param_1[2];
      param_1[2] = param_4 + iVar1;
      *(undefined1 *)(*param_1 + param_4 + iVar1) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


