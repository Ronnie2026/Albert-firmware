/* Firmware entry: 0x48180a3c */

int FUN_ram_48180a3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = 0;
  uStack_24 = 0x10001;
  puStack_28 = &uStack_2c;
  iVar1 = FUN_ram_4818023e(param_3,&puStack_28);
  if (iVar1 < 0) {
    return -10;
  }
  iVar2 = FUN_ram_481805fa(0,param_1,param_2,param_3);
  iVar1 = iVar2;
  while( true ) {
    if (iVar1 != 0) {
      return iVar1;
    }
    uStack_2c = 0;
    uStack_24 = 0x10001;
    puStack_28 = &uStack_2c;
    iVar1 = FUN_ram_4818023e(param_1,&puStack_28);
    if (-1 < iVar1) break;
    iVar1 = FUN_ram_481804de(param_1,param_1,param_3,1);
  }
  do {
    iVar1 = FUN_ram_4818023e(param_1,param_3);
    if (iVar1 < 0) {
      return iVar2;
    }
    iVar1 = FUN_ram_481804de(param_1,param_1,param_3,0xffffffff);
  } while (iVar1 == 0);
  return iVar1;
}


