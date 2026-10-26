/* Firmware entry: 0x4ff305e4 */

undefined4 FUN_ram_4ff305e4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_ram_4ff47dac == 0) {
      uVar1 = 0x102;
    }
    else {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: %s(%d): invalid argument\n",uVar1,&DAT_ram_481e0c8c,"gdma_start",0x234
                );
      uVar1 = 0x102;
    }
  }
  else if ((*(byte *)(param_1 + 9) & 1) == 0) {
    piVar3 = (int *)*param_1;
    iVar2 = *piVar3;
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(param_1 + 2,0xffffffff);
    FUN_ram_4ff41254(iVar2 + 8,piVar3[1],param_1[4],param_2);
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(param_1 + 2);
    uVar1 = 0;
  }
  else {
    if (DAT_ram_4ff47dac != 0) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___channel_is_c_ram_4ff58154,uVar1,&DAT_ram_481e0c8c,
                 "gdma_start",0x235);
    }
    uVar1 = 0x103;
  }
  return uVar1;
}


