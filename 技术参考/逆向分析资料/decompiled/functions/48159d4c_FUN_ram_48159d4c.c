/* Firmware entry: 0x48159d4c */

int FUN_ram_48159d4c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  int *apiStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815d7e0(auStack_28);
  uVar2 = FUN_ram_4815d276();
  iVar3 = FUN_ram_4815d546(uVar2,param_1,param_2,param_3,apiStack_24);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_ram_4ff20824(0x14,2,0x1400,0x1800);
    if (piVar4 == (int *)0x0) {
      if (apiStack_24[0] != (int *)0x0) {
        (**(code **)(*apiStack_24[0] + 4))();
      }
      iVar3 = 0x101;
    }
    else {
      iVar5 = DAT_ram_4ff6e26c + 1;
      piVar4[2] = (int)apiStack_24[0];
      piVar4[4] = param_1;
      DAT_ram_4ff6e26c = iVar5;
      piVar4[3] = iVar5;
      if (DAT_ram_4ff6d41c != (int *)0x0) {
        DAT_ram_4ff6d41c[1] = (int)piVar4;
      }
      piVar1 = DAT_ram_4ff6d418;
      piVar4[1] = 0;
      *piVar4 = (int)DAT_ram_4ff6d41c;
      if (piVar1 == (int *)0x0) {
        DAT_ram_4ff6d418 = piVar4;
      }
      DAT_ram_4ff6d420 = DAT_ram_4ff6d420 + 1;
      DAT_ram_4ff6d41c = piVar4;
      *param_4 = iVar5;
    }
  }
  FUN_ram_4815d7f0(auStack_28);
  return iVar3;
}


