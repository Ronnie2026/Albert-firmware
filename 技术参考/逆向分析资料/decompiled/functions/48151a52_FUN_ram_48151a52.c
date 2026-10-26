/* Firmware entry: 0x48151a52 */

void FUN_ram_48151a52(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                     uint *param_5)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_5 != (uint *)0x0) && ((char)param_5[5] == '\x06')) {
    FUN_ram_481519fc();
    return;
  }
  uVar1 = (*param_5 >> 0x10) + (*param_5 & 0xffff) + (*param_4 >> 0x10) + (*param_4 & 0xffff);
  uVar1 = (uVar1 >> 0x10) + (uVar1 & 0xffff);
  FUN_ram_48151944(param_1,param_2,param_3,(uVar1 & 0xffff) + (uVar1 >> 0x10));
  return;
}


