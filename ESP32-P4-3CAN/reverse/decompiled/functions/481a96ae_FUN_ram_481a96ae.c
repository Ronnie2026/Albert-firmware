/* Firmware entry: 0x481a96ae */

void FUN_ram_481a96ae(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_2,0,0x1c);
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
    }
    uVar2 = FUN_ram_4ff43982(param_1[4]);
    FUN_ram_481a9814(uVar2,&LAB_ram_481a95f8,param_2);
    iVar8 = param_2[4];
    iVar3 = FUN_ram_4ff43478();
    iVar1 = param_1[3];
    iVar4 = FUN_ram_4ff44baa(param_1[4]);
    iVar7 = param_1[1];
    iVar6 = param_1[2];
    iVar5 = param_1[4];
    param_2[1] = ((iVar1 - iVar7) - iVar4) - iVar8 * iVar3;
    *param_2 = iVar7;
    param_2[3] = iVar6;
    iVar3 = FUN_ram_481a98aa(iVar5,param_2[2]);
    iVar1 = *param_1;
    param_2[2] = iVar3;
    if (iVar1 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(iVar1);
      return;
    }
  }
  return;
}


