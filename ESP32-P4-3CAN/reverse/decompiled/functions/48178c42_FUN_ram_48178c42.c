/* Firmware entry: 0x48178c42 */

int FUN_ram_48178c42(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_34 = 0;
  uStack_30 = 0;
  iVar1 = FUN_ram_4817697e(param_6);
  if (iVar1 == 0) {
    iVar1 = -0x4080;
  }
  else {
    FUN_ram_481769e8(auStack_2c);
    iVar1 = FUN_ram_48176b18(auStack_2c,iVar1,0);
    if ((((iVar1 == 0) && (iVar1 = FUN_ram_48176bfe(auStack_2c), iVar1 == 0)) &&
        (iVar1 = FUN_ram_48176c62(auStack_2c,&uStack_34,8), iVar1 == 0)) &&
       ((iVar1 = FUN_ram_48176c62(auStack_2c,param_1,param_2), iVar1 == 0 &&
        (iVar1 = FUN_ram_48176c62(auStack_2c,param_3,param_4), iVar1 == 0)))) {
      iVar1 = FUN_ram_48176caa(auStack_2c,param_5);
    }
    FUN_ram_48176a1a(auStack_2c);
  }
  return iVar1;
}


