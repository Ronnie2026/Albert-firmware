/* Firmware entry: 0x481914fe */

undefined4 FUN_ram_481914fe(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4819bfb6(param_1,3,0);
  if ((int)uVar1 < 0) {
    uVar3 = FUN_ram_4ff44d14();
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    uVar5 = FUN_ram_4819b6f4(*puVar4);
    FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: [sock=%d] get file flags error: %s\n",uVar3,
                     &DAT_ram_481e1b30,param_1,uVar5);
  }
  else {
    if (param_2 == 0) {
      uVar1 = uVar1 & 0xffffbfff;
    }
    else {
      uVar1 = uVar1 | 0x4000;
    }
    iVar2 = FUN_ram_4819bfb6(param_1,4,uVar1);
    if (-1 < iVar2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar3 = FUN_ram_4ff44d14(0);
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    uVar5 = FUN_ram_4819b6f4(*puVar4);
    FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,
                     "E (%lu) %s: [sock=%d] set blocking/nonblocking error: %s\n",uVar3,
                     &DAT_ram_481e1b30,param_1,uVar5);
  }
  return 0x8005;
}


