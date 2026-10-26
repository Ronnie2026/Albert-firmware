/* Firmware entry: 0x4818a6b4 */

int FUN_ram_4818a6b4(uint *param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4817f40e(param_1,param_2,param_3 + 1,param_4 | 0xa0);
  if (iVar2 == 0) {
    uVar3 = *param_1;
    *param_3 = param_4 | 0xa0;
    param_3[2] = uVar3;
    iVar1 = uVar3 + param_3[1];
    iVar2 = FUN_ram_4817f40e(param_1,iVar1,&iStack_14,0x30);
    if (iVar2 == 0) {
      if (iVar1 == *param_1 + iStack_14) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x2566;
    }
  }
  return iVar2 + -0x2500;
}


