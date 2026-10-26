/* Firmware entry: 0x4ff35f94 */

undefined4
FUN_ram_4ff35f94(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_38;
  int aiStack_34 [3];
  undefined1 auStack_28 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = false;
  iStack_38 = param_5;
  aiStack_34[0] = param_1;
  while( true ) {
    FUN_ram_4ff3ec14(aiStack_34[0] + 0x68,0xffffffff);
    iVar2 = (**(code **)(aiStack_34[0] + 0xc))(aiStack_34[0],param_4);
    iVar3 = aiStack_34[0];
    if (iVar2 == 1) {
      if (param_3 == (undefined4 *)0x0) {
        (**(code **)(aiStack_34[0] + 0x10))(aiStack_34[0],param_2,param_4);
        if (*(int *)(aiStack_34[0] + 100) == 0) {
          if ((*(int *)(aiStack_34[0] + 0x50) != 0) &&
             (iVar3 = FUN_ram_4ff3d1ec(aiStack_34[0] + 0x50), iVar3 == 1)) {
            FUN_ram_4ff3ef0e();
          }
          FUN_ram_4ff3ee10(aiStack_34[0] + 0x68);
        }
        else {
          FUN_ram_4ff3ee10(aiStack_34[0] + 0x68);
          FUN_ram_4ff3afa2(*(undefined4 *)(aiStack_34[0] + 100),aiStack_34,0,0);
        }
      }
      else {
        uVar4 = FUN_ram_4ff3596e(aiStack_34[0],param_4);
        *param_3 = uVar4;
        FUN_ram_4ff3ee10(iVar3 + 0x68);
      }
      return 1;
    }
    if (iStack_38 == 0) break;
    if (!bVar1) {
      FUN_ram_4ff3d530(auStack_28);
    }
    iVar3 = FUN_ram_4ff3d546(auStack_28,&iStack_38);
    if (iVar3 != 0) {
      FUN_ram_4ff3ee10(aiStack_34[0] + 0x68);
      return 0;
    }
    bVar1 = true;
    FUN_ram_4ff3d026(aiStack_34[0] + 0x3c,iStack_38);
    FUN_ram_4ff3ef0e();
    FUN_ram_4ff3ee10(aiStack_34[0] + 0x68);
  }
  FUN_ram_4ff3ee10(aiStack_34[0] + 0x68);
  return 0;
}


