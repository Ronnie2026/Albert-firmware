/* Firmware entry: 0x48189e7e */

int FUN_ram_48189e7e(uint *param_1,int param_2,uint *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar2 = (byte *)*param_1;
  if (param_2 - (int)pbVar2 < 1) {
    return -0x22e0;
  }
  if ((*pbVar2 & 0x7f) != 2) {
    return -0x22e2;
  }
  *param_1 = (uint)(pbVar2 + 1);
  *param_3 = (uint)*pbVar2;
  iVar1 = FUN_ram_4817f2d4(param_1,param_2,param_3 + 1);
  if (iVar1 == 0) {
    uVar3 = *param_1;
    param_3[2] = uVar3;
    *param_1 = uVar3 + param_3[1];
    return 0;
  }
  return iVar1 + -0x2280;
}


