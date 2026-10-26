/* Firmware entry: 0x48181214 */

undefined4 FUN_ram_48181214(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4817fd64(param_1,(param_2 >> 2) + (uint)((param_2 & 3) != 0));
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = FUN_ram_48181ee2(*param_1,*(undefined2 *)((int)param_1 + 6),param_2,param_3,param_4);
      return uVar2;
    }
  }
  else {
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}


