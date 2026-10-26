/* Firmware entry: 0x48191058 */

void FUN_ram_48191058(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_1[6];
  memset(param_1,0,0x20);
  param_1[6] = uVar2;
  *param_1 = param_2 & 3;
  iVar1 = 0x15;
  if ((param_2 != 0) && (iVar1 = 2, param_2 == 1)) {
    iVar1 = 5;
  }
  *param_1 = *param_1 & 0xfffe03ff | iVar1 << 10;
  return;
}


