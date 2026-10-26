/* Firmware entry: 0x4819da38 */

uint FUN_ram_4819da38(undefined4 param_1,uint *param_2,byte *param_3,int param_4)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (uint *)0x0) {
    uVar1 = 0;
    if ((param_3 != (byte *)0x0) && (uVar1 = 0xfffffffe, param_4 != 0)) {
      uVar1 = (uint)(*param_3 != 0);
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((param_3 != (byte *)0x0) && (uVar1 = 0xfffffffe, param_4 != 0)) {
    *param_2 = (uint)*param_3;
    return (uint)(*param_3 != 0);
  }
  return uVar1;
}


