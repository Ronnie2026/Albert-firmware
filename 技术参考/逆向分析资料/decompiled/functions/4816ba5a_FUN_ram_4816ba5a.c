/* Firmware entry: 0x4816ba5a */

int FUN_ram_4816ba5a(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4817697e(param_6);
  uVar2 = FUN_ram_48176d4c();
  *param_3 = uVar2;
  FUN_ram_481769e8(auStack_2c);
  iVar3 = FUN_ram_48176b18(auStack_2c,uVar1,0);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_48176bfe(auStack_2c);
    if (((iVar3 == 0) &&
        (iVar3 = FUN_ram_48176c62(auStack_2c,*(int *)(param_1 + 0x40) + 0x1b4,0x40), iVar3 == 0)) &&
       (iVar3 = FUN_ram_48176c62(auStack_2c,param_4,param_5), iVar3 == 0)) {
      iVar3 = FUN_ram_48176caa(auStack_2c,param_2);
      FUN_ram_48176a1a(auStack_2c);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      FUN_ram_48176a1a(auStack_2c);
    }
  }
  else {
    FUN_ram_48176a1a(auStack_2c);
  }
  FUN_ram_48170f7a(param_1,2,0x50);
  return iVar3;
}


