/* Firmware entry: 0x48064bd0 */

undefined4 FUN_ram_48064bd0(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 2;
  while( true ) {
    fence();
    if ((*param_1 & 1) == 0) {
      uVar6 = param_1[2];
      uVar5 = param_1[3];
      uVar1 = param_1[4];
      uVar4 = param_1[5];
      uVar3 = param_1[6];
      fence();
      if (*param_1 == *param_1) {
        *param_2 = param_1[1];
        param_2[1] = uVar6;
        param_2[2] = uVar5;
        param_2[3] = uVar1;
        param_2[4] = uVar4;
        param_2[5] = uVar3;
        return 1;
      }
    }
    if (iVar2 == 1) break;
    iVar2 = 1;
  }
  return 0;
}


