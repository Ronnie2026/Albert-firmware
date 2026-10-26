/* Firmware entry: 0x481606e6 */

int FUN_ram_481606e6(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = 0x84000000;
  bVar1 = -1 < (int)param_3;
  if (!bVar1) {
    uVar4 = 0x80000000;
    param_3 = param_3 & 0x7fffffff;
  }
  while( true ) {
    if (param_5 == 0) {
      return 0;
    }
    uVar2 = param_5 & 0xfffffffc;
    if (uVar2 == 0) break;
    iVar3 = FUN_ram_481604a4(param_1,param_2,param_3,uVar4,param_4,uVar2);
    param_5 = param_5 - uVar2;
    if (iVar3 != 0) {
      return iVar3;
    }
    param_4 = param_4 + uVar2;
    param_3 = param_3 + (-(uint)bVar1 & uVar2);
  }
  iVar3 = FUN_ram_481604a4(param_1,param_2,param_3,uVar4,param_4,param_5);
  if (iVar3 == 0) {
    return 0;
  }
  return iVar3;
}


