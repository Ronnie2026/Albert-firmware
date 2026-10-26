/* Firmware entry: 0x480a10f0 */

int FUN_ram_480a10f0(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1;
  uVar3 = uVar1;
  if (param_2 <= uVar1) {
    uVar3 = param_2;
  }
  if ((uVar3 == 0) || (iVar2 = FUN_ram_4ff4511a(param_1[1],param_3), iVar2 == 0)) {
    iVar2 = uVar1 - param_2;
  }
  return iVar2;
}


