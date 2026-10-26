/* Firmware entry: 0x4814d2c2 */

int FUN_ram_4814d2c2(int *param_1,int param_2,int param_3,ushort *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    iVar3 = *param_1;
    iVar1 = FUN_ram_4814d1e6(param_1,param_3,~*param_4 & 0xff,1,0);
    if ((((iVar1 == 0) &&
         (iVar1 = FUN_ram_4814d1e6(param_1,param_3,(int)~(uint)*param_4 >> 8 & 0xff,1,0), iVar1 == 0
         )) && (iVar1 = FUN_ram_4814d1e6(param_1,param_3,0x7e,0,0), iVar1 == 0)) &&
       ((*(short *)(param_3 + 10) == 0 ||
        (uVar2 = (*(code *)param_1[1])
                           (iVar3,*(undefined4 *)(param_3 + 4),*(short *)(param_3 + 10),
                            *(undefined4 *)(iVar3 + 0x18)), *(ushort *)(param_3 + 10) == uVar2)))) {
      iVar1 = thunk_FUN_ram_4ff3c5d4();
      param_1[2] = iVar1;
      FUN_ram_4813ac74(param_3);
      return 0;
    }
    param_2 = -0xc;
  }
  param_1[2] = 0;
  FUN_ram_4813ac74(param_3);
  return param_2;
}


