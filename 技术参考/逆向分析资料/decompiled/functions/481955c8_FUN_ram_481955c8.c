/* Firmware entry: 0x481955c8 */

int FUN_ram_481955c8(uint *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)","basic_string_view::substr",
                     param_2);
  }
  uVar1 = *param_1 - param_2;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  uVar3 = param_5;
  if (uVar1 < param_5) {
    uVar3 = uVar1;
  }
  if ((uVar3 == 0) || (iVar2 = FUN_ram_4ff4511a(param_1[1] + param_2,param_4), iVar2 == 0)) {
    iVar2 = uVar1 - param_5;
  }
  return iVar2;
}


