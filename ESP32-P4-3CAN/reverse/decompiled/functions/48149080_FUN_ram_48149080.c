/* Firmware entry: 0x48149080 */

undefined4
FUN_ram_48149080(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((param_3 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 0)) &&
      ((param_2[1] == 0 && (param_2[2] == 0)))) && (param_2[3] == 0)) {
    param_2 = (int *)FUN_ram_481482f0(param_7,param_3);
    if (param_2 != (int *)0x0) {
      if (((*param_2 != 0) || (param_2[1] != 0)) || ((param_2[2] != 0 || (param_2[3] != 0))))
      goto LAB_ram_4814909c;
    }
    return 0xfffffffc;
  }
LAB_ram_4814909c:
  uVar1 = FUN_ram_48148cbc(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


